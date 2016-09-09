// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.app.Fragment.h>
#include <Android.android.app.TaskStackBuilder.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.Configuration.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.util.AttributeSet.h>
#include <Android.android.view.ActionMode.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.Menu.h>
#include <Android.android.view.MenuItem.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.WindowManagerDLRLayoutParams.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNINativeMethod.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Bootstrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Iterator.h>
#include <Android.Runtime.BooleanArray.h>
#include <Android.Runtime.ByteArray.h>
#include <Android.Runtime.CharArray.h>
#include <Android.Runtime.DoubleArray.h>
#include <Android.Runtime.FloatArray.h>
#include <Android.Runtime.IntArray.h>
#include <Android.Runtime.JAEnumerator-1.h>
#include <Android.Runtime.JavaGetter-1.h>
#include <Android.Runtime.JEnumerator.h>
#include <Android.Runtime.JOAEnumerator-1.h>
#include <Android.Runtime.LongArray.h>
#include <Android.Runtime.NativeActivityHelper.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Android.Runtime.RunnableAction.h>
#include <Android.Runtime.ShortArray.h>
#include <Android.Runtime.UnoHelper.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
//~
//~

//        #if (!#{Android.Runtime.NativeActivityHelper.OnActionModeFinished:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onActionModeFinished(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.ActionMode} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.ActionMode})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.ActionMode:TypeOf}, false, true)}) : (#{Android.android.view.ActionMode})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnActionModeFinished}==NULL) return;
//        #{OnActionModeFinished:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnActionModeStarted:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onActionModeStarted(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.ActionMode} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.ActionMode})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.ActionMode:TypeOf}, false, true)}) : (#{Android.android.view.ActionMode})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnActionModeStarted}==NULL) return;
//        #{OnActionModeStarted:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnActivityResult:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onActivityResult(JNIEnv *env, jclass clazz, jint arg0, jint arg1, jobject arg2, jlong arg2id) {
//        uAutoReleasePool pool;
//        #{Android.android.content.Intent} uarg2id = (arg2id==0 ? NULL : (arg2id == -1 ? ((#{Android.android.content.Intent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg2,(#{Uno.Type})#{Android.android.content.Intent:TypeOf}, false, true)}) : (#{Android.android.content.Intent})uLoadWeak((uWeakObject*)arg2id)));
//
//        try
//        {
//        if (#{OnActivityResult}==NULL) return;
//        #{OnActivityResult:Call(arg0, arg1, uarg2id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnAttachFragment:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onAttachFragment(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.app.Fragment} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.app.Fragment})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.app.Fragment:TypeOf}, false, true)}) : (#{Android.android.app.Fragment})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnAttachFragment}==NULL) return;
//        #{OnAttachFragment:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnBackPressed:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onBackPressed(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnBackPressed}==NULL) return;
//        #{OnBackPressed:Call()};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnContentChanged:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onContentChanged(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnContentChanged}==NULL) return;
//        #{OnContentChanged:Call()};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnContextItemSelected:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onContextItemSelected(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MenuItem} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.MenuItem})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.MenuItem:TypeOf}, false, true)}) : (#{Android.android.view.MenuItem})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnContextItemSelected}==NULL) return false;
//        if (#{OnContextItemSelected} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnContextItemSelected:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnContextMenuClosed:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onContextMenuClosed(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.Menu} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.Menu})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.Menu:TypeOf}, false, true)}) : (#{Android.android.view.Menu})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnContextMenuClosed}==NULL) return;
//        #{OnContextMenuClosed:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnGenericMotionEvent:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onGenericMotionEvent(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MotionEvent} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.MotionEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.MotionEvent:TypeOf}, false, true)}) : (#{Android.android.view.MotionEvent})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnGenericMotionEvent} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnGenericMotionEvent:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyDown:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyDown(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeak((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnKeyDown} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyDown:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyLongPress:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyLongPress(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeak((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnKeyLongPress} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyLongPress:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyMultiple:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyMultiple(JNIEnv *env, jclass clazz, jint arg0, jint arg1, jobject arg2, jlong arg2id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg2id = (arg2id==0 ? NULL : (arg2id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg2,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeak((uWeakObject*)arg2id)));
//
//        try
//        {
//        if (#{OnKeyMultiple} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyMultiple:Call(arg0, arg1, uarg2id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyShortcut:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyShortcut(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeak((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnKeyShortcut} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyShortcut:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyUp:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyUp(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeak((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnKeyUp} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyUp:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnLowMemory:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onLowMemory(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnLowMemory}==NULL) return;
//        #{OnLowMemory:Call()};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnMenuItemSelected:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onMenuItemSelected(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MenuItem} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.MenuItem})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.MenuItem:TypeOf}, false, true)}) : (#{Android.android.view.MenuItem})uLoadWeak((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnMenuItemSelected} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnMenuItemSelected:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnMenuOpened:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onMenuOpened(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.Menu} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.Menu})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.Menu:TypeOf}, false, true)}) : (#{Android.android.view.Menu})uLoadWeak((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnMenuOpened} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnMenuOpened:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnNavigateUp:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onNavigateUp(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnNavigateUp} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnNavigateUp:Call()};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnNavigateUpFromChild:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onNavigateUpFromChild(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.app.Activity} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.app.Activity})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.app.Activity:TypeOf}, false, true)}) : (#{Android.android.app.Activity})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnNavigateUpFromChild} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnNavigateUpFromChild:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnPrepareNavigateUpTaskStack:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onPrepareNavigateUpTaskStack(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.app.TaskStackBuilder} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.app.TaskStackBuilder})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.app.TaskStackBuilder:TypeOf}, false, true)}) : (#{Android.android.app.TaskStackBuilder})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnPrepareNavigateUpTaskStack}==NULL) return;
//        #{OnPrepareNavigateUpTaskStack:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnProvideAssistData:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onProvideAssistData(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.os.Bundle} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.os.Bundle})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.os.Bundle:TypeOf}, false, true)}) : (#{Android.android.os.Bundle})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnProvideAssistData}==NULL) return;
//        #{OnProvideAssistData:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnSearchRequested:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onSearchRequested(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnSearchRequested} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnSearchRequested:Call()};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnTouchEvent:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onTouchEvent(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MotionEvent} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.MotionEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.MotionEvent:TypeOf}, false, true)}) : (#{Android.android.view.MotionEvent})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnTouchEvent} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnTouchEvent:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnTrackballEvent:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onTrackballEvent(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MotionEvent} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.MotionEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.MotionEvent:TypeOf}, false, true)}) : (#{Android.android.view.MotionEvent})uLoadWeak((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnTrackballEvent} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnTrackballEvent:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnTrimMemory:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onTrimMemory(JNIEnv *env, jclass clazz, jint arg0) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnTrimMemory}==NULL) return;
//        #{OnTrimMemory:Call(arg0)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnUserInteraction:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onUserInteraction(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnUserInteraction} != NULL) {
//        #{OnUserInteraction:Call()};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uString::Ansi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
JNFUN(void,Binding_Android_Runtime_RunnableAction__run31342,jlong ujPtr) {
    INITCALLBACK(uPtr,uObject*);
    JTRY
    ::g::Android::java::lang::Runnable::run(uInterface(uPtr, ::g::Android::java::lang::Runnable_typeof()));
    JCATCH
}
static uString* STRINGS[7];
static uType* TYPES[32];

