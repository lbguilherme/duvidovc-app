#include "java-core.hpp"
#include <memory>
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Parcel.hpp"
#include "java.lang.String.hpp"
#include "org.kde.necessitas.ministro.IMinistro.hpp"
#include "org.kde.necessitas.ministro.IMinistroCallback.hpp"

jclass org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::_class = nullptr;
jclass org::kde::necessitas::ministro::IMinistroCallback::_class = nullptr;
jclass org::kde::necessitas::ministro::IMinistroCallback_Stub::_class = nullptr;
jclass org::kde::necessitas::ministro::IMinistro_Stub_Proxy::_class = nullptr;
jclass org::kde::necessitas::ministro::IMinistro::_class = nullptr;
jclass org::kde::necessitas::ministro::IMinistro_Stub::_class = nullptr;

::android::os::IBinder org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::asBinder() const {
    if (!::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::_class) ::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistroCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::java::lang::String org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::getInterfaceDescriptor() const {
    if (!::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::_class) ::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistroCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceDescriptor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::loaderReady(const ::android::os::Bundle& arg0) const {
    if (!::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::_class) ::org::kde::necessitas::ministro::IMinistroCallback_Stub_Proxy::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistroCallback$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "loaderReady", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::kde::necessitas::ministro::IMinistroCallback::loaderReady(const ::android::os::Bundle& arg0) const {
    if (!::org::kde::necessitas::ministro::IMinistroCallback::_class) ::org::kde::necessitas::ministro::IMinistroCallback::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistroCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "loaderReady", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::kde::necessitas::ministro::IMinistroCallback_Stub::IMinistroCallback_Stub() : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::org::kde::necessitas::ministro::IMinistroCallback((jobject)0) {
    if (!::org::kde::necessitas::ministro::IMinistroCallback_Stub::_class) ::org::kde::necessitas::ministro::IMinistroCallback_Stub::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistroCallback$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::kde::necessitas::ministro::IMinistroCallback org::kde::necessitas::ministro::IMinistroCallback_Stub::asInterface(const ::android::os::IBinder& arg0){
    if (!::org::kde::necessitas::ministro::IMinistroCallback_Stub::_class) ::org::kde::necessitas::ministro::IMinistroCallback_Stub::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistroCallback$Stub");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asInterface", "(Landroid/os/IBinder;)Lorg/kde/necessitas/ministro/IMinistroCallback;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::kde::necessitas::ministro::IMinistroCallback _ret(ret);
    return _ret;
}

::android::os::IBinder org::kde::necessitas::ministro::IMinistroCallback_Stub::asBinder() const {
    if (!::org::kde::necessitas::ministro::IMinistroCallback_Stub::_class) ::org::kde::necessitas::ministro::IMinistroCallback_Stub::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistroCallback$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

bool org::kde::necessitas::ministro::IMinistroCallback_Stub::onTransact(int32_t arg0, const ::android::os::Parcel& arg1, const ::android::os::Parcel& arg2, int32_t arg3) const {
    if (!::org::kde::necessitas::ministro::IMinistroCallback_Stub::_class) ::org::kde::necessitas::ministro::IMinistroCallback_Stub::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistroCallback$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTransact", "(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::os::IBinder org::kde::necessitas::ministro::IMinistro_Stub_Proxy::asBinder() const {
    if (!::org::kde::necessitas::ministro::IMinistro_Stub_Proxy::_class) ::org::kde::necessitas::ministro::IMinistro_Stub_Proxy::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistro$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::java::lang::String org::kde::necessitas::ministro::IMinistro_Stub_Proxy::getInterfaceDescriptor() const {
    if (!::org::kde::necessitas::ministro::IMinistro_Stub_Proxy::_class) ::org::kde::necessitas::ministro::IMinistro_Stub_Proxy::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistro$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceDescriptor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::kde::necessitas::ministro::IMinistro_Stub_Proxy::requestLoader(const ::org::kde::necessitas::ministro::IMinistroCallback& arg0, const ::android::os::Bundle& arg1) const {
    if (!::org::kde::necessitas::ministro::IMinistro_Stub_Proxy::_class) ::org::kde::necessitas::ministro::IMinistro_Stub_Proxy::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistro$Stub$Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLoader", "(Lorg/kde/necessitas/ministro/IMinistroCallback;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::kde::necessitas::ministro::IMinistro::requestLoader(const ::org::kde::necessitas::ministro::IMinistroCallback& arg0, const ::android::os::Bundle& arg1) const {
    if (!::org::kde::necessitas::ministro::IMinistro::_class) ::org::kde::necessitas::ministro::IMinistro::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistro");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLoader", "(Lorg/kde/necessitas/ministro/IMinistroCallback;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::kde::necessitas::ministro::IMinistro_Stub::IMinistro_Stub() : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::org::kde::necessitas::ministro::IMinistro((jobject)0) {
    if (!::org::kde::necessitas::ministro::IMinistro_Stub::_class) ::org::kde::necessitas::ministro::IMinistro_Stub::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistro$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::kde::necessitas::ministro::IMinistro org::kde::necessitas::ministro::IMinistro_Stub::asInterface(const ::android::os::IBinder& arg0){
    if (!::org::kde::necessitas::ministro::IMinistro_Stub::_class) ::org::kde::necessitas::ministro::IMinistro_Stub::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistro$Stub");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asInterface", "(Landroid/os/IBinder;)Lorg/kde/necessitas/ministro/IMinistro;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::kde::necessitas::ministro::IMinistro _ret(ret);
    return _ret;
}

::android::os::IBinder org::kde::necessitas::ministro::IMinistro_Stub::asBinder() const {
    if (!::org::kde::necessitas::ministro::IMinistro_Stub::_class) ::org::kde::necessitas::ministro::IMinistro_Stub::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistro$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

bool org::kde::necessitas::ministro::IMinistro_Stub::onTransact(int32_t arg0, const ::android::os::Parcel& arg1, const ::android::os::Parcel& arg2, int32_t arg3) const {
    if (!::org::kde::necessitas::ministro::IMinistro_Stub::_class) ::org::kde::necessitas::ministro::IMinistro_Stub::_class = java::fetch_class("org/kde/necessitas/ministro/IMinistro$Stub");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTransact", "(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

