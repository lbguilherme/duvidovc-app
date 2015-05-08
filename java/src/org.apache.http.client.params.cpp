#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.util.Collection.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.client.params.AllClientPNames.hpp"
#include "org.apache.http.client.params.AuthPolicy.hpp"
#include "org.apache.http.client.params.ClientPNames.hpp"
#include "org.apache.http.client.params.ClientParamBean.hpp"
#include "org.apache.http.client.params.CookiePolicy.hpp"
#include "org.apache.http.client.params.HttpClientParams.hpp"
#include "org.apache.http.conn.ClientConnectionManagerFactory.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::client::params::ClientParamBean::_class = nullptr;
jclass org::apache::http::client::params::HttpClientParams::_class = nullptr;
jclass org::apache::http::client::params::ClientPNames::_class = nullptr;
jclass org::apache::http::client::params::AuthPolicy::_class = nullptr;
jclass org::apache::http::client::params::CookiePolicy::_class = nullptr;
jclass org::apache::http::client::params::AllClientPNames::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::params::ClientParamBean::ClientParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::client::params::ClientParamBean::setConnectionManagerFactoryClassName(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConnectionManagerFactoryClassName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setConnectionManagerFactory(const ::org::apache::http::conn::ClientConnectionManagerFactory& arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConnectionManagerFactory", "(Lorg/apache/http/conn/ClientConnectionManagerFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setHandleRedirects(bool arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHandleRedirects", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setRejectRelativeRedirect(bool arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRejectRelativeRedirect", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setMaxRedirects(int32_t arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxRedirects", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setAllowCircularRedirects(bool arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowCircularRedirects", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setHandleAuthentication(bool arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHandleAuthentication", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setCookiePolicy(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCookiePolicy", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setVirtualHost(const ::org::apache::http::HttpHost& arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVirtualHost", "(Lorg/apache/http/HttpHost;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setDefaultHeaders(const ::java::util::Collection& arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultHeaders", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::params::ClientParamBean::setDefaultHost(const ::org::apache::http::HttpHost& arg0) const {
    if (!::org::apache::http::client::params::ClientParamBean::_class) ::org::apache::http::client::params::ClientParamBean::_class = java::fetch_class("org/apache/http/client/params/ClientParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultHost", "(Lorg/apache/http/HttpHost;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::client::params::HttpClientParams::isRedirecting(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::client::params::HttpClientParams::_class) ::org::apache::http::client::params::HttpClientParams::_class = java::fetch_class("org/apache/http/client/params/HttpClientParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isRedirecting", "(Lorg/apache/http/params/HttpParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void org::apache::http::client::params::HttpClientParams::setRedirecting(const ::org::apache::http::params::HttpParams& arg0, bool arg1){
    if (!::org::apache::http::client::params::HttpClientParams::_class) ::org::apache::http::client::params::HttpClientParams::_class = java::fetch_class("org/apache/http/client/params/HttpClientParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setRedirecting", "(Lorg/apache/http/params/HttpParams;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool org::apache::http::client::params::HttpClientParams::isAuthenticating(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::client::params::HttpClientParams::_class) ::org::apache::http::client::params::HttpClientParams::_class = java::fetch_class("org/apache/http/client/params/HttpClientParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isAuthenticating", "(Lorg/apache/http/params/HttpParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void org::apache::http::client::params::HttpClientParams::setAuthenticating(const ::org::apache::http::params::HttpParams& arg0, bool arg1){
    if (!::org::apache::http::client::params::HttpClientParams::_class) ::org::apache::http::client::params::HttpClientParams::_class = java::fetch_class("org/apache/http/client/params/HttpClientParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAuthenticating", "(Lorg/apache/http/params/HttpParams;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::client::params::HttpClientParams::getCookiePolicy(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::client::params::HttpClientParams::_class) ::org::apache::http::client::params::HttpClientParams::_class = java::fetch_class("org/apache/http/client/params/HttpClientParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCookiePolicy", "(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::client::params::HttpClientParams::setCookiePolicy(const ::org::apache::http::params::HttpParams& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::client::params::HttpClientParams::_class) ::org::apache::http::client::params::HttpClientParams::_class = java::fetch_class("org/apache/http/client/params/HttpClientParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCookiePolicy", "(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