namespace g{
namespace Android{
namespace Runtime{

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class BooleanArray :843
// {
static void BooleanArray_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[1] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(BooleanArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(BooleanArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(BooleanArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)BooleanArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Bool_typeof()), 0));
}

BooleanArray_type* BooleanArray_typeof()
{
    static uSStrong<BooleanArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(BooleanArray);
    options.TypeSize = sizeof(BooleanArray_type);
    type = (BooleanArray_type*)uClassType::New("Android.Runtime.BooleanArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = BooleanArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))BooleanArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<bool> GetEnumerator() :864
void BooleanArray__GetEnumerator_fn(BooleanArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<bool> GetEnumerator() [instance] :864
uObject* BooleanArray::GetEnumerator()
{
    uStackFrame __("Android.Runtime.BooleanArray", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[1/*Android.Runtime.JAEnumerator<bool>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[3/*Android.Runtime.JavaGetter<bool>*/], (void*)::g::Android::Base::JNI__GetBooleanArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class ByteArray :883
// {
static void ByteArray_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::SByte_typeof());
    ::TYPES[5] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::SByte_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::SByte_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ByteArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ByteArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::SByte_typeof()), offsetof(ByteArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)ByteArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::SByte_typeof()), 0));
}

ByteArray_type* ByteArray_typeof()
{
    static uSStrong<ByteArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ByteArray);
    options.TypeSize = sizeof(ByteArray_type);
    type = (ByteArray_type*)uClassType::New("Android.Runtime.ByteArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = ByteArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ByteArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<sbyte> GetEnumerator() :904
void ByteArray__GetEnumerator_fn(ByteArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<sbyte> GetEnumerator() [instance] :904
uObject* ByteArray::GetEnumerator()
{
    uStackFrame __("Android.Runtime.ByteArray", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[5/*Android.Runtime.JAEnumerator<sbyte>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[6/*Android.Runtime.JavaGetter<sbyte>*/], (void*)::g::Android::Base::JNI__GetByteArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class CharArray :923
// {
static void CharArray_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Char_typeof());
    ::TYPES[8] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Char_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[9] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Char_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CharArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CharArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Char_typeof()), offsetof(CharArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)CharArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Char_typeof()), 0));
}

