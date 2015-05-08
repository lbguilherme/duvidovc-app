#include "java-core.hpp"
#include <memory>
#include "android.app.PendingIntent.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.net.sip.SipAudioCall.hpp"
#include "android.net.sip.SipErrorCode.hpp"
#include "android.net.sip.SipException.hpp"
#include "android.net.sip.SipManager.hpp"
#include "android.net.sip.SipProfile.hpp"
#include "android.net.sip.SipRegistrationListener.hpp"
#include "android.net.sip.SipSession.hpp"
#include "android.os.Message.hpp"
#include "android.os.Parcel.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"

jclass android::net::sip::SipManager::_class = nullptr;
jclass android::net::sip::SipAudioCall_Listener::_class = nullptr;
jclass android::net::sip::SipException::_class = nullptr;
jclass android::net::sip::SipRegistrationListener::_class = nullptr;
jclass android::net::sip::SipSession::_class = nullptr;
jclass android::net::sip::SipProfile_Builder::_class = nullptr;
jclass android::net::sip::SipSession_Listener::_class = nullptr;
jclass android::net::sip::SipSession_State::_class = nullptr;
jclass android::net::sip::SipProfile::_class = nullptr;
jclass android::net::sip::SipErrorCode::_class = nullptr;
jclass android::net::sip::SipAudioCall::_class = nullptr;

::android::net::sip::SipManager android::net::sip::SipManager::newInstance(const ::android::content::Context& arg0){
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Landroid/content/Context;)Landroid/net/sip/SipManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::sip::SipManager _ret(ret);
    return _ret;
}

