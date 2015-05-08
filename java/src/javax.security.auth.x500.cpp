#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Map.hpp"
#include "javax.security.auth.x500.X500Principal.hpp"

jclass javax::security::auth::x500::X500Principal::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::x500::X500Principal::X500Principal(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::x500::X500Principal::X500Principal(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::x500::X500Principal::X500Principal(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::x500::X500Principal::X500Principal(const ::java::lang::String& arg0, const ::java::util::Map& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool javax::security::auth::x500::X500Principal::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< int8_t> javax::security::auth::x500::X500Principal::getEncoded() const {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String javax::security::auth::x500::X500Principal::getName() const {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::security::auth::x500::X500Principal::getName(const ::java::lang::String& arg0) const {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::security::auth::x500::X500Principal::getName(const ::java::lang::String& arg0, const ::java::util::Map& arg1) const {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t javax::security::auth::x500::X500Principal::hashCode() const {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String javax::security::auth::x500::X500Principal::toString() const {
    if (!::javax::security::auth::x500::X500Principal::_class) ::javax::security::auth::x500::X500Principal::_class = java::fetch_class("javax/security/auth/x500/X500Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