CharArray_type* CharArray_typeof()
{
    static uSStrong<CharArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CharArray);
    options.TypeSize = sizeof(CharArray_type);
    type = (CharArray_type*)uClassType::New("Android.Runtime.CharArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = CharArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))CharArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<char> GetEnumerator() :944
void CharArray__GetEnumerator_fn(CharArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<char> GetEnumerator() [instance] :944
uObject* CharArray::GetEnumerator()
{
    uStackFrame __("Android.Runtime.CharArray", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[8/*Android.Runtime.JAEnumerator<char>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[9/*Android.Runtime.JavaGetter<char>*/], (void*)::g::Android::Base::JNI__GetCharArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class DoubleArray :1123
// {
static void DoubleArray_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[11] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[12] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(DoubleArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(DoubleArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(DoubleArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)DoubleArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Double_typeof()), 0));
}

DoubleArray_type* DoubleArray_typeof()
{
    static uSStrong<DoubleArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DoubleArray);
    options.TypeSize = sizeof(DoubleArray_type);
    type = (DoubleArray_type*)uClassType::New("Android.Runtime.DoubleArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = DoubleArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))DoubleArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<double> GetEnumerator() :1145
void DoubleArray__GetEnumerator_fn(DoubleArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<double> GetEnumerator() [instance] :1145
uObject* DoubleArray::GetEnumerator()
{
    uStackFrame __("Android.Runtime.DoubleArray", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[11/*Android.Runtime.JAEnumerator<double>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[12/*Android.Runtime.JavaGetter<double>*/], (void*)::g::Android::Base::JNI__GetDoubleArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class FloatArray :1084
// {
static void FloatArray_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[14] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[15] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Float_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(FloatArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(FloatArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(FloatArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)FloatArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float_typeof()), 0));
}

FloatArray_type* FloatArray_typeof()
{
    static uSStrong<FloatArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FloatArray);
    options.TypeSize = sizeof(FloatArray_type);
    type = (FloatArray_type*)uClassType::New("Android.Runtime.FloatArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = FloatArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))FloatArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<float> GetEnumerator() :1104
void FloatArray__GetEnumerator_fn(FloatArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<float> GetEnumerator() [instance] :1104
uObject* FloatArray::GetEnumerator()
{
    uStackFrame __("Android.Runtime.FloatArray", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[14/*Android.Runtime.JAEnumerator<float>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[15/*Android.Runtime.JavaGetter<float>*/], (void*)::g::Android::Base::JNI__GetFloatArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class IntArray :1005
// {
static void IntArray_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[17] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[18] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Int_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(IntArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(IntArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(IntArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)IntArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Int_typeof()), 0));
}

IntArray_type* IntArray_typeof()
{
    static uSStrong<IntArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(IntArray);
    options.TypeSize = sizeof(IntArray_type);
    type = (IntArray_type*)uClassType::New("Android.Runtime.IntArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = IntArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))IntArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<int> GetEnumerator() :1026
void IntArray__GetEnumerator_fn(IntArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<int> GetEnumerator() [instance] :1026
uObject* IntArray::GetEnumerator()
{
    uStackFrame __("Android.Runtime.IntArray", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[17/*Android.Runtime.JAEnumerator<int>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[18/*Android.Runtime.JavaGetter<int>*/], (void*)::g::Android::Base::JNI__GetIntArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class JAEnumerator<T> :758
// {
static void JAEnumerator_build(uType* type)
{
    ::TYPES[19] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(JAEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JAEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(JAEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Android::Runtime::JAEnumerator, _current), 0,
        ::g::Android::Runtime::JavaGetter_typeof()->MakeType(type->T(0)), offsetof(::g::Android::Runtime::JAEnumerator, _getter), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Android::Runtime::JAEnumerator, _length), 0,
        ::g::Android::Base::Wrappers::JWrapper_typeof(), offsetof(::g::Android::Runtime::JAEnumerator, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", NULL, (void*)JAEnumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("MoveNext", NULL, (void*)JAEnumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)JAEnumerator__New1_fn, 0, true, type, 3, ::g::Android::Base::Wrappers::JWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Runtime::JavaGetter_typeof()->MakeType(type->T(0))));
}

JAEnumerator_type* JAEnumerator_typeof()
{
    static uSStrong<JAEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(JAEnumerator);
    options.TypeSize = sizeof(JAEnumerator_type);
    type = (JAEnumerator_type*)uClassType::New("Android.Runtime.JAEnumerator`1", options);
    type->fp_build_ = JAEnumerator_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))JAEnumerator__UnoIDisposableDispose_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))JAEnumerator__get_Current_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))JAEnumerator__MoveNext_fn;
    return type;
}

// public JAEnumerator(Android.Base.Wrappers.JWrapper source, int length, Android.Runtime.JavaGetter<T> getter) :765
void JAEnumerator__ctor__fn(JAEnumerator* __this, ::g::Android::Base::Wrappers::JWrapper* source, int* length, uDelegate* getter)
{
    __this->ctor_(source, *length, getter);
}

// public T get_Current() :773
void JAEnumerator__get_Current_fn(JAEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Android.Runtime.JAEnumerator`1", "get_Current()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_getter)->Invoke(&ret2, 2, (uObject*)__this->_source, uCRef<int>(__this->_current)), ret2)), void();
}

// public bool MoveNext() :780
void JAEnumerator__MoveNext_fn(JAEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public JAEnumerator New(Android.Base.Wrappers.JWrapper source, int length, Android.Runtime.JavaGetter<T> getter) :765
void JAEnumerator__New1_fn(uType* __type, ::g::Android::Base::Wrappers::JWrapper* source, int* length, uDelegate* getter, JAEnumerator** __retval)
{
    *__retval = JAEnumerator::New1(__type, source, *length, getter);
}

// public void Uno.IDisposable.Dispose() :790
void JAEnumerator__UnoIDisposableDispose_fn(JAEnumerator* __this)
{
}

// public JAEnumerator(Android.Base.Wrappers.JWrapper source, int length, Android.Runtime.JavaGetter<T> getter) [instance] :765
void JAEnumerator::ctor_(::g::Android::Base::Wrappers::JWrapper* source, int length, uDelegate* getter)
{
    uStackFrame __("Android.Runtime.JAEnumerator`1", ".ctor(Android.Base.Wrappers.JWrapper,int,Android.Runtime.JavaGetter<T>)");
    _current = -1;
    _length = length;
    _source = source;
    _getter = getter;
}

// public bool MoveNext() [instance] :780
bool JAEnumerator::MoveNext()
{
    uStackFrame __("Android.Runtime.JAEnumerator`1", "MoveNext()");

    if ((_current + 1) >= _length)
        return false;
    else
    {
        _current = (_current + 1);
        return true;
    }
}

// public JAEnumerator New(Android.Base.Wrappers.JWrapper source, int length, Android.Runtime.JavaGetter<T> getter) [static] :765
JAEnumerator* JAEnumerator::New1(uType* __type, ::g::Android::Base::Wrappers::JWrapper* source, int length, uDelegate* getter)
{
    JAEnumerator* obj1 = (JAEnumerator*)uNew(__type);
    obj1->ctor_(source, length, getter);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public extern delegate T JavaGetter<T>(Android.Base.Wrappers.IJWrapper array, int index) :755
uDelegateType* JavaGetter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Android.Runtime.JavaGetter`1", 2, 1);
    type->SetSignature(type->T(0),
        ::g::Android::Base::Wrappers::IJWrapper_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class JEnumerator :707
// {
static void JEnumerator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Not in valid state to get current value from Enumerator");
    ::TYPES[20] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Iterable_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(JEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(JEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Android::java::lang::Object_typeof(), offsetof(::g::Android::Runtime::JEnumerator, _current), 0,
        ::g::Android::java::util::Iterator_typeof(), offsetof(::g::Android::Runtime::JEnumerator, _iterator), 0,
        ::g::Android::java::lang::Iterable_typeof(), offsetof(::g::Android::Runtime::JEnumerator, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Android::Runtime::JEnumerator, begun), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Current", NULL, (void*)JEnumerator__get_Current_fn, 0, false, ::g::Android::java::lang::Object_typeof(), 0),
        new uFunction("MoveNext", NULL, (void*)JEnumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)JEnumerator__New1_fn, 0, true, JEnumerator_typeof(), 1, ::g::Android::java::lang::Iterable_typeof()),
        new uFunction("Reset", NULL, (void*)JEnumerator__Reset_fn, 0, false, uVoid_typeof(), 0));
}

JEnumerator_type* JEnumerator_typeof()
{
    static uSStrong<JEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(JEnumerator);
    options.TypeSize = sizeof(JEnumerator_type);
    type = (JEnumerator_type*)uClassType::New("Android.Runtime.JEnumerator", options);
    type->fp_build_ = JEnumerator_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))JEnumerator__UnoIDisposableDispose_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))JEnumerator__get_Current_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))JEnumerator__MoveNext_fn;
    return type;
}

// public JEnumerator(Android.java.lang.Iterable source) :714
void JEnumerator__ctor__fn(JEnumerator* __this, uObject* source)
{
    __this->ctor_(source);
}

// private Android.java.lang.Object _currentElement() :721
void JEnumerator___currentElement_fn(JEnumerator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->_currentElement();
}

// public Android.java.lang.Object get_Current() :720
void JEnumerator__get_Current_fn(JEnumerator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->Current();
}

// public bool MoveNext() :735
void JEnumerator__MoveNext_fn(JEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public JEnumerator New(Android.java.lang.Iterable source) :714
void JEnumerator__New1_fn(uObject* source, JEnumerator** __retval)
{
    *__retval = JEnumerator::New1(source);
}

// public void Reset() :730
void JEnumerator__Reset_fn(JEnumerator* __this)
{
    __this->Reset();
}

// public void Uno.IDisposable.Dispose() :745
void JEnumerator__UnoIDisposableDispose_fn(JEnumerator* __this)
{
    uStackFrame __("Android.Runtime.JEnumerator", "Uno.IDisposable.Dispose()");
    __this->_current = NULL;
    __this->_iterator = NULL;
    __this->_source = NULL;
}

// public JEnumerator(Android.java.lang.Iterable source) [instance] :714
void JEnumerator::ctor_(uObject* source)
{
    uStackFrame __("Android.Runtime.JEnumerator", ".ctor(Android.java.lang.Iterable)");
    _source = source;
    Reset();
}

// private Android.java.lang.Object _currentElement() [instance] :721
::g::Android::java::lang::Object* JEnumerator::_currentElement()
{
    uStackFrame __("Android.Runtime.JEnumerator", "_currentElement()");

    if (!begun)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Not in vali...*/]));
    else
        return _current;
}

// public Android.java.lang.Object get_Current() [instance] :720
::g::Android::java::lang::Object* JEnumerator::Current()
{
    uStackFrame __("Android.Runtime.JEnumerator", "get_Current()");
    return _currentElement();
}

// public bool MoveNext() [instance] :735
bool JEnumerator::MoveNext()
{
    uStackFrame __("Android.Runtime.JEnumerator", "MoveNext()");
    begun = true;
    bool hasNext = ::g::Android::java::util::Iterator::hasNext(uInterface(uPtr(_iterator), ::TYPES[20/*Android.java.util.Iterator*/]));

    if (hasNext)
        _current = ::g::Android::java::util::Iterator::next(uInterface(uPtr(_iterator), ::TYPES[20/*Android.java.util.Iterator*/]));

    return hasNext;
}

// public void Reset() [instance] :730
void JEnumerator::Reset()
{
    uStackFrame __("Android.Runtime.JEnumerator", "Reset()");
    _iterator = ::g::Android::java::lang::Iterable::iterator(uInterface(uPtr(_source), ::TYPES[21/*Android.java.lang.Iterable*/]));
}

// public JEnumerator New(Android.java.lang.Iterable source) [static] :714
JEnumerator* JEnumerator::New1(uObject* source)
{
    JEnumerator* obj1 = (JEnumerator*)uNew(JEnumerator_typeof());
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class JOAEnumerator<T> :798
// {
static void JOAEnumerator_build(uType* type)
{
    ::STRINGS[1] = uString::Const("JavaEnumerator: The position is not valid.");
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(JOAEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JOAEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(JOAEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Android::Runtime::JOAEnumerator, _current), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Android::Runtime::JOAEnumerator, _length), 0,
        ::g::Android::Runtime::ObjectArray_typeof()->MakeType(type->T(0)), offsetof(::g::Android::Runtime::JOAEnumerator, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", NULL, (void*)JOAEnumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("MoveNext", NULL, (void*)JOAEnumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)JOAEnumerator__New1_fn, 0, true, type, 2, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(type->T(0)), ::g::Uno::Int_typeof()));
}

JOAEnumerator_type* JOAEnumerator_typeof()
{
    static uSStrong<JOAEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(JOAEnumerator);
    options.TypeSize = sizeof(JOAEnumerator_type);
    type = (JOAEnumerator_type*)uClassType::New("Android.Runtime.JOAEnumerator`1", options);
    type->fp_build_ = JOAEnumerator_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))JOAEnumerator__UnoIDisposableDispose_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))JOAEnumerator__get_Current_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))JOAEnumerator__MoveNext_fn;
    return type;
}

