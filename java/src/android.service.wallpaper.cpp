#include "java-core.hpp"
#include <memory>
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.service.wallpaper.WallpaperService.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.SurfaceHolder.hpp"
#include "java.lang.String.hpp"

jclass android::service::wallpaper::WallpaperService::_class = nullptr;
jclass android::service::wallpaper::WallpaperService_Engine::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::service::wallpaper::WallpaperService::WallpaperService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::service::wallpaper::WallpaperService::_class) ::android::service::wallpaper::WallpaperService::_class = java::fetch_class("android/service/wallpaper/WallpaperService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::service::wallpaper::WallpaperService::onCreate() const {
    if (!::android::service::wallpaper::WallpaperService::_class) ::android::service::wallpaper::WallpaperService::_class = java::fetch_class("android/service/wallpaper/WallpaperService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::service::wallpaper::WallpaperService::onDestroy() const {
    if (!::android::service::wallpaper::WallpaperService::_class) ::android::service::wallpaper::WallpaperService::_class = java::fetch_class("android/service/wallpaper/WallpaperService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::IBinder android::service::wallpaper::WallpaperService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::service::wallpaper::WallpaperService::_class) ::android::service::wallpaper::WallpaperService::_class = java::fetch_class("android/service/wallpaper/WallpaperService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::android::service::wallpaper::WallpaperService_Engine android::service::wallpaper::WallpaperService::onCreateEngine() const {
    if (!::android::service::wallpaper::WallpaperService::_class) ::android::service::wallpaper::WallpaperService::_class = java::fetch_class("android/service/wallpaper/WallpaperService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateEngine", "()Landroid/service/wallpaper/WallpaperService$Engine;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::service::wallpaper::WallpaperService_Engine _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::service::wallpaper::WallpaperService_Engine::WallpaperService_Engine(const ::android::service::wallpaper::WallpaperService& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/service/wallpaper/WallpaperService;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::view::SurfaceHolder android::service::wallpaper::WallpaperService_Engine::getSurfaceHolder() const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSurfaceHolder", "()Landroid/view/SurfaceHolder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::SurfaceHolder _ret(ret);
    return _ret;
}

int32_t android::service::wallpaper::WallpaperService_Engine::getDesiredMinimumWidth() const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDesiredMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::service::wallpaper::WallpaperService_Engine::getDesiredMinimumHeight() const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDesiredMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::service::wallpaper::WallpaperService_Engine::isVisible() const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::service::wallpaper::WallpaperService_Engine::isPreview() const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPreview", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::service::wallpaper::WallpaperService_Engine::setTouchEventsEnabled(bool arg0) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTouchEventsEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::service::wallpaper::WallpaperService_Engine::setOffsetNotificationsEnabled(bool arg0) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOffsetNotificationsEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::service::wallpaper::WallpaperService_Engine::onCreate(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::service::wallpaper::WallpaperService_Engine::onDestroy() const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::service::wallpaper::WallpaperService_Engine::onVisibilityChanged(bool arg0) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onVisibilityChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::service::wallpaper::WallpaperService_Engine::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::service::wallpaper::WallpaperService_Engine::onOffsetsChanged(float arg0, float arg1, float arg2, float arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOffsetsChanged", "(FFFFII)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

::android::os::Bundle android::service::wallpaper::WallpaperService_Engine::onCommand(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::android::os::Bundle& arg4, bool arg5) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCommand", "(Ljava/lang/String;IIILandroid/os/Bundle;Z)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    bool _arg5 = arg5;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::service::wallpaper::WallpaperService_Engine::onDesiredSizeChanged(int32_t arg0, int32_t arg1) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDesiredSizeChanged", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::service::wallpaper::WallpaperService_Engine::onSurfaceChanged(const ::android::view::SurfaceHolder& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceChanged", "(Landroid/view/SurfaceHolder;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::service::wallpaper::WallpaperService_Engine::onSurfaceRedrawNeeded(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceRedrawNeeded", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::service::wallpaper::WallpaperService_Engine::onSurfaceCreated(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceCreated", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::service::wallpaper::WallpaperService_Engine::onSurfaceDestroyed(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::service::wallpaper::WallpaperService_Engine::_class) ::android::service::wallpaper::WallpaperService_Engine::_class = java::fetch_class("android/service/wallpaper/WallpaperService$Engine");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceDestroyed", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

