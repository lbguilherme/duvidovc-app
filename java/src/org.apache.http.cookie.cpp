#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.Date.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "org.apache.http.Header.hpp"
#include "org.apache.http.cookie.ClientCookie.hpp"
#include "org.apache.http.cookie.Cookie.hpp"
#include "org.apache.http.cookie.CookieAttributeHandler.hpp"
#include "org.apache.http.cookie.CookieIdentityComparator.hpp"
#include "org.apache.http.cookie.CookieOrigin.hpp"
#include "org.apache.http.cookie.CookiePathComparator.hpp"
#include "org.apache.http.cookie.CookieSpec.hpp"
#include "org.apache.http.cookie.CookieSpecFactory.hpp"
#include "org.apache.http.cookie.CookieSpecRegistry.hpp"
#include "org.apache.http.cookie.MalformedCookieException.hpp"
#include "org.apache.http.cookie.SM.hpp"
#include "org.apache.http.cookie.SetCookie.hpp"
#include "org.apache.http.cookie.SetCookie2.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::cookie::SetCookie2::_class = nullptr;
jclass org::apache::http::cookie::SM::_class = nullptr;
jclass org::apache::http::cookie::Cookie::_class = nullptr;
jclass org::apache::http::cookie::CookieOrigin::_class = nullptr;
jclass org::apache::http::cookie::MalformedCookieException::_class = nullptr;
jclass org::apache::http::cookie::CookieSpecFactory::_class = nullptr;
jclass org::apache::http::cookie::CookieSpec::_class = nullptr;
jclass org::apache::http::cookie::CookieSpecRegistry::_class = nullptr;
jclass org::apache::http::cookie::CookieIdentityComparator::_class = nullptr;
jclass org::apache::http::cookie::CookiePathComparator::_class = nullptr;
jclass org::apache::http::cookie::SetCookie::_class = nullptr;
jclass org::apache::http::cookie::ClientCookie::_class = nullptr;
jclass org::apache::http::cookie::CookieAttributeHandler::_class = nullptr;

