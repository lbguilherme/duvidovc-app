#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.conn.routing.RouteInfo.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo_LayerType; } } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo_TunnelType; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace routing {
class HttpRoute : public virtual ::java::lang::Object,
                  public virtual ::java::lang::Cloneable,
                  public virtual ::org::apache::http::conn::routing::RouteInfo {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRoute(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::conn::routing::RouteInfo(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRoute(const ::org::apache::http::conn::routing::HttpRoute& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {obj = x.obj;}
    HttpRoute(::org::apache::http::conn::routing::HttpRoute&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::conn::routing::RouteInfo((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::routing::HttpRoute& operator=(const ::org::apache::http::conn::routing::HttpRoute& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::routing::HttpRoute& operator=(::org::apache::http::conn::routing::HttpRoute&& x) {obj = std::move(x.obj); return *this;}
    
    HttpRoute(const ::org::apache::http::HttpHost&, const ::java::net::InetAddress&, const std::vector< ::org::apache::http::HttpHost>&, bool, const ::org::apache::http::conn::routing::RouteInfo_TunnelType&, const ::org::apache::http::conn::routing::RouteInfo_LayerType&);
    HttpRoute(const ::org::apache::http::HttpHost&, const ::java::net::InetAddress&, const ::org::apache::http::HttpHost&, bool, const ::org::apache::http::conn::routing::RouteInfo_TunnelType&, const ::org::apache::http::conn::routing::RouteInfo_LayerType&);
    HttpRoute(const ::org::apache::http::HttpHost&, const ::java::net::InetAddress&, bool);
    HttpRoute(const ::org::apache::http::HttpHost&);
    HttpRoute(const ::org::apache::http::HttpHost&, const ::java::net::InetAddress&, const ::org::apache::http::HttpHost&, bool);
    ::org::apache::http::HttpHost getTargetHost() const;
    ::java::net::InetAddress getLocalAddress() const;
    int32_t getHopCount() const;
    ::org::apache::http::HttpHost getHopTarget(int32_t) const;
    ::org::apache::http::HttpHost getProxyHost() const;
    ::org::apache::http::conn::routing::RouteInfo_TunnelType getTunnelType() const;
    bool isTunnelled() const;
    ::org::apache::http::conn::routing::RouteInfo_LayerType getLayerType() const;
    bool isLayered() const;
    bool isSecure() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    ::java::lang::Object clone() const;

};
}
}
}
}
}


