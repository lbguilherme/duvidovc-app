#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Date.hpp"
#include "java.util.List.hpp"
#include "org.apache.http.Header.hpp"
#include "org.apache.http.HeaderElement.hpp"
#include "org.apache.http.cookie.Cookie.hpp"
#include "org.apache.http.cookie.CookieAttributeHandler.hpp"
#include "org.apache.http.cookie.CookieOrigin.hpp"
#include "org.apache.http.cookie.CookieSpec.hpp"
#include "org.apache.http.cookie.SetCookie.hpp"
#include "org.apache.http.impl.cookie.AbstractCookieAttributeHandler.hpp"
#include "org.apache.http.impl.cookie.AbstractCookieSpec.hpp"
#include "org.apache.http.impl.cookie.BasicClientCookie.hpp"
#include "org.apache.http.impl.cookie.BasicClientCookie2.hpp"
#include "org.apache.http.impl.cookie.BasicCommentHandler.hpp"
#include "org.apache.http.impl.cookie.BasicDomainHandler.hpp"
#include "org.apache.http.impl.cookie.BasicExpiresHandler.hpp"
#include "org.apache.http.impl.cookie.BasicMaxAgeHandler.hpp"
#include "org.apache.http.impl.cookie.BasicPathHandler.hpp"
#include "org.apache.http.impl.cookie.BasicSecureHandler.hpp"
#include "org.apache.http.impl.cookie.BestMatchSpec.hpp"
#include "org.apache.http.impl.cookie.BestMatchSpecFactory.hpp"
#include "org.apache.http.impl.cookie.BrowserCompatSpec.hpp"
#include "org.apache.http.impl.cookie.BrowserCompatSpecFactory.hpp"
#include "org.apache.http.impl.cookie.CookieSpecBase.hpp"
#include "org.apache.http.impl.cookie.DateParseException.hpp"
#include "org.apache.http.impl.cookie.DateUtils.hpp"
#include "org.apache.http.impl.cookie.NetscapeDomainHandler.hpp"
#include "org.apache.http.impl.cookie.NetscapeDraftHeaderParser.hpp"
#include "org.apache.http.impl.cookie.NetscapeDraftSpec.hpp"
#include "org.apache.http.impl.cookie.NetscapeDraftSpecFactory.hpp"
#include "org.apache.http.impl.cookie.RFC2109DomainHandler.hpp"
#include "org.apache.http.impl.cookie.RFC2109Spec.hpp"
#include "org.apache.http.impl.cookie.RFC2109SpecFactory.hpp"
#include "org.apache.http.impl.cookie.RFC2109VersionHandler.hpp"
#include "org.apache.http.impl.cookie.RFC2965CommentUrlAttributeHandler.hpp"
#include "org.apache.http.impl.cookie.RFC2965DiscardAttributeHandler.hpp"
#include "org.apache.http.impl.cookie.RFC2965DomainAttributeHandler.hpp"
#include "org.apache.http.impl.cookie.RFC2965PortAttributeHandler.hpp"
#include "org.apache.http.impl.cookie.RFC2965Spec.hpp"
#include "org.apache.http.impl.cookie.RFC2965SpecFactory.hpp"
#include "org.apache.http.impl.cookie.RFC2965VersionAttributeHandler.hpp"
#include "org.apache.http.message.ParserCursor.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.util.CharArrayBuffer.hpp"