// public JOAEnumerator(Android.Runtime.ObjectArray<T> source, int length) :804
void JOAEnumerator__ctor__fn(JOAEnumerator* __this, ::g::Android::Runtime::ObjectArray* source, int* length)
{
    __this->ctor_(source, *length);
}

// public T get_Current() :812
void JOAEnumerator__get_Current_fn(JOAEnumerator* __this, uObject** __retval)
{
    *__retval = __this->Current();
}

// public bool MoveNext() :826
void JOAEnumerator__MoveNext_fn(JOAEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public JOAEnumerator New(Android.Runtime.ObjectArray<T> source, int length) :804
void JOAEnumerator__New1_fn(uType* __type, ::g::Android::Runtime::ObjectArray* source, int* length, JOAEnumerator** __retval)
{
    *__retval = JOAEnumerator::New1(__type, source, *length);
}

// public void Uno.IDisposable.Dispose() :836
void JOAEnumerator__UnoIDisposableDispose_fn(JOAEnumerator* __this)
{
}

// public JOAEnumerator(Android.Runtime.ObjectArray<T> source, int length) [instance] :804
void JOAEnumerator::ctor_(::g::Android::Runtime::ObjectArray* source, int length)
{
    uStackFrame __("Android.Runtime.JOAEnumerator`1", ".ctor(Android.Runtime.ObjectArray<T>,int)");
    _current = -1;
    _length = length;
    _source = source;
}

// public T get_Current() [instance] :812
uObject* JOAEnumerator::Current()
{
    uStackFrame __("Android.Runtime.JOAEnumerator`1", "get_Current()");

    if ((_current < 0) || (_current >= _length))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"JavaEnumera...*/]));
    else
        return (uObject*)uPtr(_source)->Item(_current);
}

// public bool MoveNext() [instance] :826
bool JOAEnumerator::MoveNext()
{
    uStackFrame __("Android.Runtime.JOAEnumerator`1", "MoveNext()");

    if ((_current + 1) >= _length)
        return false;
    else
    {
        _current = (_current + 1);
        return true;
    }
}

// public JOAEnumerator New(Android.Runtime.ObjectArray<T> source, int length) [static] :804
JOAEnumerator* JOAEnumerator::New1(uType* __type, ::g::Android::Runtime::ObjectArray* source, int length)
{
    JOAEnumerator* obj1 = (JOAEnumerator*)uNew(__type);
    obj1->ctor_(source, length);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class LongArray :1045
// {
static void LongArray_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Long_typeof());
    ::TYPES[23] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Long_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[24] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Long_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(LongArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LongArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Long_typeof()), offsetof(LongArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)LongArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Long_typeof()), 0));
}

