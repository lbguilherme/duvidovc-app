#include "java-core.hpp"
#include <memory>
#include "java.net.InetAddress.hpp"
#include "java.util.Map.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.conn.params.ConnConnectionPNames.hpp"
#include "org.apache.http.conn.params.ConnConnectionParamBean.hpp"
#include "org.apache.http.conn.params.ConnManagerPNames.hpp"
#include "org.apache.http.conn.params.ConnManagerParamBean.hpp"
#include "org.apache.http.conn.params.ConnManagerParams.hpp"
#include "org.apache.http.conn.params.ConnPerRoute.hpp"
#include "org.apache.http.conn.params.ConnPerRouteBean.hpp"
#include "org.apache.http.conn.params.ConnRoutePNames.hpp"
#include "org.apache.http.conn.params.ConnRouteParamBean.hpp"
#include "org.apache.http.conn.params.ConnRouteParams.hpp"
#include "org.apache.http.conn.routing.HttpRoute.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::conn::params::ConnPerRoute::_class = nullptr;
jclass org::apache::http::conn::params::ConnPerRouteBean::_class = nullptr;
jclass org::apache::http::conn::params::ConnRouteParamBean::_class = nullptr;
jclass org::apache::http::conn::params::ConnManagerParams::_class = nullptr;
jclass org::apache::http::conn::params::ConnConnectionPNames::_class = nullptr;
jclass org::apache::http::conn::params::ConnRouteParams::_class = nullptr;
jclass org::apache::http::conn::params::ConnRoutePNames::_class = nullptr;
jclass org::apache::http::conn::params::ConnConnectionParamBean::_class = nullptr;
jclass org::apache::http::conn::params::ConnManagerParamBean::_class = nullptr;
jclass org::apache::http::conn::params::ConnManagerPNames::_class = nullptr;

