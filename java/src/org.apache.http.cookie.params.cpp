#include "java-core.hpp"
#include <memory>
#include "java.util.Collection.hpp"
#include "org.apache.http.cookie.params.CookieSpecPNames.hpp"
#include "org.apache.http.cookie.params.CookieSpecParamBean.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::cookie::params::CookieSpecParamBean::_class = nullptr;
jclass org::apache::http::cookie::params::CookieSpecPNames::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::cookie::params::CookieSpecParamBean::CookieSpecParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {
    if (!::org::apache::http::cookie::params::CookieSpecParamBean::_class) ::org::apache::http::cookie::params::CookieSpecParamBean::_class = java::fetch_class("org/apache/http/cookie/params/CookieSpecParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::cookie::params::CookieSpecParamBean::setDatePatterns(const ::java::util::Collection& arg0) const {
    if (!::org::apache::http::cookie::params::CookieSpecParamBean::_class) ::org::apache::http::cookie::params::CookieSpecParamBean::_class = java::fetch_class("org/apache/http/cookie/params/CookieSpecParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDatePatterns", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::cookie::params::CookieSpecParamBean::setSingleHeader(bool arg0) const {
    if (!::org::apache::http::cookie::params::CookieSpecParamBean::_class) ::org::apache::http::cookie::params::CookieSpecParamBean::_class = java::fetch_class("org/apache/http/cookie/params/CookieSpecParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleHeader", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

