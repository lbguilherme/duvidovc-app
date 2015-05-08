#include "java-core.hpp"
#include <memory>
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.pm.ApplicationInfo.hpp"
#include "android.content.pm.PackageManager.hpp"
#include "android.content.pm.ResolveInfo.hpp"
#include "android.content.pm.ServiceInfo.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ResultReceiver.hpp"
#include "android.text.Editable.hpp"
#include "android.text.Spannable.hpp"
#include "android.util.Printer.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.View.hpp"
#include "android.view.inputmethod.BaseInputConnection.hpp"
#include "android.view.inputmethod.CompletionInfo.hpp"
#include "android.view.inputmethod.CorrectionInfo.hpp"
#include "android.view.inputmethod.EditorInfo.hpp"
#include "android.view.inputmethod.ExtractedText.hpp"
#include "android.view.inputmethod.ExtractedTextRequest.hpp"
#include "android.view.inputmethod.InputBinding.hpp"
#include "android.view.inputmethod.InputConnection.hpp"
#include "android.view.inputmethod.InputConnectionWrapper.hpp"
#include "android.view.inputmethod.InputMethod.hpp"
#include "android.view.inputmethod.InputMethodInfo.hpp"
#include "android.view.inputmethod.InputMethodManager.hpp"
#include "android.view.inputmethod.InputMethodSession.hpp"
#include "android.view.inputmethod.InputMethodSubtype.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"

