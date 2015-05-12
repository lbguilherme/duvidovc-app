#include "java-core.hpp"
#include <memory>
#include "android.content.Intent.hpp"
#include "com.facebook.AccessToken.hpp"
#include "vc.duvido.BuildConfig.hpp"
#include "vc.duvido.DuvidoActivity.hpp"
#include "vc.duvido.FacebookBridge.hpp"
#include "vc.duvido.R.hpp"

jclass vc::duvido::R_array::_class = nullptr;
jclass vc::duvido::R_id::_class = nullptr;
jclass vc::duvido::R_drawable::_class = nullptr;
jclass vc::duvido::BuildConfig::_class = nullptr;
jclass vc::duvido::R::_class = nullptr;
jclass vc::duvido::DuvidoActivity::_class = nullptr;
jclass vc::duvido::R_layout::_class = nullptr;
jclass vc::duvido::R_string::_class = nullptr;
jclass vc::duvido::FacebookBridge::_class = nullptr;
jclass vc::duvido::R_dimen::_class = nullptr;
jclass vc::duvido::R_styleable::_class = nullptr;
jclass vc::duvido::R_style::_class = nullptr;
jclass vc::duvido::R_color::_class = nullptr;
jclass vc::duvido::R_attr::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_array::R_array() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_array::_class) ::vc::duvido::R_array::_class = java::fetch_class("vc/duvido/R$array");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_id::R_id() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_id::_class) ::vc::duvido::R_id::_class = java::fetch_class("vc/duvido/R$id");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_drawable::R_drawable() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_drawable::_class) ::vc::duvido::R_drawable::_class = java::fetch_class("vc/duvido/R$drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::BuildConfig::BuildConfig() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::BuildConfig::_class) ::vc::duvido::BuildConfig::_class = java::fetch_class("vc/duvido/BuildConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R::R() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R::_class) ::vc::duvido::R::_class = java::fetch_class("vc/duvido/R");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::vc::duvido::DuvidoActivity vc::duvido::DuvidoActivity::getInstance(){
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Lvc/duvido/DuvidoActivity;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::vc::duvido::DuvidoActivity _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::DuvidoActivity::DuvidoActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::org::qtproject::qt5::android::bindings::QtActivity((jobject)0) {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_layout::R_layout() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_layout::_class) ::vc::duvido::R_layout::_class = java::fetch_class("vc/duvido/R$layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_string::R_string() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_string::_class) ::vc::duvido::R_string::_class = java::fetch_class("vc/duvido/R$string");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::FacebookBridge::FacebookBridge() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::FacebookBridge::_class) ::vc::duvido::FacebookBridge::_class = java::fetch_class("vc/duvido/FacebookBridge");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void vc::duvido::FacebookBridge::initialize(){
    if (!::vc::duvido::FacebookBridge::_class) ::vc::duvido::FacebookBridge::_class = java::fetch_class("vc/duvido/FacebookBridge");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "initialize", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void vc::duvido::FacebookBridge::submitActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2){
    if (!::vc::duvido::FacebookBridge::_class) ::vc::duvido::FacebookBridge::_class = java::fetch_class("vc/duvido/FacebookBridge");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "submitActivityResult", "(IILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void vc::duvido::FacebookBridge::login(){
    if (!::vc::duvido::FacebookBridge::_class) ::vc::duvido::FacebookBridge::_class = java::fetch_class("vc/duvido/FacebookBridge");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "login", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

static void JNICALL Java_vc_duvido_FacebookBridge_onLoginSuccess__(JNIEnv*, jclass) {
    ::vc::duvido::FacebookBridge::onLoginSuccess();
}

static void JNICALL Java_vc_duvido_FacebookBridge_onLoginCancel__(JNIEnv*, jclass) {
    ::vc::duvido::FacebookBridge::onLoginCancel();
}

static void JNICALL Java_vc_duvido_FacebookBridge_onLoginError__(JNIEnv*, jclass) {
    ::vc::duvido::FacebookBridge::onLoginError();
}

static void JNICALL Java_vc_duvido_FacebookBridge_onAccessTokenReceived__Lcom_facebook_AccessToken_2(JNIEnv*, jclass, jobject arg0) {
    ::com::facebook::AccessToken _arg0(arg0);
    ::vc::duvido::FacebookBridge::onAccessTokenReceived(_arg0);
}

void ::vc::duvido::FacebookBridge::jniInitializeNative() {
    if (!::vc::duvido::FacebookBridge::_class) ::vc::duvido::FacebookBridge::_class = java::fetch_class("vc/duvido/FacebookBridge");
    JNINativeMethod methods[] = {
        {"onLoginSuccess", "()V", (void*)Java_vc_duvido_FacebookBridge_onLoginSuccess__},
        {"onLoginCancel", "()V", (void*)Java_vc_duvido_FacebookBridge_onLoginCancel__},
        {"onLoginError", "()V", (void*)Java_vc_duvido_FacebookBridge_onLoginError__},
        {"onAccessTokenReceived", "(Lcom/facebook/AccessToken;)V", (void*)Java_vc_duvido_FacebookBridge_onAccessTokenReceived__Lcom_facebook_AccessToken_2},
    };
    java::jni->RegisterNatives(_class, methods, sizeof(methods)/sizeof(methods[0]));
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_dimen::R_dimen() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_dimen::_class) ::vc::duvido::R_dimen::_class = java::fetch_class("vc/duvido/R$dimen");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_styleable::R_styleable() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_styleable::_class) ::vc::duvido::R_styleable::_class = java::fetch_class("vc/duvido/R$styleable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_style::R_style() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_style::_class) ::vc::duvido::R_style::_class = java::fetch_class("vc/duvido/R$style");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_color::R_color() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_color::_class) ::vc::duvido::R_color::_class = java::fetch_class("vc/duvido/R$color");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_attr::R_attr() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_attr::_class) ::vc::duvido::R_attr::_class = java::fetch_class("vc/duvido/R$attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop
