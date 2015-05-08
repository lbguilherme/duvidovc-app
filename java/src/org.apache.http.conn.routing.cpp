#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.InetAddress.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.conn.routing.BasicRouteDirector.hpp"
#include "org.apache.http.conn.routing.HttpRoute.hpp"
#include "org.apache.http.conn.routing.HttpRouteDirector.hpp"
#include "org.apache.http.conn.routing.HttpRoutePlanner.hpp"
#include "org.apache.http.conn.routing.RouteInfo.hpp"
#include "org.apache.http.conn.routing.RouteTracker.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"

jclass org::apache::http::conn::routing::BasicRouteDirector::_class = nullptr;
jclass org::apache::http::conn::routing::HttpRoute::_class = nullptr;
jclass org::apache::http::conn::routing::RouteInfo::_class = nullptr;
jclass org::apache::http::conn::routing::HttpRoutePlanner::_class = nullptr;
jclass org::apache::http::conn::routing::RouteTracker::_class = nullptr;
jclass org::apache::http::conn::routing::HttpRouteDirector::_class = nullptr;
jclass org::apache::http::conn::routing::RouteInfo_TunnelType::_class = nullptr;
jclass org::apache::http::conn::routing::RouteInfo_LayerType::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::routing::BasicRouteDirector::BasicRouteDirector() : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRouteDirector((jobject)0) {
    if (!::org::apache::http::conn::routing::BasicRouteDirector::_class) ::org::apache::http::conn::routing::BasicRouteDirector::_class = java::fetch_class("org/apache/http/conn/routing/BasicRouteDirector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::conn::routing::BasicRouteDirector::nextStep(const ::org::apache::http::conn::routing::RouteInfo& arg0, const ::org::apache::http::conn::routing::RouteInfo& arg1) const {
    if (!::org::apache::http::conn::routing::BasicRouteDirector::_class) ::org::apache::http::conn::routing::BasicRouteDirector::_class = java::fetch_class("org/apache/http/conn/routing/BasicRouteDirector");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextStep", "(Lorg/apache/http/conn/routing/RouteInfo;Lorg/apache/http/conn/routing/RouteInfo;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::routing::HttpRoute::HttpRoute(const ::org::apache::http::HttpHost& arg0, const ::java::net::InetAddress& arg1, const std::vector< ::org::apache::http::HttpHost>& arg2, bool arg3, const ::org::apache::http::conn::routing::RouteInfo_TunnelType& arg4, const ::org::apache::http::conn::routing::RouteInfo_LayerType& arg5) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;[Lorg/apache/http/HttpHost;ZLorg/apache/http/conn/routing/RouteInfo$TunnelType;Lorg/apache/http/conn/routing/RouteInfo$LayerType;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::org::apache::http::HttpHost::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::org::apache::http::HttpHost& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    bool _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::routing::HttpRoute::HttpRoute(const ::org::apache::http::HttpHost& arg0, const ::java::net::InetAddress& arg1, const ::org::apache::http::HttpHost& arg2, bool arg3, const ::org::apache::http::conn::routing::RouteInfo_TunnelType& arg4, const ::org::apache::http::conn::routing::RouteInfo_LayerType& arg5) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Lorg/apache/http/HttpHost;ZLorg/apache/http/conn/routing/RouteInfo$TunnelType;Lorg/apache/http/conn/routing/RouteInfo$LayerType;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::routing::HttpRoute::HttpRoute(const ::org::apache::http::HttpHost& arg0, const ::java::net::InetAddress& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::routing::HttpRoute::HttpRoute(const ::org::apache::http::HttpHost& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpHost;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::routing::HttpRoute::HttpRoute(const ::org::apache::http::HttpHost& arg0, const ::java::net::InetAddress& arg1, const ::org::apache::http::HttpHost& arg2, bool arg3) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Lorg/apache/http/HttpHost;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpHost org::apache::http::conn::routing::HttpRoute::getTargetHost() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

::java::net::InetAddress org::apache::http::conn::routing::HttpRoute::getLocalAddress() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::conn::routing::HttpRoute::getHopCount() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHopCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpHost org::apache::http::conn::routing::HttpRoute::getHopTarget(int32_t arg0) const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHopTarget", "(I)Lorg/apache/http/HttpHost;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

::org::apache::http::HttpHost org::apache::http::conn::routing::HttpRoute::getProxyHost() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProxyHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

::org::apache::http::conn::routing::RouteInfo_TunnelType org::apache::http::conn::routing::HttpRoute::getTunnelType() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTunnelType", "()Lorg/apache/http/conn/routing/RouteInfo$TunnelType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::RouteInfo_TunnelType _ret(ret);
    return _ret;
}

bool org::apache::http::conn::routing::HttpRoute::isTunnelled() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTunnelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::conn::routing::RouteInfo_LayerType org::apache::http::conn::routing::HttpRoute::getLayerType() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayerType", "()Lorg/apache/http/conn/routing/RouteInfo$LayerType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::RouteInfo_LayerType _ret(ret);
    return _ret;
}

bool org::apache::http::conn::routing::HttpRoute::isLayered() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLayered", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::conn::routing::HttpRoute::isSecure() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::conn::routing::HttpRoute::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::conn::routing::HttpRoute::hashCode() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::apache::http::conn::routing::HttpRoute::toString() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::conn::routing::HttpRoute::clone() const {
    if (!::org::apache::http::conn::routing::HttpRoute::_class) ::org::apache::http::conn::routing::HttpRoute::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::apache::http::HttpHost org::apache::http::conn::routing::RouteInfo::getTargetHost() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

::java::net::InetAddress org::apache::http::conn::routing::RouteInfo::getLocalAddress() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::conn::routing::RouteInfo::getHopCount() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHopCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpHost org::apache::http::conn::routing::RouteInfo::getHopTarget(int32_t arg0) const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHopTarget", "(I)Lorg/apache/http/HttpHost;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

::org::apache::http::HttpHost org::apache::http::conn::routing::RouteInfo::getProxyHost() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProxyHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

::org::apache::http::conn::routing::RouteInfo_TunnelType org::apache::http::conn::routing::RouteInfo::getTunnelType() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTunnelType", "()Lorg/apache/http/conn/routing/RouteInfo$TunnelType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::RouteInfo_TunnelType _ret(ret);
    return _ret;
}

bool org::apache::http::conn::routing::RouteInfo::isTunnelled() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTunnelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::conn::routing::RouteInfo_LayerType org::apache::http::conn::routing::RouteInfo::getLayerType() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayerType", "()Lorg/apache/http/conn/routing/RouteInfo$LayerType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::RouteInfo_LayerType _ret(ret);
    return _ret;
}

bool org::apache::http::conn::routing::RouteInfo::isLayered() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLayered", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::conn::routing::RouteInfo::isSecure() const {
    if (!::org::apache::http::conn::routing::RouteInfo::_class) ::org::apache::http::conn::routing::RouteInfo::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::conn::routing::HttpRoute org::apache::http::conn::routing::HttpRoutePlanner::determineRoute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::conn::routing::HttpRoutePlanner::_class) ::org::apache::http::conn::routing::HttpRoutePlanner::_class = java::fetch_class("org/apache/http/conn/routing/HttpRoutePlanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "determineRoute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/conn/routing/HttpRoute;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::routing::RouteTracker::RouteTracker(const ::org::apache::http::HttpHost& arg0, const ::java::net::InetAddress& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::routing::RouteTracker::RouteTracker(const ::org::apache::http::conn::routing::HttpRoute& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/routing/HttpRoute;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::conn::routing::RouteTracker::connectTarget(bool arg0) const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "connectTarget", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::conn::routing::RouteTracker::connectProxy(const ::org::apache::http::HttpHost& arg0, bool arg1) const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "connectProxy", "(Lorg/apache/http/HttpHost;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::routing::RouteTracker::tunnelTarget(bool arg0) const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "tunnelTarget", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::conn::routing::RouteTracker::tunnelProxy(const ::org::apache::http::HttpHost& arg0, bool arg1) const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "tunnelProxy", "(Lorg/apache/http/HttpHost;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::routing::RouteTracker::layerProtocol(bool arg0) const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "layerProtocol", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::HttpHost org::apache::http::conn::routing::RouteTracker::getTargetHost() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

::java::net::InetAddress org::apache::http::conn::routing::RouteTracker::getLocalAddress() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::conn::routing::RouteTracker::getHopCount() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHopCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpHost org::apache::http::conn::routing::RouteTracker::getHopTarget(int32_t arg0) const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHopTarget", "(I)Lorg/apache/http/HttpHost;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

::org::apache::http::HttpHost org::apache::http::conn::routing::RouteTracker::getProxyHost() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProxyHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

bool org::apache::http::conn::routing::RouteTracker::isConnected() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::conn::routing::RouteInfo_TunnelType org::apache::http::conn::routing::RouteTracker::getTunnelType() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTunnelType", "()Lorg/apache/http/conn/routing/RouteInfo$TunnelType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::RouteInfo_TunnelType _ret(ret);
    return _ret;
}

bool org::apache::http::conn::routing::RouteTracker::isTunnelled() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTunnelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::conn::routing::RouteInfo_LayerType org::apache::http::conn::routing::RouteTracker::getLayerType() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayerType", "()Lorg/apache/http/conn/routing/RouteInfo$LayerType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::RouteInfo_LayerType _ret(ret);
    return _ret;
}

bool org::apache::http::conn::routing::RouteTracker::isLayered() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLayered", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::conn::routing::RouteTracker::isSecure() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::conn::routing::HttpRoute org::apache::http::conn::routing::RouteTracker::toRoute() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "toRoute", "()Lorg/apache/http/conn/routing/HttpRoute;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

bool org::apache::http::conn::routing::RouteTracker::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::conn::routing::RouteTracker::hashCode() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::apache::http::conn::routing::RouteTracker::toString() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::conn::routing::RouteTracker::clone() const {
    if (!::org::apache::http::conn::routing::RouteTracker::_class) ::org::apache::http::conn::routing::RouteTracker::_class = java::fetch_class("org/apache/http/conn/routing/RouteTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t org::apache::http::conn::routing::HttpRouteDirector::nextStep(const ::org::apache::http::conn::routing::RouteInfo& arg0, const ::org::apache::http::conn::routing::RouteInfo& arg1) const {
    if (!::org::apache::http::conn::routing::HttpRouteDirector::_class) ::org::apache::http::conn::routing::HttpRouteDirector::_class = java::fetch_class("org/apache/http/conn/routing/HttpRouteDirector");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextStep", "(Lorg/apache/http/conn/routing/RouteInfo;Lorg/apache/http/conn/routing/RouteInfo;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::org::apache::http::conn::routing::RouteInfo_TunnelType> org::apache::http::conn::routing::RouteInfo_TunnelType::values(){
    if (!::org::apache::http::conn::routing::RouteInfo_TunnelType::_class) ::org::apache::http::conn::routing::RouteInfo_TunnelType::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo$TunnelType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lorg/apache/http/conn/routing/RouteInfo$TunnelType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::conn::routing::RouteInfo_TunnelType> _ret(rets, ::org::apache::http::conn::routing::RouteInfo_TunnelType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::conn::routing::RouteInfo_TunnelType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::conn::routing::RouteInfo_TunnelType org::apache::http::conn::routing::RouteInfo_TunnelType::valueOf(const ::java::lang::String& arg0){
    if (!::org::apache::http::conn::routing::RouteInfo_TunnelType::_class) ::org::apache::http::conn::routing::RouteInfo_TunnelType::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo$TunnelType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lorg/apache/http/conn/routing/RouteInfo$TunnelType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::apache::http::conn::routing::RouteInfo_TunnelType _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::conn::routing::RouteInfo_LayerType> org::apache::http::conn::routing::RouteInfo_LayerType::values(){
    if (!::org::apache::http::conn::routing::RouteInfo_LayerType::_class) ::org::apache::http::conn::routing::RouteInfo_LayerType::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo$LayerType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lorg/apache/http/conn/routing/RouteInfo$LayerType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::conn::routing::RouteInfo_LayerType> _ret(rets, ::org::apache::http::conn::routing::RouteInfo_LayerType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::conn::routing::RouteInfo_LayerType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::conn::routing::RouteInfo_LayerType org::apache::http::conn::routing::RouteInfo_LayerType::valueOf(const ::java::lang::String& arg0){
    if (!::org::apache::http::conn::routing::RouteInfo_LayerType::_class) ::org::apache::http::conn::routing::RouteInfo_LayerType::_class = java::fetch_class("org/apache/http/conn/routing/RouteInfo$LayerType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lorg/apache/http/conn/routing/RouteInfo$LayerType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::apache::http::conn::routing::RouteInfo_LayerType _ret(ret);
    return _ret;
}