bool android::net::sip::SipManager::isApiSupported(const ::android::content::Context& arg0){
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isApiSupported", "(Landroid/content/Context;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::net::sip::SipManager::isVoipSupported(const ::android::content::Context& arg0){
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isVoipSupported", "(Landroid/content/Context;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::net::sip::SipManager::isSipWifiOnly(const ::android::content::Context& arg0){
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSipWifiOnly", "(Landroid/content/Context;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::net::sip::SipManager::open(const ::android::net::sip::SipProfile& arg0) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Landroid/net/sip/SipProfile;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipManager::open(const ::android::net::sip::SipProfile& arg0, const ::android::app::PendingIntent& arg1, const ::android::net::sip::SipRegistrationListener& arg2) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Landroid/net/sip/SipProfile;Landroid/app/PendingIntent;Landroid/net/sip/SipRegistrationListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipManager::setRegistrationListener(const ::java::lang::String& arg0, const ::android::net::sip::SipRegistrationListener& arg1) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRegistrationListener", "(Ljava/lang/String;Landroid/net/sip/SipRegistrationListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::sip::SipManager::close(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::net::sip::SipManager::isOpened(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpened", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::net::sip::SipManager::isRegistered(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRegistered", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::net::sip::SipAudioCall android::net::sip::SipManager::makeAudioCall(const ::android::net::sip::SipProfile& arg0, const ::android::net::sip::SipProfile& arg1, const ::android::net::sip::SipAudioCall_Listener& arg2, int32_t arg3) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeAudioCall", "(Landroid/net/sip/SipProfile;Landroid/net/sip/SipProfile;Landroid/net/sip/SipAudioCall$Listener;I)Landroid/net/sip/SipAudioCall;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::net::sip::SipAudioCall _ret(ret);
    return _ret;
}

::android::net::sip::SipAudioCall android::net::sip::SipManager::makeAudioCall(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::net::sip::SipAudioCall_Listener& arg2, int32_t arg3) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeAudioCall", "(Ljava/lang/String;Ljava/lang/String;Landroid/net/sip/SipAudioCall$Listener;I)Landroid/net/sip/SipAudioCall;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::net::sip::SipAudioCall _ret(ret);
    return _ret;
}

::android::net::sip::SipAudioCall android::net::sip::SipManager::takeAudioCall(const ::android::content::Intent& arg0, const ::android::net::sip::SipAudioCall_Listener& arg1) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeAudioCall", "(Landroid/content/Intent;Landroid/net/sip/SipAudioCall$Listener;)Landroid/net/sip/SipAudioCall;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::sip::SipAudioCall _ret(ret);
    return _ret;
}

bool android::net::sip::SipManager::isIncomingCallIntent(const ::android::content::Intent& arg0){
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isIncomingCallIntent", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::net::sip::SipManager::getCallId(const ::android::content::Intent& arg0){
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCallId", "(Landroid/content/Intent;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::sip::SipManager::getOfferSessionDescription(const ::android::content::Intent& arg0){
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getOfferSessionDescription", "(Landroid/content/Intent;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::net::sip::SipManager::register_(const ::android::net::sip::SipProfile& arg0, int32_t arg1, const ::android::net::sip::SipRegistrationListener& arg2) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Landroid/net/sip/SipProfile;ILandroid/net/sip/SipRegistrationListener;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipManager::unregister(const ::android::net::sip::SipProfile& arg0, const ::android::net::sip::SipRegistrationListener& arg1) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregister", "(Landroid/net/sip/SipProfile;Landroid/net/sip/SipRegistrationListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::net::sip::SipSession android::net::sip::SipManager::getSessionFor(const ::android::content::Intent& arg0) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionFor", "(Landroid/content/Intent;)Landroid/net/sip/SipSession;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipSession _ret(ret);
    return _ret;
}

::android::net::sip::SipSession android::net::sip::SipManager::createSipSession(const ::android::net::sip::SipProfile& arg0, const ::android::net::sip::SipSession_Listener& arg1) const {
    if (!::android::net::sip::SipManager::_class) ::android::net::sip::SipManager::_class = java::fetch_class("android/net/sip/SipManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSipSession", "(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession$Listener;)Landroid/net/sip/SipSession;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::sip::SipSession _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipAudioCall_Listener::SipAudioCall_Listener() : ::java::lang::Object((jobject)0) {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::net::sip::SipAudioCall_Listener::onReadyToCall(const ::android::net::sip::SipAudioCall& arg0) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReadyToCall", "(Landroid/net/sip/SipAudioCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall_Listener::onCalling(const ::android::net::sip::SipAudioCall& arg0) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCalling", "(Landroid/net/sip/SipAudioCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall_Listener::onRinging(const ::android::net::sip::SipAudioCall& arg0, const ::android::net::sip::SipProfile& arg1) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRinging", "(Landroid/net/sip/SipAudioCall;Landroid/net/sip/SipProfile;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::sip::SipAudioCall_Listener::onRingingBack(const ::android::net::sip::SipAudioCall& arg0) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRingingBack", "(Landroid/net/sip/SipAudioCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall_Listener::onCallEstablished(const ::android::net::sip::SipAudioCall& arg0) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallEstablished", "(Landroid/net/sip/SipAudioCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall_Listener::onCallEnded(const ::android::net::sip::SipAudioCall& arg0) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallEnded", "(Landroid/net/sip/SipAudioCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall_Listener::onCallBusy(const ::android::net::sip::SipAudioCall& arg0) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallBusy", "(Landroid/net/sip/SipAudioCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall_Listener::onCallHeld(const ::android::net::sip::SipAudioCall& arg0) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallHeld", "(Landroid/net/sip/SipAudioCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall_Listener::onError(const ::android::net::sip::SipAudioCall& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Landroid/net/sip/SipAudioCall;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipAudioCall_Listener::onChanged(const ::android::net::sip::SipAudioCall& arg0) const {
    if (!::android::net::sip::SipAudioCall_Listener::_class) ::android::net::sip::SipAudioCall_Listener::_class = java::fetch_class("android/net/sip/SipAudioCall$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChanged", "(Landroid/net/sip/SipAudioCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipException::SipException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::net::sip::SipException::_class) ::android::net::sip::SipException::_class = java::fetch_class("android/net/sip/SipException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipException::SipException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::net::sip::SipException::_class) ::android::net::sip::SipException::_class = java::fetch_class("android/net/sip/SipException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipException::SipException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::net::sip::SipException::_class) ::android::net::sip::SipException::_class = java::fetch_class("android/net/sip/SipException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::net::sip::SipRegistrationListener::onRegistering(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipRegistrationListener::_class) ::android::net::sip::SipRegistrationListener::_class = java::fetch_class("android/net/sip/SipRegistrationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRegistering", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipRegistrationListener::onRegistrationDone(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::net::sip::SipRegistrationListener::_class) ::android::net::sip::SipRegistrationListener::_class = java::fetch_class("android/net/sip/SipRegistrationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRegistrationDone", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::sip::SipRegistrationListener::onRegistrationFailed(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::net::sip::SipRegistrationListener::_class) ::android::net::sip::SipRegistrationListener::_class = java::fetch_class("android/net/sip/SipRegistrationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRegistrationFailed", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::net::sip::SipSession::getLocalIp() const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalIp", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile android::net::sip::SipSession::getLocalProfile() const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalProfile", "()Landroid/net/sip/SipProfile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::sip::SipProfile _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile android::net::sip::SipSession::getPeerProfile() const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerProfile", "()Landroid/net/sip/SipProfile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::sip::SipProfile _ret(ret);
    return _ret;
}

int32_t android::net::sip::SipSession::getState() const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::net::sip::SipSession::isInCall() const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInCall", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::net::sip::SipSession::getCallId() const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::net::sip::SipSession::setListener(const ::android::net::sip::SipSession_Listener& arg0) const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListener", "(Landroid/net/sip/SipSession$Listener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipSession::register_(int32_t arg0) const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipSession::unregister() const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregister", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::sip::SipSession::makeCall(const ::android::net::sip::SipProfile& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeCall", "(Landroid/net/sip/SipProfile;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipSession::answerCall(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "answerCall", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::sip::SipSession::endCall() const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "endCall", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::sip::SipSession::changeCall(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::net::sip::SipSession::_class) ::android::net::sip::SipSession::_class = java::fetch_class("android/net/sip/SipSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "changeCall", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipProfile_Builder::SipProfile_Builder(const ::android::net::sip::SipProfile& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/sip/SipProfile;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipProfile_Builder::SipProfile_Builder(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipProfile_Builder::SipProfile_Builder(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setAuthUserName(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuthUserName", "(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setProfileName(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProfileName", "(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setPassword(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setPort(int32_t arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPort", "(I)Landroid/net/sip/SipProfile$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setProtocol(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProtocol", "(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setOutboundProxy(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutboundProxy", "(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setDisplayName(const ::java::lang::String& arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayName", "(Ljava/lang/String;)Landroid/net/sip/SipProfile$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setSendKeepAlive(bool arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSendKeepAlive", "(Z)Landroid/net/sip/SipProfile$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile_Builder android::net::sip::SipProfile_Builder::setAutoRegistration(bool arg0) const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoRegistration", "(Z)Landroid/net/sip/SipProfile$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::sip::SipProfile_Builder _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile android::net::sip::SipProfile_Builder::build() const {
    if (!::android::net::sip::SipProfile_Builder::_class) ::android::net::sip::SipProfile_Builder::_class = java::fetch_class("android/net/sip/SipProfile$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/net/sip/SipProfile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::sip::SipProfile _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipSession_Listener::SipSession_Listener() : ::java::lang::Object((jobject)0) {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::net::sip::SipSession_Listener::onCalling(const ::android::net::sip::SipSession& arg0) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCalling", "(Landroid/net/sip/SipSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipSession_Listener::onRinging(const ::android::net::sip::SipSession& arg0, const ::android::net::sip::SipProfile& arg1, const ::java::lang::String& arg2) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRinging", "(Landroid/net/sip/SipSession;Landroid/net/sip/SipProfile;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipSession_Listener::onRingingBack(const ::android::net::sip::SipSession& arg0) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRingingBack", "(Landroid/net/sip/SipSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipSession_Listener::onCallEstablished(const ::android::net::sip::SipSession& arg0, const ::java::lang::String& arg1) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallEstablished", "(Landroid/net/sip/SipSession;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::sip::SipSession_Listener::onCallEnded(const ::android::net::sip::SipSession& arg0) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallEnded", "(Landroid/net/sip/SipSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipSession_Listener::onCallBusy(const ::android::net::sip::SipSession& arg0) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallBusy", "(Landroid/net/sip/SipSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipSession_Listener::onError(const ::android::net::sip::SipSession& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Landroid/net/sip/SipSession;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipSession_Listener::onCallChangeFailed(const ::android::net::sip::SipSession& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallChangeFailed", "(Landroid/net/sip/SipSession;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipSession_Listener::onRegistering(const ::android::net::sip::SipSession& arg0) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRegistering", "(Landroid/net/sip/SipSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipSession_Listener::onRegistrationDone(const ::android::net::sip::SipSession& arg0, int32_t arg1) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRegistrationDone", "(Landroid/net/sip/SipSession;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::sip::SipSession_Listener::onRegistrationFailed(const ::android::net::sip::SipSession& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRegistrationFailed", "(Landroid/net/sip/SipSession;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipSession_Listener::onRegistrationTimeout(const ::android::net::sip::SipSession& arg0) const {
    if (!::android::net::sip::SipSession_Listener::_class) ::android::net::sip::SipSession_Listener::_class = java::fetch_class("android/net/sip/SipSession$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRegistrationTimeout", "(Landroid/net/sip/SipSession;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::net::sip::SipSession_State::toString(int32_t arg0){
    if (!::android::net::sip::SipSession_State::_class) ::android::net::sip::SipSession_State::_class = java::fetch_class("android/net/sip/SipSession$State");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::net::sip::SipProfile::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::net::sip::SipProfile::describeContents() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::net::sip::SipProfile::getUriString() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUriString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::sip::SipProfile::getDisplayName() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::sip::SipProfile::getUserName() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::sip::SipProfile::getAuthUserName() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthUserName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::sip::SipProfile::getPassword() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::sip::SipProfile::getSipDomain() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSipDomain", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::sip::SipProfile::getPort() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::net::sip::SipProfile::getProtocol() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocol", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::sip::SipProfile::getProxyAddress() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProxyAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::sip::SipProfile::getProfileName() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProfileName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::net::sip::SipProfile::getSendKeepAlive() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSendKeepAlive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::sip::SipProfile::getAutoRegistration() const {
    if (!::android::net::sip::SipProfile::_class) ::android::net::sip::SipProfile::_class = java::fetch_class("android/net/sip/SipProfile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAutoRegistration", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::net::sip::SipErrorCode::toString(int32_t arg0){
    if (!::android::net::sip::SipErrorCode::_class) ::android::net::sip::SipErrorCode::_class = java::fetch_class("android/net/sip/SipErrorCode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::sip::SipAudioCall::SipAudioCall(const ::android::content::Context& arg0, const ::android::net::sip::SipProfile& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/net/sip/SipProfile;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::net::sip::SipAudioCall::setListener(const ::android::net::sip::SipAudioCall_Listener& arg0) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListener", "(Landroid/net/sip/SipAudioCall$Listener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall::setListener(const ::android::net::sip::SipAudioCall_Listener& arg0, bool arg1) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListener", "(Landroid/net/sip/SipAudioCall$Listener;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::net::sip::SipAudioCall::isInCall() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInCall", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::sip::SipAudioCall::isOnHold() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOnHold", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::net::sip::SipAudioCall::close() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::net::sip::SipProfile android::net::sip::SipAudioCall::getLocalProfile() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalProfile", "()Landroid/net/sip/SipProfile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::sip::SipProfile _ret(ret);
    return _ret;
}

::android::net::sip::SipProfile android::net::sip::SipAudioCall::getPeerProfile() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerProfile", "()Landroid/net/sip/SipProfile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::sip::SipProfile _ret(ret);
    return _ret;
}

int32_t android::net::sip::SipAudioCall::getState() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::sip::SipAudioCall::attachCall(const ::android::net::sip::SipSession& arg0, const ::java::lang::String& arg1) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachCall", "(Landroid/net/sip/SipSession;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::sip::SipAudioCall::makeCall(const ::android::net::sip::SipProfile& arg0, const ::android::net::sip::SipSession& arg1, int32_t arg2) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeCall", "(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::net::sip::SipAudioCall::endCall() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "endCall", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::sip::SipAudioCall::holdCall(int32_t arg0) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "holdCall", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall::answerCall(int32_t arg0) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "answerCall", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall::continueCall(int32_t arg0) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueCall", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall::toggleMute() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggleMute", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::net::sip::SipAudioCall::isMuted() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMuted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::net::sip::SipAudioCall::setSpeakerMode(bool arg0) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpeakerMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall::sendDtmf(int32_t arg0) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendDtmf", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::sip::SipAudioCall::sendDtmf(int32_t arg0, const ::android::os::Message& arg1) const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendDtmf", "(ILandroid/os/Message;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::sip::SipAudioCall::startAudio() const {
    if (!::android::net::sip::SipAudioCall::_class) ::android::net::sip::SipAudioCall::_class = java::fetch_class("android/net/sip/SipAudioCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "startAudio", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

