#include "java-core.hpp"
#include <memory>
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.view.KeyEvent.hpp"
#include "java.lang.String.hpp"
#include "vc.duvido.BuildConfig.hpp"
#include "vc.duvido.DuvidoActivity.hpp"
#include "vc.duvido.FacebookBridge.hpp"
#include "vc.duvido.Manifest.hpp"
#include "vc.duvido.R.hpp"
#include "vc.duvido.WebLoginActivity.hpp"

jclass vc::duvido::R_string::_class = nullptr;
jclass vc::duvido::BuildConfig::_class = nullptr;
jclass vc::duvido::DuvidoActivity::_class = nullptr;
jclass vc::duvido::R_dimen::_class = nullptr;
jclass vc::duvido::Manifest_permission::_class = nullptr;
jclass vc::duvido::R_array::_class = nullptr;
jclass vc::duvido::R_id::_class = nullptr;
jclass vc::duvido::R_layout::_class = nullptr;
jclass vc::duvido::FacebookBridge::_class = nullptr;
jclass vc::duvido::R_styleable::_class = nullptr;
jclass vc::duvido::R_style::_class = nullptr;
jclass vc::duvido::Manifest::_class = nullptr;
jclass vc::duvido::R::_class = nullptr;
jclass vc::duvido::R_drawable::_class = nullptr;
jclass vc::duvido::WebLoginActivity::_class = nullptr;
jclass vc::duvido::R_integer::_class = nullptr;
jclass vc::duvido::R_color::_class = nullptr;
jclass vc::duvido::R_attr::_class = nullptr;

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
::vc::duvido::BuildConfig::BuildConfig() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::BuildConfig::_class) ::vc::duvido::BuildConfig::_class = java::fetch_class("vc/duvido/BuildConfig");
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

void vc::duvido::DuvidoActivity::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void vc::duvido::DuvidoActivity::requestGcmToken() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestGcmToken", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool vc::duvido::DuvidoActivity::hasGallery() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasGallery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void vc::duvido::DuvidoActivity::fetchPhotoFromGallery() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "fetchPhotoFromGallery", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

static void JNICALL Java_vc_duvido_DuvidoActivity_onPhotoFetched__Ljava_lang_String_2(JNIEnv*, jobject obj, jobject arg0) {
    java::initialize();
    ::vc::duvido::DuvidoActivity _obj(obj);
    ::java::lang::String _arg0(arg0);
    _obj.onPhotoFetched(_arg0);
}

void vc::duvido::DuvidoActivity::startWebLogin() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startWebLogin", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool vc::duvido::DuvidoActivity::hasFacebookApp() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFacebookApp", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool vc::duvido::DuvidoActivity::hasGooglePlayServices() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasGooglePlayServices", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String vc::duvido::DuvidoActivity::getPhoneNumber() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPhoneNumber", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String vc::duvido::DuvidoActivity::getAndroidVersion() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndroidVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String vc::duvido::DuvidoActivity::getDeviceName() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String vc::duvido::DuvidoActivity::getDeviceBrand() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceBrand", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String vc::duvido::DuvidoActivity::getDeviceModel() const {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceModel", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void ::vc::duvido::DuvidoActivity::jniInitializeNative() {
    if (!::vc::duvido::DuvidoActivity::_class) ::vc::duvido::DuvidoActivity::_class = java::fetch_class("vc/duvido/DuvidoActivity");
    JNINativeMethod methods[] = {
        {"onPhotoFetched", "(Ljava/lang/String;)V", (void*)Java_vc_duvido_DuvidoActivity_onPhotoFetched__Ljava_lang_String_2},
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
::vc::duvido::Manifest_permission::Manifest_permission() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::Manifest_permission::_class) ::vc::duvido::Manifest_permission::_class = java::fetch_class("vc/duvido/Manifest$permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

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
::vc::duvido::R_layout::R_layout() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_layout::_class) ::vc::duvido::R_layout::_class = java::fetch_class("vc/duvido/R$layout");
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
    java::initialize();
    ::vc::duvido::FacebookBridge::onLoginSuccess();
}

static void JNICALL Java_vc_duvido_FacebookBridge_onLoginCancel__(JNIEnv*, jclass) {
    java::initialize();
    ::vc::duvido::FacebookBridge::onLoginCancel();
}

static void JNICALL Java_vc_duvido_FacebookBridge_onLoginError__(JNIEnv*, jclass) {
    java::initialize();
    ::vc::duvido::FacebookBridge::onLoginError();
}

static void JNICALL Java_vc_duvido_FacebookBridge_onAccessTokenReceived__Ljava_lang_String_2(JNIEnv*, jclass, jobject arg0) {
    java::initialize();
    ::java::lang::String _arg0(arg0);
    ::vc::duvido::FacebookBridge::onAccessTokenReceived(_arg0);
}

void ::vc::duvido::FacebookBridge::jniInitializeNative() {
    if (!::vc::duvido::FacebookBridge::_class) ::vc::duvido::FacebookBridge::_class = java::fetch_class("vc/duvido/FacebookBridge");
    JNINativeMethod methods[] = {
        {"onLoginSuccess", "()V", (void*)Java_vc_duvido_FacebookBridge_onLoginSuccess__},
        {"onLoginCancel", "()V", (void*)Java_vc_duvido_FacebookBridge_onLoginCancel__},
        {"onLoginError", "()V", (void*)Java_vc_duvido_FacebookBridge_onLoginError__},
        {"onAccessTokenReceived", "(Ljava/lang/String;)V", (void*)Java_vc_duvido_FacebookBridge_onAccessTokenReceived__Ljava_lang_String_2},
    };
    java::jni->RegisterNatives(_class, methods, sizeof(methods)/sizeof(methods[0]));
}
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
::vc::duvido::Manifest::Manifest() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::Manifest::_class) ::vc::duvido::Manifest::_class = java::fetch_class("vc/duvido/Manifest");
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
::vc::duvido::WebLoginActivity::WebLoginActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::vc::duvido::WebLoginActivity::_class) ::vc::duvido::WebLoginActivity::_class = java::fetch_class("vc/duvido/WebLoginActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void vc::duvido::WebLoginActivity::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::vc::duvido::WebLoginActivity::_class) ::vc::duvido::WebLoginActivity::_class = java::fetch_class("vc/duvido/WebLoginActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool vc::duvido::WebLoginActivity::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::vc::duvido::WebLoginActivity::_class) ::vc::duvido::WebLoginActivity::_class = java::fetch_class("vc/duvido/WebLoginActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::vc::duvido::R_integer::R_integer() : ::java::lang::Object((jobject)0) {
    if (!::vc::duvido::R_integer::_class) ::vc::duvido::R_integer::_class = java::fetch_class("vc/duvido/R$integer");
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