LongArray_type* LongArray_typeof()
{
    static uSStrong<LongArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LongArray);
    options.TypeSize = sizeof(LongArray_type);
    type = (LongArray_type*)uClassType::New("Android.Runtime.LongArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = LongArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))LongArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<long> GetEnumerator() :1065
void LongArray__GetEnumerator_fn(LongArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<long> GetEnumerator() [instance] :1065
uObject* LongArray::GetEnumerator()
{
    uStackFrame __("Android.Runtime.LongArray", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[23/*Android.Runtime.JAEnumerator<long>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[24/*Android.Runtime.JavaGetter<long>*/], (void*)::g::Android::Base::JNI__GetLongArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public static extern class NativeActivityHelper :637
// {
// static NativeActivityHelper() :684
static void NativeActivityHelper__cctor__fn(uType* __type)
{
    NativeActivityHelper::Init();
}

static void NativeActivityHelper_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Init", NULL, (void*)NativeActivityHelper__Init_fn, 0, true, uVoid_typeof(), 0));
}

uClassType* NativeActivityHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Runtime.NativeActivityHelper", options);
    type->fp_build_ = NativeActivityHelper_build;
    type->fp_cctor_ = NativeActivityHelper__cctor__fn;
    return type;
}

// public static extern void Init() :690
void NativeActivityHelper__Init_fn()
{
    NativeActivityHelper::Init();
}

// public static extern void Init() [static] :690
void NativeActivityHelper::Init()
{
    uStackFrame __("Android.Runtime.NativeActivityHelper", "Init()");
    NativeActivityHelper_typeof()->Init();
    ::g::Android::Base::JNI::Init();
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    
    jclass cls = ::g::Android::Base::JNI::LoadClass(jni, "Fuse.Preview.Dripdoctors");
    
    JNINativeMethod nativeFunc;
    //#if (!#{Android.Runtime.NativeActivityHelper.OnActionModeFinished:IsStripped})
    //nativeFunc = {(char* const)"__n_onActionModeFinished", (char* const)"(Landroid/view/ActionMode;J)V", (void *)&Android_NativeActivityHelper_onActionModeFinished};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnActionModeStarted:IsStripped})
    //nativeFunc = {(char* const)"__n_onActionModeStarted", (char* const)"(Landroid/view/ActionMode;J)V", (void *)&Android_NativeActivityHelper_onActionModeStarted};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnAttachFragment:IsStripped})
    //nativeFunc = {(char* const)"__n_onAttachFragment", (char* const)"(Landroid/app/Fragment;J)V", (void *)&Android_NativeActivityHelper_onAttachFragment};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnBackPressed:IsStripped})
    //nativeFunc = {(char* const)"__n_onBackPressed", (char* const)"()V", (void *)&Android_NativeActivityHelper_onBackPressed};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnContentChanged:IsStripped})
    //nativeFunc = {(char* const)"__n_onContentChanged", (char* const)"()V", (void *)&Android_NativeActivityHelper_onContentChanged};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnContextItemSelected:IsStripped})
    //nativeFunc = {(char* const)"__n_onContextItemSelected", (char* const)"(Landroid/view/MenuItem;J)Z", (void *)&Android_NativeActivityHelper_onContextItemSelected};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnContextMenuClosed:IsStripped})
    //nativeFunc = {(char* const)"__n_onContextMenuClosed", (char* const)"(Landroid/view/Menu;J)V", (void *)&Android_NativeActivityHelper_onContextMenuClosed};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnGenericMotionEvent:IsStripped})
    //nativeFunc = {(char* const)"__n_onGenericMotionEvent", (char* const)"(Landroid/view/MotionEvent;J)Z", (void *)&Android_NativeActivityHelper_onGenericMotionEvent};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyDown:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyDown", (char* const)"(ILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyDown};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyLongPress:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyLongPress", (char* const)"(ILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyLongPress};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyMultiple:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyMultiple", (char* const)"(IILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyMultiple};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyShortcut:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyShortcut", (char* const)"(ILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyShortcut};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyUp:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyUp", (char* const)"(ILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyUp};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnLowMemory:IsStripped})
    //nativeFunc = {(char* const)"__n_onLowMemory", (char* const)"()V", (void *)&Android_NativeActivityHelper_onLowMemory};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnMenuItemSelected:IsStripped})
    //nativeFunc = {(char* const)"__n_onMenuItemSelected", (char* const)"(ILandroid/view/MenuItem;J)Z", (void *)&Android_NativeActivityHelper_onMenuItemSelected};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnMenuOpened:IsStripped})
    //nativeFunc = {(char* const)"__n_onMenuOpened", (char* const)"(ILandroid/view/Menu;J)Z", (void *)&Android_NativeActivityHelper_onMenuOpened};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnNavigateUp:IsStripped})
    //nativeFunc = {(char* const)"__n_onNavigateUp", (char* const)"()Z", (void *)&Android_NativeActivityHelper_onNavigateUp};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnNavigateUpFromChild:IsStripped})
    //nativeFunc = {(char* const)"__n_onNavigateUpFromChild", (char* const)"(Landroid/app/Activity;J)Z", (void *)&Android_NativeActivityHelper_onNavigateUpFromChild};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnPrepareNavigateUpTaskStack:IsStripped})
    //nativeFunc = {(char* const)"__n_onPrepareNavigateUpTaskStack", (char* const)"(Landroid/app/TaskStackBuilder;J)V", (void *)&Android_NativeActivityHelper_onPrepareNavigateUpTaskStack};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnProvideAssistData:IsStripped})
    //nativeFunc = {(char* const)"__n_onProvideAssistData", (char* const)"(Landroid/os/Bundle;J)V", (void *)&Android_NativeActivityHelper_onProvideAssistData};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnSearchRequested:IsStripped})
    //nativeFunc = {(char* const)"__n_onSearchRequested", (char* const)"()Z", (void *)&Android_NativeActivityHelper_onSearchRequested};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnTouchEvent:IsStripped})
    //nativeFunc = {(char* const)"__n_onTouchEvent", (char* const)"(Landroid/view/MotionEvent;J)Z", (void *)&Android_NativeActivityHelper_onTouchEvent};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnTrackballEvent:IsStripped})
    //nativeFunc = {(char* const)"__n_onTrackballEvent", (char* const)"(Landroid/view/MotionEvent;J)Z", (void *)&Android_NativeActivityHelper_onTrackballEvent};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnTrimMemory:IsStripped})
    //nativeFunc = {(char* const)"__n_onTrimMemory", (char* const)"(I)V", (void *)&Android_NativeActivityHelper_onTrimMemory};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnUserInteraction:IsStripped})
    //nativeFunc = {(char* const)"__n_onUserInteraction", (char* const)"()V", (void *)&Android_NativeActivityHelper_onUserInteraction};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnActivityResult:IsStripped})
    //nativeFunc = {(char* const)"__n_onActivityResult", (char* const)"(IILandroid/content/Intent;J)V", (void *)&Android_NativeActivityHelper_onActivityResult};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endi
    
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class ObjectArray<T> :1176
// {
static void ObjectArray_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Index (");
    ::STRINGS[3] = uString::Const(") out of bounds for array of length ");
    ::TYPES[25] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[26] = ::g::Android::Runtime::JOAEnumerator_typeof();
    ::TYPES[19] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[27] = uObject_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)),
        ::g::Android::Runtime::JOAEnumerator_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ObjectArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ObjectArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ObjectArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(3,
        new uFunction("GetEnumerator", NULL, (void*)ObjectArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_Item", NULL, (void*)ObjectArray__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)ObjectArray__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)));
}

ObjectArray_type* ObjectArray_typeof()
{
    static uSStrong<ObjectArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ObjectArray);
    options.TypeSize = sizeof(ObjectArray_type);
    type = (ObjectArray_type*)uClassType::New("Android.Runtime.ObjectArray`1", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = ObjectArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ObjectArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :1207
void ObjectArray__GetEnumerator_fn(ObjectArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public T get_Item(int i) :1186
void ObjectArray__get_Item_fn(ObjectArray* __this, int* i, uObject** __retval)
{
    *__retval = __this->Item(*i);
}

// public void set_Item(int i, T value) :1196
void ObjectArray__set_Item_fn(ObjectArray* __this, int* i, uObject* value)
{
    __this->Item(*i, value);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :1207
uObject* ObjectArray::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Android.Runtime.JOAEnumerator<T>*/),
    };
    uStackFrame __("Android.Runtime.ObjectArray`1", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JOAEnumerator*)::g::Android::Runtime::JOAEnumerator::New1(__types[2], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject)));
}

// public T get_Item(int i) [instance] :1186
uObject* ObjectArray::Item(int i)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Android.Runtime.ObjectArray`1", "get_Item(int)");
    int len = ::g::Android::Base::JNI::GetArrayLength(_javaObject);

    if ((i >= 0) && (i < len))
    {
        jobject jobj = ::g::Android::Base::JNI::GetObjectArrayElement((uObject*)this, i);
        return uAs<uObject*>(::g::Android::Base::Wrappers::JWrapper::New1(jobj, ::g::Android::Base::JNI::GetDefaultType(), false, true), __types[0]);
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[2/*"Index ("*/], uBox<int>(::g::Uno::Int_typeof(), i)), ::STRINGS[3/*") out of bo...*/]), uBox<int>(::g::Uno::Int_typeof(), len))));
}

// public void set_Item(int i, T value) [instance] :1196
void ObjectArray::Item(int i, uObject* value)
{
    uStackFrame __("Android.Runtime.ObjectArray`1", "set_Item(int,T)");
    int len = ::g::Android::Base::JNI::GetArrayLength(_javaObject);

    if ((i >= 0) && (i < len))
    {
        uObject* obj = (uObject*)value;
        ::g::Android::Base::JNI::SetObjectArrayElement((uObject*)this, i, ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(obj), ::TYPES[19/*Android.Base.Wrappers.IJWrapper*/])));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[2/*"Index ("*/], uBox<int>(::g::Uno::Int_typeof(), i)), ::STRINGS[3/*") out of bo...*/]), uBox<int>(::g::Uno::Int_typeof(), len))));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class RunnableAction :58