jclass android::view::inputmethod::ExtractedTextRequest::_class = nullptr;
jclass android::view::inputmethod::InputConnection::_class = nullptr;
jclass android::view::inputmethod::ExtractedText::_class = nullptr;
jclass android::view::inputmethod::InputConnectionWrapper::_class = nullptr;
jclass android::view::inputmethod::InputMethodSession::_class = nullptr;
jclass android::view::inputmethod::InputMethodSession_EventCallback::_class = nullptr;
jclass android::view::inputmethod::CompletionInfo::_class = nullptr;
jclass android::view::inputmethod::InputMethod_SessionCallback::_class = nullptr;
jclass android::view::inputmethod::InputMethod::_class = nullptr;
jclass android::view::inputmethod::BaseInputConnection::_class = nullptr;
jclass android::view::inputmethod::InputMethodSubtype::_class = nullptr;
jclass android::view::inputmethod::InputMethodInfo::_class = nullptr;
jclass android::view::inputmethod::EditorInfo::_class = nullptr;
jclass android::view::inputmethod::InputMethodManager::_class = nullptr;
jclass android::view::inputmethod::InputBinding::_class = nullptr;
jclass android::view::inputmethod::CorrectionInfo::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::ExtractedTextRequest::ExtractedTextRequest() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::ExtractedTextRequest::_class) ::android::view::inputmethod::ExtractedTextRequest::_class = java::fetch_class("android/view/inputmethod/ExtractedTextRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::inputmethod::ExtractedTextRequest::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::ExtractedTextRequest::_class) ::android::view::inputmethod::ExtractedTextRequest::_class = java::fetch_class("android/view/inputmethod/ExtractedTextRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::inputmethod::ExtractedTextRequest::describeContents() const {
    if (!::android::view::inputmethod::ExtractedTextRequest::_class) ::android::view::inputmethod::ExtractedTextRequest::_class = java::fetch_class("android/view/inputmethod/ExtractedTextRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::view::inputmethod::InputConnection::getTextBeforeCursor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextBeforeCursor", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::InputConnection::getTextAfterCursor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextAfterCursor", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::InputConnection::getSelectedText(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::view::inputmethod::InputConnection::getCursorCapsMode(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursorCapsMode", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::view::inputmethod::ExtractedText android::view::inputmethod::InputConnection::getExtractedText(const ::android::view::inputmethod::ExtractedTextRequest& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtractedText", "(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::inputmethod::ExtractedText _ret(ret);
    return _ret;
}

bool android::view::inputmethod::InputConnection::deleteSurroundingText(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteSurroundingText", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnection::setComposingText(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComposingText", "(Ljava/lang/CharSequence;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnection::setComposingRegion(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComposingRegion", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnection::finishComposingText() const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishComposingText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputConnection::commitText(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitText", "(Ljava/lang/CharSequence;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnection::commitCompletion(const ::android::view::inputmethod::CompletionInfo& arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitCompletion", "(Landroid/view/inputmethod/CompletionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnection::commitCorrection(const ::android::view::inputmethod::CorrectionInfo& arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitCorrection", "(Landroid/view/inputmethod/CorrectionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnection::setSelection(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnection::performEditorAction(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "performEditorAction", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnection::performContextMenuAction(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "performContextMenuAction", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnection::beginBatchEdit() const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginBatchEdit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputConnection::endBatchEdit() const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "endBatchEdit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputConnection::sendKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnection::clearMetaKeyStates(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearMetaKeyStates", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnection::reportFullscreenMode(bool arg0) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "reportFullscreenMode", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnection::performPrivateCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::view::inputmethod::InputConnection::_class) ::android::view::inputmethod::InputConnection::_class = java::fetch_class("android/view/inputmethod/InputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "performPrivateCommand", "(Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::ExtractedText::ExtractedText() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::ExtractedText::_class) ::android::view::inputmethod::ExtractedText::_class = java::fetch_class("android/view/inputmethod/ExtractedText");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::inputmethod::ExtractedText::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::ExtractedText::_class) ::android::view::inputmethod::ExtractedText::_class = java::fetch_class("android/view/inputmethod/ExtractedText");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::inputmethod::ExtractedText::describeContents() const {
    if (!::android::view::inputmethod::ExtractedText::_class) ::android::view::inputmethod::ExtractedText::_class = java::fetch_class("android/view/inputmethod/ExtractedText");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::InputConnectionWrapper::InputConnectionWrapper(const ::android::view::inputmethod::InputConnection& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputConnection((jobject)0) {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/inputmethod/InputConnection;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::view::inputmethod::InputConnectionWrapper::setTarget(const ::android::view::inputmethod::InputConnection& arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTarget", "(Landroid/view/inputmethod/InputConnection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::inputmethod::InputConnectionWrapper::getTextBeforeCursor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextBeforeCursor", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::InputConnectionWrapper::getTextAfterCursor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextAfterCursor", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::InputConnectionWrapper::getSelectedText(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::view::inputmethod::InputConnectionWrapper::getCursorCapsMode(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursorCapsMode", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::view::inputmethod::ExtractedText android::view::inputmethod::InputConnectionWrapper::getExtractedText(const ::android::view::inputmethod::ExtractedTextRequest& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtractedText", "(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::inputmethod::ExtractedText _ret(ret);
    return _ret;
}

bool android::view::inputmethod::InputConnectionWrapper::deleteSurroundingText(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteSurroundingText", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnectionWrapper::setComposingText(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComposingText", "(Ljava/lang/CharSequence;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnectionWrapper::setComposingRegion(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComposingRegion", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnectionWrapper::finishComposingText() const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishComposingText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputConnectionWrapper::commitText(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitText", "(Ljava/lang/CharSequence;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnectionWrapper::commitCompletion(const ::android::view::inputmethod::CompletionInfo& arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitCompletion", "(Landroid/view/inputmethod/CompletionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnectionWrapper::commitCorrection(const ::android::view::inputmethod::CorrectionInfo& arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitCorrection", "(Landroid/view/inputmethod/CorrectionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnectionWrapper::setSelection(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputConnectionWrapper::performEditorAction(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "performEditorAction", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnectionWrapper::performContextMenuAction(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "performContextMenuAction", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnectionWrapper::beginBatchEdit() const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginBatchEdit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputConnectionWrapper::endBatchEdit() const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "endBatchEdit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputConnectionWrapper::sendKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnectionWrapper::clearMetaKeyStates(int32_t arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearMetaKeyStates", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnectionWrapper::reportFullscreenMode(bool arg0) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "reportFullscreenMode", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputConnectionWrapper::performPrivateCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::view::inputmethod::InputConnectionWrapper::_class) ::android::view::inputmethod::InputConnectionWrapper::_class = java::fetch_class("android/view/inputmethod/InputConnectionWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "performPrivateCommand", "(Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodSession::finishInput() const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::inputmethod::InputMethodSession::updateSelection(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateSelection", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::view::inputmethod::InputMethodSession::viewClicked(bool arg0) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "viewClicked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethodSession::updateCursor(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCursor", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethodSession::displayCompletions(const std::vector< ::android::view::inputmethod::CompletionInfo>& arg0) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
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

void android::view::inputmethod::InputMethodSession::updateExtractedText(int32_t arg0, const ::android::view::inputmethod::ExtractedText& arg1) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateExtractedText", "(ILandroid/view/inputmethod/ExtractedText;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodSession::dispatchKeyEvent(int32_t arg0, const ::android::view::KeyEvent& arg1, const ::android::view::inputmethod::InputMethodSession_EventCallback& arg2) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(ILandroid/view/KeyEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::inputmethod::InputMethodSession::dispatchTrackballEvent(int32_t arg0, const ::android::view::MotionEvent& arg1, const ::android::view::inputmethod::InputMethodSession_EventCallback& arg2) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::inputmethod::InputMethodSession::appPrivateCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "appPrivateCommand", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodSession::toggleSoftInput(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputMethodSession::_class) ::android::view::inputmethod::InputMethodSession::_class = java::fetch_class("android/view/inputmethod/InputMethodSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggleSoftInput", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodSession_EventCallback::finishedEvent(int32_t arg0, bool arg1) const {
    if (!::android::view::inputmethod::InputMethodSession_EventCallback::_class) ::android::view::inputmethod::InputMethodSession_EventCallback::_class = java::fetch_class("android/view/inputmethod/InputMethodSession$EventCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishedEvent", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::CompletionInfo::CompletionInfo(int64_t arg0, int32_t arg1, const ::java::lang::CharSequence& arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JILjava/lang/CharSequence;)V");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::CompletionInfo::CompletionInfo(int64_t arg0, int32_t arg1, const ::java::lang::CharSequence& arg2, const ::java::lang::CharSequence& arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JILjava/lang/CharSequence;Ljava/lang/CharSequence;)V");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

int64_t android::view::inputmethod::CompletionInfo::getId() const {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t android::view::inputmethod::CompletionInfo::getPosition() const {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::view::inputmethod::CompletionInfo::getText() const {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::CompletionInfo::getLabel() const {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::view::inputmethod::CompletionInfo::toString() const {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::view::inputmethod::CompletionInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::inputmethod::CompletionInfo::describeContents() const {
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::inputmethod::InputMethod_SessionCallback::sessionCreated(const ::android::view::inputmethod::InputMethodSession& arg0) const {
    if (!::android::view::inputmethod::InputMethod_SessionCallback::_class) ::android::view::inputmethod::InputMethod_SessionCallback::_class = java::fetch_class("android/view/inputmethod/InputMethod$SessionCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "sessionCreated", "(Landroid/view/inputmethod/InputMethodSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethod::attachToken(const ::android::os::IBinder& arg0) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachToken", "(Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethod::bindInput(const ::android::view::inputmethod::InputBinding& arg0) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindInput", "(Landroid/view/inputmethod/InputBinding;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethod::unbindInput() const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "unbindInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::inputmethod::InputMethod::startInput(const ::android::view::inputmethod::InputConnection& arg0, const ::android::view::inputmethod::EditorInfo& arg1) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "startInput", "(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethod::restartInput(const ::android::view::inputmethod::InputConnection& arg0, const ::android::view::inputmethod::EditorInfo& arg1) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "restartInput", "(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethod::createSession(const ::android::view::inputmethod::InputMethod_SessionCallback& arg0) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSession", "(Landroid/view/inputmethod/InputMethod$SessionCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethod::setSessionEnabled(const ::android::view::inputmethod::InputMethodSession& arg0, bool arg1) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSessionEnabled", "(Landroid/view/inputmethod/InputMethodSession;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethod::revokeSession(const ::android::view::inputmethod::InputMethodSession& arg0) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "revokeSession", "(Landroid/view/inputmethod/InputMethodSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethod::showSoftInput(int32_t arg0, const ::android::os::ResultReceiver& arg1) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "showSoftInput", "(ILandroid/os/ResultReceiver;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethod::hideSoftInput(int32_t arg0, const ::android::os::ResultReceiver& arg1) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideSoftInput", "(ILandroid/os/ResultReceiver;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethod::changeInputMethodSubtype(const ::android::view::inputmethod::InputMethodSubtype& arg0) const {
    if (!::android::view::inputmethod::InputMethod::_class) ::android::view::inputmethod::InputMethod::_class = java::fetch_class("android/view/inputmethod/InputMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "changeInputMethodSubtype", "(Landroid/view/inputmethod/InputMethodSubtype;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::BaseInputConnection::BaseInputConnection(const ::android::view::View& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputConnection((jobject)0) {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::view::inputmethod::BaseInputConnection::removeComposingSpans(const ::android::text::Spannable& arg0){
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeComposingSpans", "(Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::view::inputmethod::BaseInputConnection::setComposingSpans(const ::android::text::Spannable& arg0){
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setComposingSpans", "(Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t android::view::inputmethod::BaseInputConnection::getComposingSpanStart(const ::android::text::Spannable& arg0){
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getComposingSpanStart", "(Landroid/text/Spannable;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::view::inputmethod::BaseInputConnection::getComposingSpanEnd(const ::android::text::Spannable& arg0){
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getComposingSpanEnd", "(Landroid/text/Spannable;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::android::text::Editable android::view::inputmethod::BaseInputConnection::getEditable() const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEditable", "()Landroid/text/Editable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::Editable _ret(ret);
    return _ret;
}

bool android::view::inputmethod::BaseInputConnection::beginBatchEdit() const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginBatchEdit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::BaseInputConnection::endBatchEdit() const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "endBatchEdit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::BaseInputConnection::clearMetaKeyStates(int32_t arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearMetaKeyStates", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::BaseInputConnection::commitCompletion(const ::android::view::inputmethod::CompletionInfo& arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitCompletion", "(Landroid/view/inputmethod/CompletionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::BaseInputConnection::commitCorrection(const ::android::view::inputmethod::CorrectionInfo& arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitCorrection", "(Landroid/view/inputmethod/CorrectionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::BaseInputConnection::commitText(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitText", "(Ljava/lang/CharSequence;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::BaseInputConnection::deleteSurroundingText(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteSurroundingText", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::BaseInputConnection::finishComposingText() const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishComposingText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::view::inputmethod::BaseInputConnection::getCursorCapsMode(int32_t arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursorCapsMode", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::view::inputmethod::ExtractedText android::view::inputmethod::BaseInputConnection::getExtractedText(const ::android::view::inputmethod::ExtractedTextRequest& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtractedText", "(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::inputmethod::ExtractedText _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::BaseInputConnection::getTextBeforeCursor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextBeforeCursor", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::BaseInputConnection::getSelectedText(int32_t arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::BaseInputConnection::getTextAfterCursor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextAfterCursor", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::view::inputmethod::BaseInputConnection::performEditorAction(int32_t arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "performEditorAction", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::BaseInputConnection::performContextMenuAction(int32_t arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "performContextMenuAction", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::BaseInputConnection::performPrivateCommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "performPrivateCommand", "(Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::BaseInputConnection::setComposingText(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComposingText", "(Ljava/lang/CharSequence;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::BaseInputConnection::setComposingRegion(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComposingRegion", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::BaseInputConnection::setSelection(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::BaseInputConnection::sendKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::BaseInputConnection::reportFullscreenMode(bool arg0) const {
    if (!::android::view::inputmethod::BaseInputConnection::_class) ::android::view::inputmethod::BaseInputConnection::_class = java::fetch_class("android/view/inputmethod/BaseInputConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "reportFullscreenMode", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::InputMethodSubtype::InputMethodSubtype(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, bool arg5, bool arg6) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    bool _arg5 = arg5;
    bool _arg6 = arg6;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

int32_t android::view::inputmethod::InputMethodSubtype::getNameResId() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNameResId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::inputmethod::InputMethodSubtype::getIconResId() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIconResId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::inputmethod::InputMethodSubtype::getLocale() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::inputmethod::InputMethodSubtype::getMode() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::inputmethod::InputMethodSubtype::getExtraValue() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtraValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::view::inputmethod::InputMethodSubtype::isAuxiliary() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAuxiliary", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputMethodSubtype::overridesImplicitlyEnabledSubtype() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "overridesImplicitlyEnabledSubtype", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::CharSequence android::view::inputmethod::InputMethodSubtype::getDisplayName(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::content::pm::ApplicationInfo& arg2) const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::view::inputmethod::InputMethodSubtype::containsExtraValueKey(const ::java::lang::String& arg0) const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsExtraValueKey", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::view::inputmethod::InputMethodSubtype::getExtraValueOf(const ::java::lang::String& arg0) const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtraValueOf", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::inputmethod::InputMethodSubtype::hashCode() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::inputmethod::InputMethodSubtype::equals(const ::java::lang::Object& arg0) const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::view::inputmethod::InputMethodSubtype::describeContents() const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::inputmethod::InputMethodSubtype::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::InputMethodInfo::InputMethodInfo(const ::android::content::Context& arg0, const ::android::content::pm::ResolveInfo& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::InputMethodInfo::InputMethodInfo(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::CharSequence& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String android::view::inputmethod::InputMethodInfo::getId() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::inputmethod::InputMethodInfo::getPackageName() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::inputmethod::InputMethodInfo::getServiceName() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ServiceInfo android::view::inputmethod::InputMethodInfo::getServiceInfo() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceInfo", "()Landroid/content/pm/ServiceInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ServiceInfo _ret(ret);
    return _ret;
}

::android::content::ComponentName android::view::inputmethod::InputMethodInfo::getComponent() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponent", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::InputMethodInfo::loadLabel(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLabel", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::view::inputmethod::InputMethodInfo::loadIcon(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIcon", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::String android::view::inputmethod::InputMethodInfo::getSettingsActivity() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsActivity", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::inputmethod::InputMethodInfo::getSubtypeCount() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::inputmethod::InputMethodSubtype android::view::inputmethod::InputMethodInfo::getSubtypeAt(int32_t arg0) const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtypeAt", "(I)Landroid/view/inputmethod/InputMethodSubtype;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::inputmethod::InputMethodSubtype _ret(ret);
    return _ret;
}

int32_t android::view::inputmethod::InputMethodInfo::getIsDefaultResourceId() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIsDefaultResourceId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::inputmethod::InputMethodInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::view::inputmethod::InputMethodInfo::toString() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::view::inputmethod::InputMethodInfo::equals(const ::java::lang::Object& arg0) const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::view::inputmethod::InputMethodInfo::hashCode() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::inputmethod::InputMethodInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::inputmethod::InputMethodInfo::describeContents() const {
    if (!::android::view::inputmethod::InputMethodInfo::_class) ::android::view::inputmethod::InputMethodInfo::_class = java::fetch_class("android/view/inputmethod/InputMethodInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::EditorInfo::EditorInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::InputType((jobject)0) {
    if (!::android::view::inputmethod::EditorInfo::_class) ::android::view::inputmethod::EditorInfo::_class = java::fetch_class("android/view/inputmethod/EditorInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::inputmethod::EditorInfo::makeCompatible(int32_t arg0) const {
    if (!::android::view::inputmethod::EditorInfo::_class) ::android::view::inputmethod::EditorInfo::_class = java::fetch_class("android/view/inputmethod/EditorInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeCompatible", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::EditorInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::view::inputmethod::EditorInfo::_class) ::android::view::inputmethod::EditorInfo::_class = java::fetch_class("android/view/inputmethod/EditorInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::EditorInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::EditorInfo::_class) ::android::view::inputmethod::EditorInfo::_class = java::fetch_class("android/view/inputmethod/EditorInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::inputmethod::EditorInfo::describeContents() const {
    if (!::android::view::inputmethod::EditorInfo::_class) ::android::view::inputmethod::EditorInfo::_class = java::fetch_class("android/view/inputmethod/EditorInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::view::inputmethod::InputMethodManager::getInputMethodList() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputMethodList", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::view::inputmethod::InputMethodManager::getEnabledInputMethodList() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledInputMethodList", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::view::inputmethod::InputMethodManager::getEnabledInputMethodSubtypeList(const ::android::view::inputmethod::InputMethodInfo& arg0, bool arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledInputMethodSubtypeList", "(Landroid/view/inputmethod/InputMethodInfo;Z)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::view::inputmethod::InputMethodManager::showStatusIcon(const ::android::os::IBinder& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "showStatusIcon", "(Landroid/os/IBinder;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::inputmethod::InputMethodManager::hideStatusIcon(const ::android::os::IBinder& arg0) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideStatusIcon", "(Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputMethodManager::isFullscreenMode() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFullscreenMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputMethodManager::isActive(const ::android::view::View& arg0) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActive", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputMethodManager::isActive() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::inputmethod::InputMethodManager::isAcceptingText() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAcceptingText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::inputmethod::InputMethodManager::displayCompletions(const ::android::view::View& arg0, const std::vector< ::android::view::inputmethod::CompletionInfo>& arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "displayCompletions", "(Landroid/view/View;[Landroid/view/inputmethod/CompletionInfo;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::view::inputmethod::CompletionInfo::_class) ::android::view::inputmethod::CompletionInfo::_class = java::fetch_class("android/view/inputmethod/CompletionInfo");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::view::inputmethod::CompletionInfo::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::view::inputmethod::CompletionInfo& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodManager::updateExtractedText(const ::android::view::View& arg0, int32_t arg1, const ::android::view::inputmethod::ExtractedText& arg2) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateExtractedText", "(Landroid/view/View;ILandroid/view/inputmethod/ExtractedText;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::inputmethod::InputMethodManager::showSoftInput(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "showSoftInput", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputMethodManager::showSoftInput(const ::android::view::View& arg0, int32_t arg1, const ::android::os::ResultReceiver& arg2) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "showSoftInput", "(Landroid/view/View;ILandroid/os/ResultReceiver;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::inputmethod::InputMethodManager::hideSoftInputFromWindow(const ::android::os::IBinder& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideSoftInputFromWindow", "(Landroid/os/IBinder;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::inputmethod::InputMethodManager::hideSoftInputFromWindow(const ::android::os::IBinder& arg0, int32_t arg1, const ::android::os::ResultReceiver& arg2) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideSoftInputFromWindow", "(Landroid/os/IBinder;ILandroid/os/ResultReceiver;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::inputmethod::InputMethodManager::toggleSoftInputFromWindow(const ::android::os::IBinder& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggleSoftInputFromWindow", "(Landroid/os/IBinder;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::inputmethod::InputMethodManager::toggleSoftInput(int32_t arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggleSoftInput", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodManager::restartInput(const ::android::view::View& arg0) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "restartInput", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethodManager::updateSelection(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateSelection", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::view::inputmethod::InputMethodManager::viewClicked(const ::android::view::View& arg0) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "viewClicked", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::inputmethod::InputMethodManager::isWatchingCursor(const ::android::view::View& arg0) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWatchingCursor", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethodManager::updateCursor(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCursor", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::view::inputmethod::InputMethodManager::sendAppPrivateCommand(const ::android::view::View& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAppPrivateCommand", "(Landroid/view/View;Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::inputmethod::InputMethodManager::setInputMethod(const ::android::os::IBinder& arg0, const ::java::lang::String& arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputMethod", "(Landroid/os/IBinder;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodManager::setInputMethodAndSubtype(const ::android::os::IBinder& arg0, const ::java::lang::String& arg1, const ::android::view::inputmethod::InputMethodSubtype& arg2) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputMethodAndSubtype", "(Landroid/os/IBinder;Ljava/lang/String;Landroid/view/inputmethod/InputMethodSubtype;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::inputmethod::InputMethodManager::hideSoftInputFromInputMethod(const ::android::os::IBinder& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideSoftInputFromInputMethod", "(Landroid/os/IBinder;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodManager::showSoftInputFromInputMethod(const ::android::os::IBinder& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "showSoftInputFromInputMethod", "(Landroid/os/IBinder;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::inputmethod::InputMethodManager::showInputMethodPicker() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "showInputMethodPicker", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::inputmethod::InputMethodManager::showInputMethodAndSubtypeEnabler(const ::java::lang::String& arg0) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "showInputMethodAndSubtypeEnabler", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::inputmethod::InputMethodSubtype android::view::inputmethod::InputMethodManager::getCurrentInputMethodSubtype() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentInputMethodSubtype", "()Landroid/view/inputmethod/InputMethodSubtype;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::inputmethod::InputMethodSubtype _ret(ret);
    return _ret;
}

bool android::view::inputmethod::InputMethodManager::setCurrentInputMethodSubtype(const ::android::view::inputmethod::InputMethodSubtype& arg0) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentInputMethodSubtype", "(Landroid/view/inputmethod/InputMethodSubtype;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Map android::view::inputmethod::InputMethodManager::getShortcutInputMethodsAndSubtypes() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShortcutInputMethodsAndSubtypes", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

bool android::view::inputmethod::InputMethodManager::switchToLastInputMethod(const ::android::os::IBinder& arg0) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "switchToLastInputMethod", "(Landroid/os/IBinder;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::inputmethod::InputMethodManager::setAdditionalInputMethodSubtypes(const ::java::lang::String& arg0, const std::vector< ::android::view::inputmethod::InputMethodSubtype>& arg1) const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdditionalInputMethodSubtypes", "(Ljava/lang/String;[Landroid/view/inputmethod/InputMethodSubtype;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::view::inputmethod::InputMethodSubtype::_class) ::android::view::inputmethod::InputMethodSubtype::_class = java::fetch_class("android/view/inputmethod/InputMethodSubtype");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::view::inputmethod::InputMethodSubtype::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::view::inputmethod::InputMethodSubtype& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::inputmethod::InputMethodSubtype android::view::inputmethod::InputMethodManager::getLastInputMethodSubtype() const {
    if (!::android::view::inputmethod::InputMethodManager::_class) ::android::view::inputmethod::InputMethodManager::_class = java::fetch_class("android/view/inputmethod/InputMethodManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastInputMethodSubtype", "()Landroid/view/inputmethod/InputMethodSubtype;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::inputmethod::InputMethodSubtype _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::InputBinding::InputBinding(const ::android::view::inputmethod::InputConnection& arg0, const ::android::os::IBinder& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/inputmethod/InputConnection;Landroid/os/IBinder;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::InputBinding::InputBinding(const ::android::view::inputmethod::InputConnection& arg0, const ::android::view::inputmethod::InputBinding& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/InputBinding;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::view::inputmethod::InputConnection android::view::inputmethod::InputBinding::getConnection() const {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "()Landroid/view/inputmethod/InputConnection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::inputmethod::InputConnection _ret(ret);
    return _ret;
}

::android::os::IBinder android::view::inputmethod::InputBinding::getConnectionToken() const {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionToken", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

int32_t android::view::inputmethod::InputBinding::getUid() const {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUid", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::inputmethod::InputBinding::getPid() const {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPid", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::inputmethod::InputBinding::toString() const {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::view::inputmethod::InputBinding::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::inputmethod::InputBinding::describeContents() const {
    if (!::android::view::inputmethod::InputBinding::_class) ::android::view::inputmethod::InputBinding::_class = java::fetch_class("android/view/inputmethod/InputBinding");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::inputmethod::CorrectionInfo::CorrectionInfo(int32_t arg0, const ::java::lang::CharSequence& arg1, const ::java::lang::CharSequence& arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::inputmethod::CorrectionInfo::_class) ::android::view::inputmethod::CorrectionInfo::_class = java::fetch_class("android/view/inputmethod/CorrectionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/CharSequence;Ljava/lang/CharSequence;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::view::inputmethod::CorrectionInfo::getOffset() const {
    if (!::android::view::inputmethod::CorrectionInfo::_class) ::android::view::inputmethod::CorrectionInfo::_class = java::fetch_class("android/view/inputmethod/CorrectionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::view::inputmethod::CorrectionInfo::getOldText() const {
    if (!::android::view::inputmethod::CorrectionInfo::_class) ::android::view::inputmethod::CorrectionInfo::_class = java::fetch_class("android/view/inputmethod/CorrectionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOldText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::inputmethod::CorrectionInfo::getNewText() const {
    if (!::android::view::inputmethod::CorrectionInfo::_class) ::android::view::inputmethod::CorrectionInfo::_class = java::fetch_class("android/view/inputmethod/CorrectionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNewText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::view::inputmethod::CorrectionInfo::toString() const {
    if (!::android::view::inputmethod::CorrectionInfo::_class) ::android::view::inputmethod::CorrectionInfo::_class = java::fetch_class("android/view/inputmethod/CorrectionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::view::inputmethod::CorrectionInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::inputmethod::CorrectionInfo::_class) ::android::view::inputmethod::CorrectionInfo::_class = java::fetch_class("android/view/inputmethod/CorrectionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::inputmethod::CorrectionInfo::describeContents() const {
    if (!::android::view::inputmethod::CorrectionInfo::_class) ::android::view::inputmethod::CorrectionInfo::_class = java::fetch_class("android/view/inputmethod/CorrectionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

