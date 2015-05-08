#include "java-core.hpp"
#include <memory>
#include "android.app.Dialog.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.Resources.hpp"
#include "android.content.res.XmlResourceParser.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.Rect.hpp"
#include "android.inputmethodservice.AbstractInputMethodService.hpp"
#include "android.inputmethodservice.ExtractEditText.hpp"
#include "android.inputmethodservice.InputMethodService.hpp"
#include "android.inputmethodservice.Keyboard.hpp"
#include "android.inputmethodservice.KeyboardView.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.ResultReceiver.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.LayoutInflater.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.View.hpp"
#include "android.view.Window.hpp"
#include "android.view.inputmethod.CompletionInfo.hpp"
#include "android.view.inputmethod.EditorInfo.hpp"
#include "android.view.inputmethod.ExtractedText.hpp"
#include "android.view.inputmethod.InputBinding.hpp"
#include "android.view.inputmethod.InputConnection.hpp"
#include "android.view.inputmethod.InputMethod.hpp"
#include "android.view.inputmethod.InputMethodSession.hpp"
#include "android.view.inputmethod.InputMethodSubtype.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class = nullptr;
jclass android::inputmethodservice::InputMethodService_InputMethodImpl::_class = nullptr;
jclass android::inputmethodservice::Keyboard::_class = nullptr;
jclass android::inputmethodservice::AbstractInputMethodService::_class = nullptr;
jclass android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = nullptr;
jclass android::inputmethodservice::ExtractEditText::_class = nullptr;
jclass android::inputmethodservice::Keyboard_Row::_class = nullptr;
jclass android::inputmethodservice::InputMethodService::_class = nullptr;
jclass android::inputmethodservice::InputMethodService_Insets::_class = nullptr;
jclass android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class = nullptr;
jclass android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = nullptr;
jclass android::inputmethodservice::Keyboard_Key::_class = nullptr;
jclass android::inputmethodservice::KeyboardView::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::AbstractInputMethodService_AbstractInputMethodImpl(const ::android::inputmethodservice::AbstractInputMethodService& arg0) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputMethod((jobject)0) {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/inputmethodservice/AbstractInputMethodService;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::createSession(const ::android::view::inputmethod::InputMethod_SessionCallback& arg0) const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSession", "(Landroid/view/inputmethod/InputMethod$SessionCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::setSessionEnabled(const ::android::view::inputmethod::InputMethodSession& arg0, bool arg1) const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSessionEnabled", "(Landroid/view/inputmethod/InputMethodSession;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::revokeSession(const ::android::view::inputmethod::InputMethodSession& arg0) const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "revokeSession", "(Landroid/view/inputmethod/InputMethodSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::InputMethodService_InputMethodImpl::InputMethodService_InputMethodImpl(const ::android::inputmethodservice::InputMethodService& arg0) : ::java::lang::Object((jobject)0), ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl((jobject)0), ::android::view::inputmethod::InputMethod((jobject)0) {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/inputmethodservice/InputMethodService;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::inputmethodservice::InputMethodService_InputMethodImpl::attachToken(const ::android::os::IBinder& arg0) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachToken", "(Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService_InputMethodImpl::bindInput(const ::android::view::inputmethod::InputBinding& arg0) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindInput", "(Landroid/view/inputmethod/InputBinding;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService_InputMethodImpl::unbindInput() const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "unbindInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService_InputMethodImpl::startInput(const ::android::view::inputmethod::InputConnection& arg0, const ::android::view::inputmethod::EditorInfo& arg1) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startInput", "(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService_InputMethodImpl::restartInput(const ::android::view::inputmethod::InputConnection& arg0, const ::android::view::inputmethod::EditorInfo& arg1) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "restartInput", "(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService_InputMethodImpl::hideSoftInput(int32_t arg0, const ::android::os::ResultReceiver& arg1) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideSoftInput", "(ILandroid/os/ResultReceiver;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService_InputMethodImpl::showSoftInput(int32_t arg0, const ::android::os::ResultReceiver& arg1) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "showSoftInput", "(ILandroid/os/ResultReceiver;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService_InputMethodImpl::changeInputMethodSubtype(const ::android::view::inputmethod::InputMethodSubtype& arg0) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "changeInputMethodSubtype", "(Landroid/view/inputmethod/InputMethodSubtype;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::Keyboard::Keyboard(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::Keyboard::Keyboard(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::Keyboard::Keyboard(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::Keyboard::Keyboard(const ::android::content::Context& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILjava/lang/CharSequence;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

::java::util::List android::inputmethodservice::Keyboard::getKeys() const {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeys", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::inputmethodservice::Keyboard::getModifierKeys() const {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModifierKeys", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::inputmethodservice::Keyboard::getHeight() const {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::inputmethodservice::Keyboard::getMinWidth() const {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::inputmethodservice::Keyboard::setShifted(bool arg0) const {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShifted", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::Keyboard::isShifted() const {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShifted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::inputmethodservice::Keyboard::getShiftKeyIndex() const {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShiftKeyIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int32_t> android::inputmethodservice::Keyboard::getNearestKeys(int32_t arg0, int32_t arg1) const {
    if (!::android::inputmethodservice::Keyboard::_class) ::android::inputmethodservice::Keyboard::_class = java::fetch_class("android/inputmethodservice/Keyboard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNearestKeys", "(II)[I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::AbstractInputMethodService::AbstractInputMethodService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0) {
    if (!::android::inputmethodservice::AbstractInputMethodService::_class) ::android::inputmethodservice::AbstractInputMethodService::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::view::KeyEvent_DispatcherState android::inputmethodservice::AbstractInputMethodService::getKeyDispatcherState() const {
    if (!::android::inputmethodservice::AbstractInputMethodService::_class) ::android::inputmethodservice::AbstractInputMethodService::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyDispatcherState", "()Landroid/view/KeyEvent$DispatcherState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::KeyEvent_DispatcherState _ret(ret);
    return _ret;
}

::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl android::inputmethodservice::AbstractInputMethodService::onCreateInputMethodInterface() const {
    if (!::android::inputmethodservice::AbstractInputMethodService::_class) ::android::inputmethodservice::AbstractInputMethodService::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputMethodInterface", "()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl _ret(ret);
    return _ret;
}

::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl android::inputmethodservice::AbstractInputMethodService::onCreateInputMethodSessionInterface() const {
    if (!::android::inputmethodservice::AbstractInputMethodService::_class) ::android::inputmethodservice::AbstractInputMethodService::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputMethodSessionInterface", "()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl _ret(ret);
    return _ret;
}

::android::os::IBinder android::inputmethodservice::AbstractInputMethodService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::inputmethodservice::AbstractInputMethodService::_class) ::android::inputmethodservice::AbstractInputMethodService::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

bool android::inputmethodservice::AbstractInputMethodService::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::inputmethodservice::AbstractInputMethodService::_class) ::android::inputmethodservice::AbstractInputMethodService::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::InputMethodService_InputMethodSessionImpl(const ::android::inputmethodservice::InputMethodService& arg0) : ::java::lang::Object((jobject)0), ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl((jobject)0), ::android::view::inputmethod::InputMethodSession((jobject)0) {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/inputmethodservice/InputMethodService;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::inputmethodservice::InputMethodService_InputMethodSessionImpl::finishInput() const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService_InputMethodSessionImpl::displayCompletions(const std::vector< ::android::view::inputmethod::CompletionInfo>& arg0) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "displayCompletions", "([Landroid/view/inputmethod/CompletionInfo;)V");
    unsigned arg0s = arg0.size();
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::view::inputmethod::CompletionInfo::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::view::inputmethod::CompletionInfo& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService_InputMethodSessionImpl::updateExtractedText(int32_t arg0, const ::android::view::inputmethod::ExtractedText& arg1) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateExtractedText", "(ILandroid/view/inputmethod/ExtractedText;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService_InputMethodSessionImpl::updateSelection(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateSelection", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::inputmethodservice::InputMethodService_InputMethodSessionImpl::viewClicked(bool arg0) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "viewClicked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService_InputMethodSessionImpl::updateCursor(const ::android::graphics::Rect& arg0) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCursor", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService_InputMethodSessionImpl::appPrivateCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "appPrivateCommand", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService_InputMethodSessionImpl::toggleSoftInput(int32_t arg0, int32_t arg1) const {
    if (!::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class) ::android::inputmethodservice::InputMethodService_InputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/InputMethodService$InputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggleSoftInput", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::ExtractEditText::ExtractEditText(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::ExtractEditText::ExtractEditText(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::ExtractEditText::ExtractEditText(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::inputmethodservice::ExtractEditText::startInternalChanges() const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "startInternalChanges", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::ExtractEditText::finishInternalChanges() const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishInternalChanges", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::ExtractEditText::setExtractedText(const ::android::view::inputmethod::ExtractedText& arg0) const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtractedText", "(Landroid/view/inputmethod/ExtractedText;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::ExtractEditText::performClick() const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "performClick", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::ExtractEditText::onTextContextMenuItem(int32_t arg0) const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTextContextMenuItem", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::ExtractEditText::isInputMethodTarget() const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInputMethodTarget", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::ExtractEditText::hasVerticalScrollBar() const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasVerticalScrollBar", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::ExtractEditText::hasWindowFocus() const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasWindowFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::ExtractEditText::isFocused() const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocused", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::ExtractEditText::hasFocus() const {
    if (!::android::inputmethodservice::ExtractEditText::_class) ::android::inputmethodservice::ExtractEditText::_class = java::fetch_class("android/inputmethodservice/ExtractEditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::Keyboard_Row::Keyboard_Row(const ::android::inputmethodservice::Keyboard& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::Keyboard_Row::_class) ::android::inputmethodservice::Keyboard_Row::_class = java::fetch_class("android/inputmethodservice/Keyboard$Row");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/inputmethodservice/Keyboard;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::Keyboard_Row::Keyboard_Row(const ::android::content::res::Resources& arg0, const ::android::inputmethodservice::Keyboard& arg1, const ::android::content::res::XmlResourceParser& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::Keyboard_Row::_class) ::android::inputmethodservice::Keyboard_Row::_class = java::fetch_class("android/inputmethodservice/Keyboard$Row");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard;Landroid/content/res/XmlResourceParser;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::InputMethodService::InputMethodService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::inputmethodservice::AbstractInputMethodService((jobject)0), ::android::view::KeyEvent_Callback((jobject)0) {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::inputmethodservice::InputMethodService::setTheme(int32_t arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTheme", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::onCreate() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onInitializeInterface() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeInterface", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onDestroy() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl android::inputmethodservice::InputMethodService::onCreateInputMethodInterface() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputMethodInterface", "()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl _ret(ret);
    return _ret;
}

::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl android::inputmethodservice::InputMethodService::onCreateInputMethodSessionInterface() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputMethodSessionInterface", "()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl _ret(ret);
    return _ret;
}

::android::view::LayoutInflater android::inputmethodservice::InputMethodService::getLayoutInflater() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutInflater", "()Landroid/view/LayoutInflater;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::LayoutInflater _ret(ret);
    return _ret;
}

::android::app::Dialog android::inputmethodservice::InputMethodService::getWindow() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindow", "()Landroid/app/Dialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

void android::inputmethodservice::InputMethodService::setBackDisposition(int32_t arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackDisposition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::inputmethodservice::InputMethodService::getBackDisposition() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackDisposition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::inputmethodservice::InputMethodService::getMaxWidth() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::inputmethod::InputBinding android::inputmethodservice::InputMethodService::getCurrentInputBinding() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentInputBinding", "()Landroid/view/inputmethod/InputBinding;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::inputmethod::InputBinding _ret(ret);
    return _ret;
}

::android::view::inputmethod::InputConnection android::inputmethodservice::InputMethodService::getCurrentInputConnection() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentInputConnection", "()Landroid/view/inputmethod/InputConnection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::inputmethod::InputConnection _ret(ret);
    return _ret;
}

bool android::inputmethodservice::InputMethodService::getCurrentInputStarted() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentInputStarted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::inputmethod::EditorInfo android::inputmethodservice::InputMethodService::getCurrentInputEditorInfo() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentInputEditorInfo", "()Landroid/view/inputmethod/EditorInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::inputmethod::EditorInfo _ret(ret);
    return _ret;
}

void android::inputmethodservice::InputMethodService::updateFullscreenMode() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateFullscreenMode", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onConfigureWindow(const ::android::view::Window& arg0, bool arg1, bool arg2) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigureWindow", "(Landroid/view/Window;ZZ)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::inputmethodservice::InputMethodService::isFullscreenMode() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFullscreenMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::InputMethodService::onEvaluateFullscreenMode() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEvaluateFullscreenMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::setExtractViewShown(bool arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtractViewShown", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::InputMethodService::isExtractViewShown() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "isExtractViewShown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onComputeInsets(const ::android::inputmethodservice::InputMethodService_Insets& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onComputeInsets", "(Landroid/inputmethodservice/InputMethodService$Insets;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::updateInputViewShown() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateInputViewShown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::inputmethodservice::InputMethodService::isShowInputRequested() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShowInputRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::InputMethodService::isInputViewShown() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInputViewShown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::InputMethodService::onEvaluateInputViewShown() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEvaluateInputViewShown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::setCandidatesViewShown(bool arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCandidatesViewShown", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::inputmethodservice::InputMethodService::getCandidatesHiddenVisibility() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCandidatesHiddenVisibility", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::showStatusIcon(int32_t arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "showStatusIcon", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::hideStatusIcon() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideStatusIcon", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::switchInputMethod(const ::java::lang::String& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "switchInputMethod", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::setExtractView(const ::android::view::View& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtractView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::setCandidatesView(const ::android::view::View& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCandidatesView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::setInputView(const ::android::view::View& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::inputmethodservice::InputMethodService::onCreateExtractTextView() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateExtractTextView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::inputmethodservice::InputMethodService::onCreateCandidatesView() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateCandidatesView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::inputmethodservice::InputMethodService::onCreateInputView() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::inputmethodservice::InputMethodService::onStartInputView(const ::android::view::inputmethod::EditorInfo& arg0, bool arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartInputView", "(Landroid/view/inputmethod/EditorInfo;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService::onFinishInputView(bool arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinishInputView", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::onStartCandidatesView(const ::android::view::inputmethod::EditorInfo& arg0, bool arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartCandidatesView", "(Landroid/view/inputmethod/EditorInfo;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService::onFinishCandidatesView(bool arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinishCandidatesView", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::InputMethodService::onShowInputRequested(int32_t arg0, bool arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShowInputRequested", "(IZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService::showWindow(bool arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "showWindow", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::hideWindow() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onWindowShown() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowShown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onWindowHidden() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowHidden", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onBindInput() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBindInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onUnbindInput() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUnbindInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onStartInput(const ::android::view::inputmethod::EditorInfo& arg0, bool arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartInput", "(Landroid/view/inputmethod/EditorInfo;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService::onFinishInput() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinishInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onDisplayCompletions(const std::vector< ::android::view::inputmethod::CompletionInfo>& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDisplayCompletions", "([Landroid/view/inputmethod/CompletionInfo;)V");
    unsigned arg0s = arg0.size();
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::view::inputmethod::CompletionInfo::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::view::inputmethod::CompletionInfo& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::onUpdateExtractedText(int32_t arg0, const ::android::view::inputmethod::ExtractedText& arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUpdateExtractedText", "(ILandroid/view/inputmethod/ExtractedText;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService::onUpdateSelection(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUpdateSelection", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::inputmethodservice::InputMethodService::onViewClicked(bool arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewClicked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::onUpdateCursor(const ::android::graphics::Rect& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUpdateCursor", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::requestHideSelf(int32_t arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestHideSelf", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::InputMethodService::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::inputmethodservice::InputMethodService::onKeyLongPress(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyLongPress", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::inputmethodservice::InputMethodService::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::inputmethodservice::InputMethodService::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::inputmethodservice::InputMethodService::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::onAppPrivateCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAppPrivateCommand", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService::sendDownUpKeyEvents(int32_t arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendDownUpKeyEvents", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::InputMethodService::sendDefaultEditorAction(bool arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendDefaultEditorAction", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::sendKeyChar(uint16_t arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendKeyChar", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::onExtractedSelectionChanged(int32_t arg0, int32_t arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtractedSelectionChanged", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::InputMethodService::onExtractedTextClicked() const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtractedTextClicked", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::InputMethodService::onExtractedCursorMovement(int32_t arg0, int32_t arg1) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtractedCursorMovement", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::inputmethodservice::InputMethodService::onExtractTextContextMenuItem(int32_t arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtractTextContextMenuItem", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::inputmethodservice::InputMethodService::getTextForImeAction(int32_t arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextForImeAction", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::inputmethodservice::InputMethodService::onUpdateExtractingVisibility(const ::android::view::inputmethod::EditorInfo& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUpdateExtractingVisibility", "(Landroid/view/inputmethod/EditorInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::onUpdateExtractingViews(const ::android::view::inputmethod::EditorInfo& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUpdateExtractingViews", "(Landroid/view/inputmethod/EditorInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::InputMethodService::onExtractingInputChanged(const ::android::view::inputmethod::EditorInfo& arg0) const {
    if (!::android::inputmethodservice::InputMethodService::_class) ::android::inputmethodservice::InputMethodService::_class = java::fetch_class("android/inputmethodservice/InputMethodService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExtractingInputChanged", "(Landroid/view/inputmethod/EditorInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::InputMethodService_Insets::InputMethodService_Insets() : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::InputMethodService_Insets::_class) ::android::inputmethodservice::InputMethodService_Insets::_class = java::fetch_class("android/inputmethodservice/InputMethodService$Insets");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::AbstractInputMethodService_AbstractInputMethodSessionImpl(const ::android::inputmethodservice::AbstractInputMethodService& arg0) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputMethodSession((jobject)0) {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/inputmethodservice/AbstractInputMethodService;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::isEnabled() const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::isRevoked() const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRevoked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::setEnabled(bool arg0) const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::revokeSelf() const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "revokeSelf", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchKeyEvent(int32_t arg0, const ::android::view::KeyEvent& arg1, const ::android::view::inputmethod::InputMethodSession_EventCallback& arg2) const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(ILandroid/view/KeyEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchTrackballEvent(int32_t arg0, const ::android::view::MotionEvent& arg1, const ::android::view::inputmethod::InputMethodSession_EventCallback& arg2) const {
    if (!::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class) ::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl::_class = java::fetch_class("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::inputmethodservice::KeyboardView_OnKeyboardActionListener::onPress(int32_t arg0) const {
    if (!::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class) ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = java::fetch_class("android/inputmethodservice/KeyboardView$OnKeyboardActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPress", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::KeyboardView_OnKeyboardActionListener::onRelease(int32_t arg0) const {
    if (!::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class) ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = java::fetch_class("android/inputmethodservice/KeyboardView$OnKeyboardActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRelease", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::KeyboardView_OnKeyboardActionListener::onKey(int32_t arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class) ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = java::fetch_class("android/inputmethodservice/KeyboardView$OnKeyboardActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKey", "(I[I)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::KeyboardView_OnKeyboardActionListener::onText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class) ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = java::fetch_class("android/inputmethodservice/KeyboardView$OnKeyboardActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::KeyboardView_OnKeyboardActionListener::swipeLeft() const {
    if (!::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class) ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = java::fetch_class("android/inputmethodservice/KeyboardView$OnKeyboardActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "swipeLeft", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView_OnKeyboardActionListener::swipeRight() const {
    if (!::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class) ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = java::fetch_class("android/inputmethodservice/KeyboardView$OnKeyboardActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "swipeRight", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView_OnKeyboardActionListener::swipeDown() const {
    if (!::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class) ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = java::fetch_class("android/inputmethodservice/KeyboardView$OnKeyboardActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "swipeDown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView_OnKeyboardActionListener::swipeUp() const {
    if (!::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class) ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener::_class = java::fetch_class("android/inputmethodservice/KeyboardView$OnKeyboardActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "swipeUp", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::Keyboard_Key::Keyboard_Key(const ::android::inputmethodservice::Keyboard_Row& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::Keyboard_Key::_class) ::android::inputmethodservice::Keyboard_Key::_class = java::fetch_class("android/inputmethodservice/Keyboard$Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/inputmethodservice/Keyboard$Row;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::Keyboard_Key::Keyboard_Key(const ::android::content::res::Resources& arg0, const ::android::inputmethodservice::Keyboard_Row& arg1, int32_t arg2, int32_t arg3, const ::android::content::res::XmlResourceParser& arg4) : ::java::lang::Object((jobject)0) {
    if (!::android::inputmethodservice::Keyboard_Key::_class) ::android::inputmethodservice::Keyboard_Key::_class = java::fetch_class("android/inputmethodservice/Keyboard$Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard$Row;IILandroid/content/res/XmlResourceParser;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

void android::inputmethodservice::Keyboard_Key::onPressed() const {
    if (!::android::inputmethodservice::Keyboard_Key::_class) ::android::inputmethodservice::Keyboard_Key::_class = java::fetch_class("android/inputmethodservice/Keyboard$Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPressed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::Keyboard_Key::onReleased(bool arg0) const {
    if (!::android::inputmethodservice::Keyboard_Key::_class) ::android::inputmethodservice::Keyboard_Key::_class = java::fetch_class("android/inputmethodservice/Keyboard$Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReleased", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::Keyboard_Key::isInside(int32_t arg0, int32_t arg1) const {
    if (!::android::inputmethodservice::Keyboard_Key::_class) ::android::inputmethodservice::Keyboard_Key::_class = java::fetch_class("android/inputmethodservice/Keyboard$Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInside", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::inputmethodservice::Keyboard_Key::squaredDistanceFrom(int32_t arg0, int32_t arg1) const {
    if (!::android::inputmethodservice::Keyboard_Key::_class) ::android::inputmethodservice::Keyboard_Key::_class = java::fetch_class("android/inputmethodservice/Keyboard$Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "squaredDistanceFrom", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< int32_t> android::inputmethodservice::Keyboard_Key::getCurrentDrawableState() const {
    if (!::android::inputmethodservice::Keyboard_Key::_class) ::android::inputmethodservice::Keyboard_Key::_class = java::fetch_class("android/inputmethodservice/Keyboard$Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentDrawableState", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::KeyboardView::KeyboardView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::inputmethodservice::KeyboardView::KeyboardView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::inputmethodservice::KeyboardView::setOnKeyboardActionListener(const ::android::inputmethodservice::KeyboardView_OnKeyboardActionListener& arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnKeyboardActionListener", "(Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::KeyboardView::setKeyboard(const ::android::inputmethodservice::Keyboard& arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyboard", "(Landroid/inputmethodservice/Keyboard;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::inputmethodservice::Keyboard android::inputmethodservice::KeyboardView::getKeyboard() const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyboard", "()Landroid/inputmethodservice/Keyboard;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::inputmethodservice::Keyboard _ret(ret);
    return _ret;
}

bool android::inputmethodservice::KeyboardView::setShifted(bool arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShifted", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::KeyboardView::isShifted() const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShifted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView::setPreviewEnabled(bool arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::KeyboardView::isPreviewEnabled() const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPreviewEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView::setVerticalCorrection(int32_t arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalCorrection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::KeyboardView::setPopupParent(const ::android::view::View& arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPopupParent", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::KeyboardView::setPopupOffset(int32_t arg0, int32_t arg1) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPopupOffset", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::KeyboardView::setProximityCorrectionEnabled(bool arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProximityCorrectionEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::KeyboardView::isProximityCorrectionEnabled() const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isProximityCorrectionEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView::onMeasure(int32_t arg0, int32_t arg1) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMeasure", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::inputmethodservice::KeyboardView::onSizeChanged(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSizeChanged", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::inputmethodservice::KeyboardView::onDraw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDraw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::inputmethodservice::KeyboardView::invalidateAllKeys() const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateAllKeys", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView::invalidateKey(int32_t arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateKey", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::KeyboardView::onHoverEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHoverEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::inputmethodservice::KeyboardView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::inputmethodservice::KeyboardView::closing() const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "closing", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView::onDetachedFromWindow() const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetachedFromWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::inputmethodservice::KeyboardView::handleBack() const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleBack", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::inputmethodservice::KeyboardView::onClick(const ::android::view::View& arg0) const {
    if (!::android::inputmethodservice::KeyboardView::_class) ::android::inputmethodservice::KeyboardView::_class = java::fetch_class("android/inputmethodservice/KeyboardView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