// {
static void RunnableAction_build(uType* type)
{
    ::STRINGS[4] = uString::Const("com.Bindings.Binding_Android_Runtime_RunnableAction");
    ::STRINGS[5] = uString::Const("<init>");
    ::STRINGS[6] = uString::Const("(J)V");
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(RunnableAction_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(RunnableAction_type, interface1),
        ::g::Android::java::lang::Runnable_typeof(), offsetof(RunnableAction_type, interface2));
    type->SetFields(5,
        ::g::Uno::Action_typeof(), offsetof(::g::Android::Runtime::RunnableAction, _internalAction), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Runtime::RunnableAction::_javaClass2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)RunnableAction__New5_fn, 0, true, RunnableAction_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("run", NULL, (void*)RunnableAction__run_fn, 0, false, uVoid_typeof(), 0));
}

RunnableAction_type* RunnableAction_typeof()
{
    static uSStrong<RunnableAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(RunnableAction);
    options.TypeSize = sizeof(RunnableAction_type);
    type = (RunnableAction_type*)uClassType::New("Android.Runtime.RunnableAction", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = RunnableAction_build;
    type->interface2.fp_run = (void(*)(uObject*))RunnableAction__run_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public RunnableAction(Uno.Action actn) :61
void RunnableAction__ctor_5_fn(RunnableAction* __this, uDelegate* actn)
{
    __this->ctor_5(actn);
}

// public RunnableAction New(Uno.Action actn) :61
void RunnableAction__New5_fn(uDelegate* actn, RunnableAction** __retval)
{
    *__retval = RunnableAction::New5(actn);
}

// public void run() :65
void RunnableAction__run_fn(RunnableAction* __this)
{
    __this->run();
}

jclass RunnableAction::_javaClass2_;

// public RunnableAction(Uno.Action actn) [instance] :61
void RunnableAction::ctor_5(uDelegate* actn)
{
    uStackFrame __("Android.Runtime.RunnableAction", ".ctor(Uno.Action)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[4/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(RunnableAction::_javaClass2_, ::g::Android::Base::Primitives::ujclass::Null()))
    {
        RunnableAction::_javaClass2_ = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[4/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_run","(J)V",Binding_Android_Runtime_RunnableAction__run31342);
        COMMIT_REG_MTD(RunnableAction::_javaClass2_);
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[5/*"<init>"*/], ::STRINGS[6/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__weakptr));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _internalAction = actn;
}

// public void run() [instance] :65
void RunnableAction::run()
{
    uStackFrame __("Android.Runtime.RunnableAction", "run()");
    uPtr(_internalAction)->InvokeVoid();
}

// public RunnableAction New(Uno.Action actn) [static] :61
RunnableAction* RunnableAction::New5(uDelegate* actn)
{
    RunnableAction* obj1 = (RunnableAction*)uNew(RunnableAction_typeof());
    obj1->ctor_5(actn);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public sealed extern class ShortArray :964
// {
static void ShortArray_build(uType* type)
{
    ::TYPES[28] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Short_typeof());
    ::TYPES[29] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Short_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[30] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Short_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ShortArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ShortArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Short_typeof()), offsetof(ShortArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)ShortArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Short_typeof()), 0));
}