int32_t org::apache::http::conn::params::ConnPerRoute::getMaxForRoute(const ::org::apache::http::conn::routing::HttpRoute& arg0) const {
    if (!::org::apache::http::conn::params::ConnPerRoute::_class) ::org::apache::http::conn::params::ConnPerRoute::_class = java::fetch_class("org/apache/http/conn/params/ConnPerRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxForRoute", "(Lorg/apache/http/conn/routing/HttpRoute;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::params::ConnPerRouteBean::ConnPerRouteBean(int32_t arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnPerRoute((jobject)0) {
    if (!::org::apache::http::conn::params::ConnPerRouteBean::_class) ::org::apache::http::conn::params::ConnPerRouteBean::_class = java::fetch_class("org/apache/http/conn/params/ConnPerRouteBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::params::ConnPerRouteBean::ConnPerRouteBean() : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnPerRoute((jobject)0) {
    if (!::org::apache::http::conn::params::ConnPerRouteBean::_class) ::org::apache::http::conn::params::ConnPerRouteBean::_class = java::fetch_class("org/apache/http/conn/params/ConnPerRouteBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::conn::params::ConnPerRouteBean::getDefaultMax() const {
    if (!::org::apache::http::conn::params::ConnPerRouteBean::_class) ::org::apache::http::conn::params::ConnPerRouteBean::_class = java::fetch_class("org/apache/http/conn/params/ConnPerRouteBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultMax", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::conn::params::ConnPerRouteBean::setDefaultMaxPerRoute(int32_t arg0) const {
    if (!::org::apache::http::conn::params::ConnPerRouteBean::_class) ::org::apache::http::conn::params::ConnPerRouteBean::_class = java::fetch_class("org/apache/http/conn/params/ConnPerRouteBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultMaxPerRoute", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::conn::params::ConnPerRouteBean::setMaxForRoute(const ::org::apache::http::conn::routing::HttpRoute& arg0, int32_t arg1) const {
    if (!::org::apache::http::conn::params::ConnPerRouteBean::_class) ::org::apache::http::conn::params::ConnPerRouteBean::_class = java::fetch_class("org/apache/http/conn/params/ConnPerRouteBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxForRoute", "(Lorg/apache/http/conn/routing/HttpRoute;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t org::apache::http::conn::params::ConnPerRouteBean::getMaxForRoute(const ::org::apache::http::conn::routing::HttpRoute& arg0) const {
    if (!::org::apache::http::conn::params::ConnPerRouteBean::_class) ::org::apache::http::conn::params::ConnPerRouteBean::_class = java::fetch_class("org/apache/http/conn/params/ConnPerRouteBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxForRoute", "(Lorg/apache/http/conn/routing/HttpRoute;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void org::apache::http::conn::params::ConnPerRouteBean::setMaxForRoutes(const ::java::util::Map& arg0) const {
    if (!::org::apache::http::conn::params::ConnPerRouteBean::_class) ::org::apache::http::conn::params::ConnPerRouteBean::_class = java::fetch_class("org/apache/http/conn/params/ConnPerRouteBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxForRoutes", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::params::ConnRouteParamBean::ConnRouteParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {
    if (!::org::apache::http::conn::params::ConnRouteParamBean::_class) ::org::apache::http::conn::params::ConnRouteParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::conn::params::ConnRouteParamBean::setDefaultProxy(const ::org::apache::http::HttpHost& arg0) const {
    if (!::org::apache::http::conn::params::ConnRouteParamBean::_class) ::org::apache::http::conn::params::ConnRouteParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultProxy", "(Lorg/apache/http/HttpHost;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::conn::params::ConnRouteParamBean::setLocalAddress(const ::java::net::InetAddress& arg0) const {
    if (!::org::apache::http::conn::params::ConnRouteParamBean::_class) ::org::apache::http::conn::params::ConnRouteParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocalAddress", "(Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::conn::params::ConnRouteParamBean::setForcedRoute(const ::org::apache::http::conn::routing::HttpRoute& arg0) const {
    if (!::org::apache::http::conn::params::ConnRouteParamBean::_class) ::org::apache::http::conn::params::ConnRouteParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setForcedRoute", "(Lorg/apache/http/conn/routing/HttpRoute;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::params::ConnManagerParams::ConnManagerParams() : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnManagerPNames((jobject)0) {
    if (!::org::apache::http::conn::params::ConnManagerParams::_class) ::org::apache::http::conn::params::ConnManagerParams::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::conn::params::ConnManagerParams::getTimeout(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::conn::params::ConnManagerParams::_class) ::org::apache::http::conn::params::ConnManagerParams::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTimeout", "(Lorg/apache/http/params/HttpParams;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

void org::apache::http::conn::params::ConnManagerParams::setTimeout(const ::org::apache::http::params::HttpParams& arg0, int64_t arg1){
    if (!::org::apache::http::conn::params::ConnManagerParams::_class) ::org::apache::http::conn::params::ConnManagerParams::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTimeout", "(Lorg/apache/http/params/HttpParams;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void org::apache::http::conn::params::ConnManagerParams::setMaxConnectionsPerRoute(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::conn::params::ConnPerRoute& arg1){
    if (!::org::apache::http::conn::params::ConnManagerParams::_class) ::org::apache::http::conn::params::ConnManagerParams::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setMaxConnectionsPerRoute", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/conn/params/ConnPerRoute;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::org::apache::http::conn::params::ConnPerRoute org::apache::http::conn::params::ConnManagerParams::getMaxConnectionsPerRoute(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::conn::params::ConnManagerParams::_class) ::org::apache::http::conn::params::ConnManagerParams::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxConnectionsPerRoute", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/conn/params/ConnPerRoute;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::apache::http::conn::params::ConnPerRoute _ret(ret);
    return _ret;
}

void org::apache::http::conn::params::ConnManagerParams::setMaxTotalConnections(const ::org::apache::http::params::HttpParams& arg0, int32_t arg1){
    if (!::org::apache::http::conn::params::ConnManagerParams::_class) ::org::apache::http::conn::params::ConnManagerParams::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setMaxTotalConnections", "(Lorg/apache/http/params/HttpParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t org::apache::http::conn::params::ConnManagerParams::getMaxTotalConnections(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::conn::params::ConnManagerParams::_class) ::org::apache::http::conn::params::ConnManagerParams::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxTotalConnections", "(Lorg/apache/http/params/HttpParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::org::apache::http::HttpHost org::apache::http::conn::params::ConnRouteParams::getDefaultProxy(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::conn::params::ConnRouteParams::_class) ::org::apache::http::conn::params::ConnRouteParams::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultProxy", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/HttpHost;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

void org::apache::http::conn::params::ConnRouteParams::setDefaultProxy(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::HttpHost& arg1){
    if (!::org::apache::http::conn::params::ConnRouteParams::_class) ::org::apache::http::conn::params::ConnRouteParams::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultProxy", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/HttpHost;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::org::apache::http::conn::routing::HttpRoute org::apache::http::conn::params::ConnRouteParams::getForcedRoute(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::conn::params::ConnRouteParams::_class) ::org::apache::http::conn::params::ConnRouteParams::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getForcedRoute", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/conn/routing/HttpRoute;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

void org::apache::http::conn::params::ConnRouteParams::setForcedRoute(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::conn::routing::HttpRoute& arg1){
    if (!::org::apache::http::conn::params::ConnRouteParams::_class) ::org::apache::http::conn::params::ConnRouteParams::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setForcedRoute", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/conn/routing/HttpRoute;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::net::InetAddress org::apache::http::conn::params::ConnRouteParams::getLocalAddress(const ::org::apache::http::params::HttpParams& arg0){
    if (!::org::apache::http::conn::params::ConnRouteParams::_class) ::org::apache::http::conn::params::ConnRouteParams::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLocalAddress", "(Lorg/apache/http/params/HttpParams;)Ljava/net/InetAddress;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

void org::apache::http::conn::params::ConnRouteParams::setLocalAddress(const ::org::apache::http::params::HttpParams& arg0, const ::java::net::InetAddress& arg1){
    if (!::org::apache::http::conn::params::ConnRouteParams::_class) ::org::apache::http::conn::params::ConnRouteParams::_class = java::fetch_class("org/apache/http/conn/params/ConnRouteParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLocalAddress", "(Lorg/apache/http/params/HttpParams;Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::params::ConnConnectionParamBean::ConnConnectionParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {
    if (!::org::apache::http::conn::params::ConnConnectionParamBean::_class) ::org::apache::http::conn::params::ConnConnectionParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::conn::params::ConnConnectionParamBean::setMaxStatusLineGarbage(int32_t arg0) const {
    if (!::org::apache::http::conn::params::ConnConnectionParamBean::_class) ::org::apache::http::conn::params::ConnConnectionParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnConnectionParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxStatusLineGarbage", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::params::ConnManagerParamBean::ConnManagerParamBean(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {
    if (!::org::apache::http::conn::params::ConnManagerParamBean::_class) ::org::apache::http::conn::params::ConnManagerParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::conn::params::ConnManagerParamBean::setTimeout(int64_t arg0) const {
    if (!::org::apache::http::conn::params::ConnManagerParamBean::_class) ::org::apache::http::conn::params::ConnManagerParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeout", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::conn::params::ConnManagerParamBean::setMaxTotalConnections(int32_t arg0) const {
    if (!::org::apache::http::conn::params::ConnManagerParamBean::_class) ::org::apache::http::conn::params::ConnManagerParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxTotalConnections", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::conn::params::ConnManagerParamBean::setConnectionsPerRoute(const ::org::apache::http::conn::params::ConnPerRouteBean& arg0) const {
    if (!::org::apache::http::conn::params::ConnManagerParamBean::_class) ::org::apache::http::conn::params::ConnManagerParamBean::_class = java::fetch_class("org/apache/http/conn/params/ConnManagerParamBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConnectionsPerRoute", "(Lorg/apache/http/conn/params/ConnPerRouteBean;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

