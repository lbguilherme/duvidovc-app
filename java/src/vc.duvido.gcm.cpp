#include "java-core.hpp"
#include <memory>
#include "android.os.Bundle.hpp"
#include "java.lang.String.hpp"
#include "vc.duvido.gcm.MessageListenerService.hpp"
#include "vc.duvido.gcm.RegistrationIntentService.hpp"
#include "vc.duvido.gcm.TokenListenerService.hpp"

jclass vc::duvido::gcm::RegistrationIntentService::_class = nullptr;
jclass vc::duvido::gcm::TokenListenerService::_class = nullptr;
jclass vc::duvido::gcm::MessageListenerService::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::gcm::RegistrationIntentService::RegistrationIntentService() : ::java::lang::Object((jobject)0), ::android::app::IntentService((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::vc::duvido::gcm::RegistrationIntentService::_class) ::vc::duvido::gcm::RegistrationIntentService::_class = java::fetch_class("vc/duvido/gcm/RegistrationIntentService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

static void JNICALL Java_vc_duvido_gcm_RegistrationIntentService_sendRegistrationToServer__Ljava_lang_String_2(JNIEnv*, jobject obj, jobject arg0) {
    java::initialize();
    ::vc::duvido::gcm::RegistrationIntentService _obj(obj);
    ::java::lang::String _arg0(arg0);
    _obj.sendRegistrationToServer(_arg0);
}

void ::vc::duvido::gcm::RegistrationIntentService::jniInitializeNative() {
    if (!::vc::duvido::gcm::RegistrationIntentService::_class) ::vc::duvido::gcm::RegistrationIntentService::_class = java::fetch_class("vc/duvido/gcm/RegistrationIntentService");
    JNINativeMethod methods[] = {
        {"sendRegistrationToServer", "(Ljava/lang/String;)V", (void*)Java_vc_duvido_gcm_RegistrationIntentService_sendRegistrationToServer__Ljava_lang_String_2},
    };
    java::jni->RegisterNatives(_class, methods, sizeof(methods)/sizeof(methods[0]));
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::gcm::TokenListenerService::TokenListenerService() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::gcm::TokenListenerService::_class) ::vc::duvido::gcm::TokenListenerService::_class = java::fetch_class("vc/duvido/gcm/TokenListenerService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void vc::duvido::gcm::TokenListenerService::onTokenRefresh() const {
    if (!::vc::duvido::gcm::TokenListenerService::_class) ::vc::duvido::gcm::TokenListenerService::_class = java::fetch_class("vc/duvido/gcm/TokenListenerService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTokenRefresh", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::gcm::MessageListenerService::MessageListenerService() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::gcm::MessageListenerService::_class) ::vc::duvido::gcm::MessageListenerService::_class = java::fetch_class("vc/duvido/gcm/MessageListenerService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

static void JNICALL Java_vc_duvido_gcm_MessageListenerService_onMessageReceived__Ljava_lang_String_2Landroid_os_Bundle_2(JNIEnv*, jobject obj, jobject arg0, jobject arg1) {
    java::initialize();
    ::vc::duvido::gcm::MessageListenerService _obj(obj);
    ::java::lang::String _arg0(arg0);
    ::android::os::Bundle _arg1(arg1);
    _obj.onMessageReceived(_arg0, _arg1);
}

void ::vc::duvido::gcm::MessageListenerService::jniInitializeNative() {
    if (!::vc::duvido::gcm::MessageListenerService::_class) ::vc::duvido::gcm::MessageListenerService::_class = java::fetch_class("vc/duvido/gcm/MessageListenerService");
    JNINativeMethod methods[] = {
        {"onMessageReceived", "(Ljava/lang/String;Landroid/os/Bundle;)V", (void*)Java_vc_duvido_gcm_MessageListenerService_onMessageReceived__Ljava_lang_String_2Landroid_os_Bundle_2},
    };
    java::jni->RegisterNatives(_class, methods, sizeof(methods)/sizeof(methods[0]));
}
