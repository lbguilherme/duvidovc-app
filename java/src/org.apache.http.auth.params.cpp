#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "org.apache.http.auth.params.AuthPNames.hpp"
#include "org.apache.http.auth.params.AuthParamBean.hpp"
#include "org.apache.http.auth.params.AuthParams.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::auth::params::AuthParamBean::_class = nullptr;
jclass org::apache::http::auth::params::AuthParams::_class = nullptr;
jclass org::apache::http::auth::params::AuthPNames::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::params::AuthParamBean::AuthParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {
    if (!::org::apache::http::auth::params::AuthParamBean::_class) ::org::apache::http::auth::params::AuthParamBean::_class = java::fetch_class("org/apache/http/auth/params/AuthParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::auth::params::AuthParamBean::setCredentialCharset(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::auth::params::AuthParamBean::_class) ::org::apache::http::auth::params::AuthParamBean::_class = java::fetch_class("org/apache/http/auth/params/AuthParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCredentialCharset", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::auth::params::AuthParams::getCredentialCharset(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::auth::params::AuthParams::_class) ::org::apache::http::auth::params::AuthParams::_class = java::fetch_class("org/apache/http/auth/params/AuthParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCredentialCharset", "(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::auth::params::AuthParams::setCredentialCharset(const ::org::apache::http::params::HttpParams& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::auth::params::AuthParams::_class) ::org::apache::http::auth::params::AuthParams::_class = java::fetch_class("org/apache/http/auth/params/AuthParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCredentialCharset", "(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