ShortArray_type* ShortArray_typeof()
{
    static uSStrong<ShortArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ShortArray);
    options.TypeSize = sizeof(ShortArray_type);
    type = (ShortArray_type*)uClassType::New("Android.Runtime.ShortArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = ShortArray_build;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ShortArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Uno.Collections.IEnumerator<short> GetEnumerator() :985
void ShortArray__GetEnumerator_fn(ShortArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<short> GetEnumerator() [instance] :985
uObject* ShortArray::GetEnumerator()
{
    uStackFrame __("Android.Runtime.ShortArray", "GetEnumerator()");
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[29/*Android.Runtime.JAEnumerator<short>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[30/*Android.Runtime.JavaGetter<short>*/], (void*)::g::Android::Base::JNI__GetShortArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno
// ------------------------------------------------

// public static extern class UnoHelper :14
// {
static void UnoHelper_build(uType* type)
{
    ::TYPES[31] = ::g::Android::java::lang::Runnable_typeof();
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Runtime::UnoHelper::_helperCls_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Android::Runtime::UnoHelper::_inited_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Init", NULL, (void*)UnoHelper__Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("RegisterCallback", NULL, (void*)UnoHelper__RegisterCallback_fn, 0, true, uVoid_typeof(), 2, ::g::Android::Base::Primitives::JNINativeMethod_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("RunnableFromAction", NULL, (void*)UnoHelper__RunnableFromAction_fn, 0, true, ::g::Android::java::lang::Runnable_typeof(), 1, ::g::Uno::Action_typeof()));
}

uClassType* UnoHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Runtime.UnoHelper", options);
    type->fp_build_ = UnoHelper_build;
    return type;
}

// public static extern void Init() :51
void UnoHelper__Init_fn()
{
    UnoHelper::Init();
}

// public static extern void RegisterCallback(Android.Base.Primitives.JNINativeMethod nativeFunc, Android.Base.Primitives.ujobject optionalClass) :54
void UnoHelper__RegisterCallback_fn(JNINativeMethod* nativeFunc_, jobject* optionalClass_)
{
    UnoHelper::RegisterCallback(*nativeFunc_, *optionalClass_);
}

// public static Android.java.lang.Runnable RunnableFromAction(Uno.Action actn) :20
void UnoHelper__RunnableFromAction_fn(uDelegate* actn, uObject** __retval)
{
    *__retval = UnoHelper::RunnableFromAction(actn);
}

jclass UnoHelper::_helperCls_;
bool UnoHelper::_inited_;

// public static extern void Init() [static] :51
void UnoHelper::Init()
{
    uStackFrame __("Android.Runtime.UnoHelper", "Init()");
    if (UnoHelper::_inited()) { return; }
    ::g::Android::Base::JNI::Init();
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    UnoHelper::_helperCls() = reinterpret_cast<jclass>(jni->NewGlobalRef(::g::Android::Base::JNI::LoadClass(::g::Android::Base::JNI::GetEnvPtr(), "com.Bindings.UnoHelper")));
    if (!UnoHelper::_helperCls()) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache class for UnoHelper",35)));
    }
    UnoHelper::_inited() = true;
}

// public static extern void RegisterCallback(Android.Base.Primitives.JNINativeMethod nativeFunc, Android.Base.Primitives.ujobject optionalClass) [static] :54
void UnoHelper::RegisterCallback(JNINativeMethod nativeFunc_, jobject optionalClass_)
{
    uStackFrame __("Android.Runtime.UnoHelper", "RegisterCallback(Android.Base.Primitives.JNINativeMethod,Android.Base.Primitives.ujobject)");
    if (!UnoHelper::_inited()) { UnoHelper::Init(); }
    jclass cls;
    if (optionalClass_) {
        cls = (jclass)optionalClass_;
    } else {
        cls = UnoHelper::_helperCls();
    }
    jint attached = ::g::Android::Base::JNI::GetEnvPtr()->RegisterNatives(cls, &nativeFunc_, 1);
    if (attached < 0) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not register the instantiation callback function",54)));
    }
}

// public static Android.java.lang.Runnable RunnableFromAction(Uno.Action actn) [static] :20
uObject* UnoHelper::RunnableFromAction(uDelegate* actn)
{
    uStackFrame __("Android.Runtime.UnoHelper", "RunnableFromAction(Uno.Action)");
    return (uObject*)::g::Android::Runtime::RunnableAction::New5(actn);
}
// }

}}} // ::g::Android::Runtime