jclass org::apache::http::impl::cookie::BasicClientCookie::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2109DomainHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::BrowserCompatSpec::_class = nullptr;
jclass org::apache::http::impl::cookie::BasicSecureHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::NetscapeDraftHeaderParser::_class = nullptr;
jclass org::apache::http::impl::cookie::BasicCommentHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2965Spec::_class = nullptr;
jclass org::apache::http::impl::cookie::BrowserCompatSpecFactory::_class = nullptr;
jclass org::apache::http::impl::cookie::NetscapeDomainHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::NetscapeDraftSpecFactory::_class = nullptr;
jclass org::apache::http::impl::cookie::NetscapeDraftSpec::_class = nullptr;
jclass org::apache::http::impl::cookie::BestMatchSpec::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::CookieSpecBase::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2965SpecFactory::_class = nullptr;
jclass org::apache::http::impl::cookie::BasicDomainHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2109SpecFactory::_class = nullptr;
jclass org::apache::http::impl::cookie::DateParseException::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2109VersionHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::BasicMaxAgeHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::BasicClientCookie2::_class = nullptr;
jclass org::apache::http::impl::cookie::AbstractCookieSpec::_class = nullptr;
jclass org::apache::http::impl::cookie::BestMatchSpecFactory::_class = nullptr;
jclass org::apache::http::impl::cookie::BasicExpiresHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::AbstractCookieAttributeHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::BasicPathHandler::_class = nullptr;
jclass org::apache::http::impl::cookie::RFC2109Spec::_class = nullptr;
jclass org::apache::http::impl::cookie::DateUtils::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BasicClientCookie::BasicClientCookie(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::cookie::ClientCookie((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0), ::org::apache::http::cookie::SetCookie((jobject)0) {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie::getName() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie::getValue() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::BasicClientCookie::setValue(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie::getComment() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::BasicClientCookie::setComment(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComment", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie::getCommentURL() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCommentURL", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Date org::apache::http::impl::cookie::BasicClientCookie::getExpiryDate() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpiryDate", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::BasicClientCookie::setExpiryDate(const ::java::util::Date& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExpiryDate", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::cookie::BasicClientCookie::isPersistent() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPersistent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie::getDomain() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomain", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::BasicClientCookie::setDomain(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDomain", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie::getPath() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::BasicClientCookie::setPath(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::cookie::BasicClientCookie::isSecure() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::impl::cookie::BasicClientCookie::setSecure(bool arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSecure", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int32_t> org::apache::http::impl::cookie::BasicClientCookie::getPorts() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPorts", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t org::apache::http::impl::cookie::BasicClientCookie::getVersion() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::cookie::BasicClientCookie::setVersion(int32_t arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVersion", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::cookie::BasicClientCookie::isExpired(const ::java::util::Date& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "isExpired", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::impl::cookie::BasicClientCookie::setAttribute(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie::getAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::impl::cookie::BasicClientCookie::containsAttribute(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAttribute", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object org::apache::http::impl::cookie::BasicClientCookie::clone() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie::toString() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie::_class) ::org::apache::http::impl::cookie::BasicClientCookie::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2109DomainHandler::RFC2109DomainHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2109DomainHandler::_class) ::org::apache::http::impl::cookie::RFC2109DomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109DomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::RFC2109DomainHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2109DomainHandler::_class) ::org::apache::http::impl::cookie::RFC2109DomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109DomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::RFC2109DomainHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2109DomainHandler::_class) ::org::apache::http::impl::cookie::RFC2109DomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109DomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::RFC2109DomainHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2109DomainHandler::_class) ::org::apache::http::impl::cookie::RFC2109DomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109DomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::RFC2965DiscardAttributeHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DiscardAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DiscardAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DiscardAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DiscardAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DiscardAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BrowserCompatSpec::BrowserCompatSpec(const std::vector< ::java::lang::String>& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0) {
    if (!::org::apache::http::impl::cookie::BrowserCompatSpec::_class) ::org::apache::http::impl::cookie::BrowserCompatSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BrowserCompatSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BrowserCompatSpec::BrowserCompatSpec() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0) {
    if (!::org::apache::http::impl::cookie::BrowserCompatSpec::_class) ::org::apache::http::impl::cookie::BrowserCompatSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BrowserCompatSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::List org::apache::http::impl::cookie::BrowserCompatSpec::parse(const ::org::apache::http::Header& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BrowserCompatSpec::_class) ::org::apache::http::impl::cookie::BrowserCompatSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BrowserCompatSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List org::apache::http::impl::cookie::BrowserCompatSpec::formatCookies(const ::java::util::List& arg0) const {
    if (!::org::apache::http::impl::cookie::BrowserCompatSpec::_class) ::org::apache::http::impl::cookie::BrowserCompatSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BrowserCompatSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatCookies", "(Ljava/util/List;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::cookie::BrowserCompatSpec::getVersion() const {
    if (!::org::apache::http::impl::cookie::BrowserCompatSpec::_class) ::org::apache::http::impl::cookie::BrowserCompatSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BrowserCompatSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::impl::cookie::BrowserCompatSpec::getVersionHeader() const {
    if (!::org::apache::http::impl::cookie::BrowserCompatSpec::_class) ::org::apache::http::impl::cookie::BrowserCompatSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BrowserCompatSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersionHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BasicSecureHandler::BasicSecureHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::BasicSecureHandler::_class) ::org::apache::http::impl::cookie::BasicSecureHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicSecureHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::BasicSecureHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicSecureHandler::_class) ::org::apache::http::impl::cookie::BasicSecureHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicSecureHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::BasicSecureHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicSecureHandler::_class) ::org::apache::http::impl::cookie::BasicSecureHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicSecureHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::NetscapeDraftHeaderParser::NetscapeDraftHeaderParser() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::cookie::NetscapeDraftHeaderParser::_class) ::org::apache::http::impl::cookie::NetscapeDraftHeaderParser::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftHeaderParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::HeaderElement org::apache::http::impl::cookie::NetscapeDraftHeaderParser::parseHeader(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::impl::cookie::NetscapeDraftHeaderParser::_class) ::org::apache::http::impl::cookie::NetscapeDraftHeaderParser::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftHeaderParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseHeader", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/HeaderElement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HeaderElement _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BasicCommentHandler::BasicCommentHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::BasicCommentHandler::_class) ::org::apache::http::impl::cookie::BasicCommentHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicCommentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::BasicCommentHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicCommentHandler::_class) ::org::apache::http::impl::cookie::BasicCommentHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicCommentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::RFC2965VersionAttributeHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965VersionAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965VersionAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965VersionAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965VersionAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2965Spec::RFC2965Spec() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0), ::org::apache::http::impl::cookie::RFC2109Spec((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2965Spec::_class) ::org::apache::http::impl::cookie::RFC2965Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2965Spec::RFC2965Spec(const std::vector< ::java::lang::String>& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0), ::org::apache::http::impl::cookie::RFC2109Spec((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2965Spec::_class) ::org::apache::http::impl::cookie::RFC2965Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;Z)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::List org::apache::http::impl::cookie::RFC2965Spec::parse(const ::org::apache::http::Header& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965Spec::_class) ::org::apache::http::impl::cookie::RFC2965Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::RFC2965Spec::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965Spec::_class) ::org::apache::http::impl::cookie::RFC2965Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::RFC2965Spec::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965Spec::_class) ::org::apache::http::impl::cookie::RFC2965Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t org::apache::http::impl::cookie::RFC2965Spec::getVersion() const {
    if (!::org::apache::http::impl::cookie::RFC2965Spec::_class) ::org::apache::http::impl::cookie::RFC2965Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::impl::cookie::RFC2965Spec::getVersionHeader() const {
    if (!::org::apache::http::impl::cookie::RFC2965Spec::_class) ::org::apache::http::impl::cookie::RFC2965Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersionHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BrowserCompatSpecFactory::BrowserCompatSpecFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {
    if (!::org::apache::http::impl::cookie::BrowserCompatSpecFactory::_class) ::org::apache::http::impl::cookie::BrowserCompatSpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/BrowserCompatSpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::cookie::CookieSpec org::apache::http::impl::cookie::BrowserCompatSpecFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::impl::cookie::BrowserCompatSpecFactory::_class) ::org::apache::http::impl::cookie::BrowserCompatSpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/BrowserCompatSpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::cookie::CookieSpec _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::NetscapeDomainHandler::NetscapeDomainHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::BasicDomainHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::NetscapeDomainHandler::_class) ::org::apache::http::impl::cookie::NetscapeDomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::NetscapeDomainHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::NetscapeDomainHandler::_class) ::org::apache::http::impl::cookie::NetscapeDomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::NetscapeDomainHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::NetscapeDomainHandler::_class) ::org::apache::http::impl::cookie::NetscapeDomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::NetscapeDraftSpecFactory::NetscapeDraftSpecFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {
    if (!::org::apache::http::impl::cookie::NetscapeDraftSpecFactory::_class) ::org::apache::http::impl::cookie::NetscapeDraftSpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftSpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::cookie::CookieSpec org::apache::http::impl::cookie::NetscapeDraftSpecFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::impl::cookie::NetscapeDraftSpecFactory::_class) ::org::apache::http::impl::cookie::NetscapeDraftSpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftSpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::cookie::CookieSpec _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::NetscapeDraftSpec::NetscapeDraftSpec(const std::vector< ::java::lang::String>& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0) {
    if (!::org::apache::http::impl::cookie::NetscapeDraftSpec::_class) ::org::apache::http::impl::cookie::NetscapeDraftSpec::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::NetscapeDraftSpec::NetscapeDraftSpec() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0) {
    if (!::org::apache::http::impl::cookie::NetscapeDraftSpec::_class) ::org::apache::http::impl::cookie::NetscapeDraftSpec::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::List org::apache::http::impl::cookie::NetscapeDraftSpec::parse(const ::org::apache::http::Header& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::NetscapeDraftSpec::_class) ::org::apache::http::impl::cookie::NetscapeDraftSpec::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List org::apache::http::impl::cookie::NetscapeDraftSpec::formatCookies(const ::java::util::List& arg0) const {
    if (!::org::apache::http::impl::cookie::NetscapeDraftSpec::_class) ::org::apache::http::impl::cookie::NetscapeDraftSpec::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatCookies", "(Ljava/util/List;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::cookie::NetscapeDraftSpec::getVersion() const {
    if (!::org::apache::http::impl::cookie::NetscapeDraftSpec::_class) ::org::apache::http::impl::cookie::NetscapeDraftSpec::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::impl::cookie::NetscapeDraftSpec::getVersionHeader() const {
    if (!::org::apache::http::impl::cookie::NetscapeDraftSpec::_class) ::org::apache::http::impl::cookie::NetscapeDraftSpec::_class = java::fetch_class("org/apache/http/impl/cookie/NetscapeDraftSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersionHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BestMatchSpec::BestMatchSpec(const std::vector< ::java::lang::String>& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0) {
    if (!::org::apache::http::impl::cookie::BestMatchSpec::_class) ::org::apache::http::impl::cookie::BestMatchSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;Z)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BestMatchSpec::BestMatchSpec() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0) {
    if (!::org::apache::http::impl::cookie::BestMatchSpec::_class) ::org::apache::http::impl::cookie::BestMatchSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::List org::apache::http::impl::cookie::BestMatchSpec::parse(const ::org::apache::http::Header& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BestMatchSpec::_class) ::org::apache::http::impl::cookie::BestMatchSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::BestMatchSpec::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BestMatchSpec::_class) ::org::apache::http::impl::cookie::BestMatchSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::BestMatchSpec::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BestMatchSpec::_class) ::org::apache::http::impl::cookie::BestMatchSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::List org::apache::http::impl::cookie::BestMatchSpec::formatCookies(const ::java::util::List& arg0) const {
    if (!::org::apache::http::impl::cookie::BestMatchSpec::_class) ::org::apache::http::impl::cookie::BestMatchSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatCookies", "(Ljava/util/List;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::cookie::BestMatchSpec::getVersion() const {
    if (!::org::apache::http::impl::cookie::BestMatchSpec::_class) ::org::apache::http::impl::cookie::BestMatchSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::impl::cookie::BestMatchSpec::getVersionHeader() const {
    if (!::org::apache::http::impl::cookie::BestMatchSpec::_class) ::org::apache::http::impl::cookie::BestMatchSpec::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersionHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::RFC2965CommentUrlAttributeHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965CommentUrlAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965CommentUrlAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965CommentUrlAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965CommentUrlAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::CookieSpecBase::CookieSpecBase() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0) {
    if (!::org::apache::http::impl::cookie::CookieSpecBase::_class) ::org::apache::http::impl::cookie::CookieSpecBase::_class = java::fetch_class("org/apache/http/impl/cookie/CookieSpecBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::CookieSpecBase::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::CookieSpecBase::_class) ::org::apache::http::impl::cookie::CookieSpecBase::_class = java::fetch_class("org/apache/http/impl/cookie/CookieSpecBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::CookieSpecBase::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::CookieSpecBase::_class) ::org::apache::http::impl::cookie::CookieSpecBase::_class = java::fetch_class("org/apache/http/impl/cookie/CookieSpecBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2965SpecFactory::RFC2965SpecFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2965SpecFactory::_class) ::org::apache::http::impl::cookie::RFC2965SpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965SpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::cookie::CookieSpec org::apache::http::impl::cookie::RFC2965SpecFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::impl::cookie::RFC2965SpecFactory::_class) ::org::apache::http::impl::cookie::RFC2965SpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965SpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::cookie::CookieSpec _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BasicDomainHandler::BasicDomainHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::BasicDomainHandler::_class) ::org::apache::http::impl::cookie::BasicDomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicDomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::BasicDomainHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicDomainHandler::_class) ::org::apache::http::impl::cookie::BasicDomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicDomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::BasicDomainHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicDomainHandler::_class) ::org::apache::http::impl::cookie::BasicDomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicDomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::BasicDomainHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicDomainHandler::_class) ::org::apache::http::impl::cookie::BasicDomainHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicDomainHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2109SpecFactory::RFC2109SpecFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2109SpecFactory::_class) ::org::apache::http::impl::cookie::RFC2109SpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109SpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::cookie::CookieSpec org::apache::http::impl::cookie::RFC2109SpecFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::impl::cookie::RFC2109SpecFactory::_class) ::org::apache::http::impl::cookie::RFC2109SpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109SpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::cookie::CookieSpec _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::DateParseException::DateParseException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::impl::cookie::DateParseException::_class) ::org::apache::http::impl::cookie::DateParseException::_class = java::fetch_class("org/apache/http/impl/cookie/DateParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::DateParseException::DateParseException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::impl::cookie::DateParseException::_class) ::org::apache::http::impl::cookie::DateParseException::_class = java::fetch_class("org/apache/http/impl/cookie/DateParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2109VersionHandler::RFC2109VersionHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2109VersionHandler::_class) ::org::apache::http::impl::cookie::RFC2109VersionHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109VersionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::RFC2109VersionHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2109VersionHandler::_class) ::org::apache::http::impl::cookie::RFC2109VersionHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109VersionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::RFC2109VersionHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2109VersionHandler::_class) ::org::apache::http::impl::cookie::RFC2109VersionHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109VersionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::RFC2965PortAttributeHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965PortAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::RFC2965PortAttributeHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965PortAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::RFC2965PortAttributeHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965PortAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::RFC2965PortAttributeHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965PortAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965PortAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BasicMaxAgeHandler::BasicMaxAgeHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::BasicMaxAgeHandler::_class) ::org::apache::http::impl::cookie::BasicMaxAgeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicMaxAgeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::BasicMaxAgeHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicMaxAgeHandler::_class) ::org::apache::http::impl::cookie::BasicMaxAgeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicMaxAgeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BasicClientCookie2::BasicClientCookie2(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::cookie::ClientCookie((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0), ::org::apache::http::cookie::SetCookie((jobject)0), ::org::apache::http::cookie::SetCookie2((jobject)0), ::org::apache::http::impl::cookie::BasicClientCookie((jobject)0) {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< int32_t> org::apache::http::impl::cookie::BasicClientCookie2::getPorts() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPorts", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

void org::apache::http::impl::cookie::BasicClientCookie2::setPorts(const std::vector< int32_t>& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPorts", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::impl::cookie::BasicClientCookie2::getCommentURL() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCommentURL", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::BasicClientCookie2::setCommentURL(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCommentURL", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::cookie::BasicClientCookie2::setDiscard(bool arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDiscard", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::cookie::BasicClientCookie2::isPersistent() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPersistent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::impl::cookie::BasicClientCookie2::isExpired(const ::java::util::Date& arg0) const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isExpired", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object org::apache::http::impl::cookie::BasicClientCookie2::clone() const {
    if (!::org::apache::http::impl::cookie::BasicClientCookie2::_class) ::org::apache::http::impl::cookie::BasicClientCookie2::_class = java::fetch_class("org/apache/http/impl/cookie/BasicClientCookie2");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::AbstractCookieSpec::AbstractCookieSpec() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0) {
    if (!::org::apache::http::impl::cookie::AbstractCookieSpec::_class) ::org::apache::http::impl::cookie::AbstractCookieSpec::_class = java::fetch_class("org/apache/http/impl/cookie/AbstractCookieSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::AbstractCookieSpec::registerAttribHandler(const ::java::lang::String& arg0, const ::org::apache::http::cookie::CookieAttributeHandler& arg1) const {
    if (!::org::apache::http::impl::cookie::AbstractCookieSpec::_class) ::org::apache::http::impl::cookie::AbstractCookieSpec::_class = java::fetch_class("org/apache/http/impl/cookie/AbstractCookieSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerAttribHandler", "(Ljava/lang/String;Lorg/apache/http/cookie/CookieAttributeHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BestMatchSpecFactory::BestMatchSpecFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {
    if (!::org::apache::http::impl::cookie::BestMatchSpecFactory::_class) ::org::apache::http::impl::cookie::BestMatchSpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::cookie::CookieSpec org::apache::http::impl::cookie::BestMatchSpecFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::impl::cookie::BestMatchSpecFactory::_class) ::org::apache::http::impl::cookie::BestMatchSpecFactory::_class = java::fetch_class("org/apache/http/impl/cookie/BestMatchSpecFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::cookie::CookieSpec _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BasicExpiresHandler::BasicExpiresHandler(const std::vector< ::java::lang::String>& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::BasicExpiresHandler::_class) ::org::apache::http::impl::cookie::BasicExpiresHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicExpiresHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::BasicExpiresHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicExpiresHandler::_class) ::org::apache::http::impl::cookie::BasicExpiresHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicExpiresHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::RFC2965DomainAttributeHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DomainAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DomainAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::domainMatch(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DomainAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "domainMatch", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DomainAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class) ::org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2965DomainAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::AbstractCookieAttributeHandler::AbstractCookieAttributeHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::AbstractCookieAttributeHandler::_class) ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/AbstractCookieAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::AbstractCookieAttributeHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::AbstractCookieAttributeHandler::_class) ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/AbstractCookieAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::AbstractCookieAttributeHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::AbstractCookieAttributeHandler::_class) ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler::_class = java::fetch_class("org/apache/http/impl/cookie/AbstractCookieAttributeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::BasicPathHandler::BasicPathHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {
    if (!::org::apache::http::impl::cookie::BasicPathHandler::_class) ::org::apache::http::impl::cookie::BasicPathHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicPathHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::cookie::BasicPathHandler::parse(const ::org::apache::http::cookie::SetCookie& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicPathHandler::_class) ::org::apache::http::impl::cookie::BasicPathHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicPathHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::cookie::BasicPathHandler::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicPathHandler::_class) ::org::apache::http::impl::cookie::BasicPathHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicPathHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::impl::cookie::BasicPathHandler::match(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::BasicPathHandler::_class) ::org::apache::http::impl::cookie::BasicPathHandler::_class = java::fetch_class("org/apache/http/impl/cookie/BasicPathHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2109Spec::RFC2109Spec(const std::vector< ::java::lang::String>& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2109Spec::_class) ::org::apache::http::impl::cookie::RFC2109Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;Z)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::cookie::RFC2109Spec::RFC2109Spec() : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0) {
    if (!::org::apache::http::impl::cookie::RFC2109Spec::_class) ::org::apache::http::impl::cookie::RFC2109Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::List org::apache::http::impl::cookie::RFC2109Spec::parse(const ::org::apache::http::Header& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2109Spec::_class) ::org::apache::http::impl::cookie::RFC2109Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

void org::apache::http::impl::cookie::RFC2109Spec::validate(const ::org::apache::http::cookie::Cookie& arg0, const ::org::apache::http::cookie::CookieOrigin& arg1) const {
    if (!::org::apache::http::impl::cookie::RFC2109Spec::_class) ::org::apache::http::impl::cookie::RFC2109Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::List org::apache::http::impl::cookie::RFC2109Spec::formatCookies(const ::java::util::List& arg0) const {
    if (!::org::apache::http::impl::cookie::RFC2109Spec::_class) ::org::apache::http::impl::cookie::RFC2109Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatCookies", "(Ljava/util/List;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::cookie::RFC2109Spec::getVersion() const {
    if (!::org::apache::http::impl::cookie::RFC2109Spec::_class) ::org::apache::http::impl::cookie::RFC2109Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::impl::cookie::RFC2109Spec::getVersionHeader() const {
    if (!::org::apache::http::impl::cookie::RFC2109Spec::_class) ::org::apache::http::impl::cookie::RFC2109Spec::_class = java::fetch_class("org/apache/http/impl/cookie/RFC2109Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersionHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::java::util::Date org::apache::http::impl::cookie::DateUtils::parseDate(const ::java::lang::String& arg0){
    if (!::org::apache::http::impl::cookie::DateUtils::_class) ::org::apache::http::impl::cookie::DateUtils::_class = java::fetch_class("org/apache/http/impl/cookie/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseDate", "(Ljava/lang/String;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::util::Date org::apache::http::impl::cookie::DateUtils::parseDate(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1){
    if (!::org::apache::http::impl::cookie::DateUtils::_class) ::org::apache::http::impl::cookie::DateUtils::_class = java::fetch_class("org/apache/http/impl/cookie/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseDate", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::util::Date org::apache::http::impl::cookie::DateUtils::parseDate(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::util::Date& arg2){
    if (!::org::apache::http::impl::cookie::DateUtils::_class) ::org::apache::http::impl::cookie::DateUtils::_class = java::fetch_class("org/apache/http/impl/cookie/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseDate", "(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Date;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::cookie::DateUtils::formatDate(const ::java::util::Date& arg0){
    if (!::org::apache::http::impl::cookie::DateUtils::_class) ::org::apache::http::impl::cookie::DateUtils::_class = java::fetch_class("org/apache/http/impl/cookie/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDate", "(Ljava/util/Date;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::cookie::DateUtils::formatDate(const ::java::util::Date& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::impl::cookie::DateUtils::_class) ::org::apache::http::impl::cookie::DateUtils::_class = java::fetch_class("org/apache/http/impl/cookie/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDate", "(Ljava/util/Date;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