void org::apache::http::cookie::SetCookie2::setCommentURL(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::SetCookie2::_class) ::org::apache::http::cookie::SetCookie2::_class = java::fetch_class("org/apache/http/cookie/SetCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCommentURL", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::SetCookie2::setPorts(const std::vector< int32_t>& arg0) const {
    if (!::org::apache::http::cookie::SetCookie2::_class) ::org::apache::http::cookie::SetCookie2::_class = java::fetch_class("org/apache/http/cookie/SetCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPorts", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::SetCookie2::setDiscard(bool arg0) const {
    if (!::org::apache::http::cookie::SetCookie2::_class) ::org::apache::http::cookie::SetCookie2::_class = java::fetch_class("org/apache/http/cookie/SetCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDiscard", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::cookie::Cookie::getName() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::cookie::Cookie::getValue() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::cookie::Cookie::getComment() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::cookie::Cookie::getCommentURL() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCommentURL", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Date org::apache::http::cookie::Cookie::getExpiryDate() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpiryDate", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

bool org::apache::http::cookie::Cookie::isPersistent() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPersistent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::apache::http::cookie::Cookie::getDomain() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomain", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::cookie::Cookie::getPath() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int32_t> org::apache::http::cookie::Cookie::getPorts() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPorts", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool org::apache::http::cookie::Cookie::isSecure() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t org::apache::http::cookie::Cookie::getVersion() const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::cookie::Cookie::isExpired(const ::java::util::Date& arg0) const {
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "isExpired", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::cookie::CookieOrigin::CookieOrigin(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2, bool arg3) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::cookie::CookieOrigin::_class) ::org::apache::http::cookie::CookieOrigin::_class = java::fetch_class("org/apache/http/cookie/CookieOrigin");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::cookie::CookieOrigin::getHost() const {
    if (!::org::apache::http::cookie::CookieOrigin::_class) ::org::apache::http::cookie::CookieOrigin::_class = java::fetch_class("org/apache/http/cookie/CookieOrigin");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::cookie::CookieOrigin::getPath() const {
    if (!::org::apache::http::cookie::CookieOrigin::_class) ::org::apache::http::cookie::CookieOrigin::_class = java::fetch_class("org/apache/http/cookie/CookieOrigin");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::cookie::CookieOrigin::getPort() const {
    if (!::org::apache::http::cookie::CookieOrigin::_class) ::org::apache::http::cookie::CookieOrigin::_class = java::fetch_class("org/apache/http/cookie/CookieOrigin");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::cookie::CookieOrigin::isSecure() const {
    if (!::org::apache::http::cookie::CookieOrigin::_class) ::org::apache::http::cookie::CookieOrigin::_class = java::fetch_class("org/apache/http/cookie/CookieOrigin");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::apache::http::cookie::CookieOrigin::toString() const {
    if (!::org::apache::http::cookie::CookieOrigin::_class) ::org::apache::http::cookie::CookieOrigin::_class = java::fetch_class("org/apache/http/cookie/CookieOrigin");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::cookie::MalformedCookieException::MalformedCookieException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::cookie::MalformedCookieException::_class) ::org::apache::http::cookie::MalformedCookieException::_class = java::fetch_class("org/apache/http/cookie/MalformedCookieException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::cookie::MalformedCookieException::MalformedCookieException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::cookie::MalformedCookieException::_class) ::org::apache::http::cookie::MalformedCookieException::_class = java::fetch_class("org/apache/http/cookie/MalformedCookieException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::cookie::MalformedCookieException::MalformedCookieException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::cookie::MalformedCookieException::_class) ::org::apache::http::cookie::MalformedCookieException::_class = java::fetch_class("org/apache/http/cookie/MalformedCookieException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::cookie::CookieSpec org::apache::http::cookie::CookieSpecFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::cookie::CookieSpecFactory::_class) ::org::apache::http::cookie::CookieSpecFactory::_class = java::fetch_class("org/apache/http/cookie/CookieSpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::cookie::CookieSpec _ret(ret);
    return _ret;
}

int32_t org::apache::http::cookie::CookieSpec::getVersion() const {
    if (!::org::apache::http::cookie::CookieSpec::_class) ::org::apache::http::cookie::CookieSpec::_class = java::fetch_class("org/apache/http/cookie/CookieSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List org::apache::http::cookie::CookieSpec::parse(const ::org::apache::http::Header& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::cookie::CookieSpec::_class) ::org::apache::http::cookie::CookieSpec::_class = java::fetch_class("org/apache/http/cookie/CookieSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

void org::apache::http::cookie::CookieSpec::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::cookie::CookieSpec::_class) ::org::apache::http::cookie::CookieSpec::_class = java::fetch_class("org/apache/http/cookie/CookieSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::cookie::CookieSpec::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::cookie::CookieSpec::_class) ::org::apache::http::cookie::CookieSpec::_class = java::fetch_class("org/apache/http/cookie/CookieSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::List org::apache::http::cookie::CookieSpec::formatCookies(const ::java::util::List& arg0) const {
    if (!::org::apache::http::cookie::CookieSpec::_class) ::org::apache::http::cookie::CookieSpec::_class = java::fetch_class("org/apache/http/cookie/CookieSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatCookies", "(Ljava/util/List;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::cookie::CookieSpec::getVersionHeader() const {
    if (!::org::apache::http::cookie::CookieSpec::_class) ::org::apache::http::cookie::CookieSpec::_class = java::fetch_class("org/apache/http/cookie/CookieSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersionHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::cookie::CookieSpecRegistry::CookieSpecRegistry() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::cookie::CookieSpecRegistry::_class) ::org::apache::http::cookie::CookieSpecRegistry::_class = java::fetch_class("org/apache/http/cookie/CookieSpecRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::cookie::CookieSpecRegistry::register_(const ::java::lang::String& arg0, const ::org::apache::http::cookie::CookieSpecFactory& arg1) const {
    if (!::org::apache::http::cookie::CookieSpecRegistry::_class) ::org::apache::http::cookie::CookieSpecRegistry::_class = java::fetch_class("org/apache/http/cookie/CookieSpecRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Ljava/lang/String;Lorg/apache/http/cookie/CookieSpecFactory;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::cookie::CookieSpecRegistry::unregister(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::CookieSpecRegistry::_class) ::org::apache::http::cookie::CookieSpecRegistry::_class = java::fetch_class("org/apache/http/cookie/CookieSpecRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregister", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::cookie::CookieSpec org::apache::http::cookie::CookieSpecRegistry::getCookieSpec(const ::java::lang::String& arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::cookie::CookieSpecRegistry::_class) ::org::apache::http::cookie::CookieSpecRegistry::_class = java::fetch_class("org/apache/http/cookie/CookieSpecRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookieSpec", "(Ljava/lang/String;Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::cookie::CookieSpec _ret(ret);
    return _ret;
}

::org::apache::http::cookie::CookieSpec org::apache::http::cookie::CookieSpecRegistry::getCookieSpec(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::CookieSpecRegistry::_class) ::org::apache::http::cookie::CookieSpecRegistry::_class = java::fetch_class("org/apache/http/cookie/CookieSpecRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookieSpec", "(Ljava/lang/String;)Lorg/apache/http/cookie/CookieSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::cookie::CookieSpec _ret(ret);
    return _ret;
}

::java::util::List org::apache::http::cookie::CookieSpecRegistry::getSpecNames() const {
    if (!::org::apache::http::cookie::CookieSpecRegistry::_class) ::org::apache::http::cookie::CookieSpecRegistry::_class = java::fetch_class("org/apache/http/cookie/CookieSpecRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpecNames", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void org::apache::http::cookie::CookieSpecRegistry::setItems(const ::java::util::Map& arg0) const {
    if (!::org::apache::http::cookie::CookieSpecRegistry::_class) ::org::apache::http::cookie::CookieSpecRegistry::_class = java::fetch_class("org/apache/http/cookie/CookieSpecRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItems", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::cookie::CookieIdentityComparator::CookieIdentityComparator() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Comparator((jobject)0) {
    if (!::org::apache::http::cookie::CookieIdentityComparator::_class) ::org::apache::http::cookie::CookieIdentityComparator::_class = java::fetch_class("org/apache/http/cookie/CookieIdentityComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::cookie::CookieIdentityComparator::compare(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::Cookie& arg1) const {
    if (!::org::apache::http::cookie::CookieIdentityComparator::_class) ::org::apache::http::cookie::CookieIdentityComparator::_class = java::fetch_class("org/apache/http/cookie/CookieIdentityComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/Cookie;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t org::apache::http::cookie::CookieIdentityComparator::compare(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::cookie::CookieIdentityComparator::_class) ::org::apache::http::cookie::CookieIdentityComparator::_class = java::fetch_class("org/apache/http/cookie/CookieIdentityComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::cookie::CookiePathComparator::CookiePathComparator() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Comparator((jobject)0) {
    if (!::org::apache::http::cookie::CookiePathComparator::_class) ::org::apache::http::cookie::CookiePathComparator::_class = java::fetch_class("org/apache/http/cookie/CookiePathComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::cookie::CookiePathComparator::compare(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::Cookie& arg1) const {
    if (!::org::apache::http::cookie::CookiePathComparator::_class) ::org::apache::http::cookie::CookiePathComparator::_class = java::fetch_class("org/apache/http/cookie/CookiePathComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/Cookie;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t org::apache::http::cookie::CookiePathComparator::compare(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::cookie::CookiePathComparator::_class) ::org::apache::http::cookie::CookiePathComparator::_class = java::fetch_class("org/apache/http/cookie/CookiePathComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::cookie::SetCookie::setValue(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::SetCookie::_class) ::org::apache::http::cookie::SetCookie::_class = java::fetch_class("org/apache/http/cookie/SetCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::SetCookie::setComment(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::SetCookie::_class) ::org::apache::http::cookie::SetCookie::_class = java::fetch_class("org/apache/http/cookie/SetCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComment", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::SetCookie::setExpiryDate(const ::java::util::Date& arg0) const {
    if (!::org::apache::http::cookie::SetCookie::_class) ::org::apache::http::cookie::SetCookie::_class = java::fetch_class("org/apache/http/cookie/SetCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExpiryDate", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::SetCookie::setDomain(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::SetCookie::_class) ::org::apache::http::cookie::SetCookie::_class = java::fetch_class("org/apache/http/cookie/SetCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDomain", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::SetCookie::setPath(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::SetCookie::_class) ::org::apache::http::cookie::SetCookie::_class = java::fetch_class("org/apache/http/cookie/SetCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::SetCookie::setSecure(bool arg0) const {
    if (!::org::apache::http::cookie::SetCookie::_class) ::org::apache::http::cookie::SetCookie::_class = java::fetch_class("org/apache/http/cookie/SetCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSecure", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::SetCookie::setVersion(int32_t arg0) const {
    if (!::org::apache::http::cookie::SetCookie::_class) ::org::apache::http::cookie::SetCookie::_class = java::fetch_class("org/apache/http/cookie/SetCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVersion", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::cookie::ClientCookie::getAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::ClientCookie::_class) ::org::apache::http::cookie::ClientCookie::_class = java::fetch_class("org/apache/http/cookie/ClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::cookie::ClientCookie::containsAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::cookie::ClientCookie::_class) ::org::apache::http::cookie::ClientCookie::_class = java::fetch_class("org/apache/http/cookie/ClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAttribute", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::CookieAttributeHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::cookie::CookieAttributeHandler::_class) ::org::apache::http::cookie::CookieAttributeHandler::_class = java::fetch_class("org/apache/http/cookie/CookieAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::cookie::CookieAttributeHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::cookie::CookieAttributeHandler::_class) ::org::apache::http::cookie::CookieAttributeHandler::_class = java::fetch_class("org/apache/http/cookie/CookieAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::cookie::CookieAttributeHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::cookie::CookieAttributeHandler::_class) ::org::apache::http::cookie::CookieAttributeHandler::_class = java::fetch_class("org/apache/http/cookie/CookieAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

