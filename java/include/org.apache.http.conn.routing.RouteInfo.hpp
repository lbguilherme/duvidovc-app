#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class InetAddress; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo_LayerType; } } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo_TunnelType; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace routing {
class RouteInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RouteInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RouteInfo(const ::org::apache::http::conn::routing::RouteInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RouteInfo(::org::apache::http::conn::routing::RouteInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::routing::RouteInfo& operator=(const ::org::apache::http::conn::routing::RouteInfo& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::routing::RouteInfo& operator=(::org::apache::http::conn::routing::RouteInfo&& x) {obj = std::move(x.obj); return *this;}
    
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

};
}
}
}
}
}

#include "org.apache.http.conn.routing.RouteInfo_LayerType.hpp"
#include "org.apache.http.conn.routing.RouteInfo_TunnelType.hpp"

