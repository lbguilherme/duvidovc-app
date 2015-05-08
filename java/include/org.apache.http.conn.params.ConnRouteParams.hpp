#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.params.ConnRoutePNames.hpp"

namespace java { namespace net { class InetAddress; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace params {
class ConnRouteParams : public virtual ::java::lang::Object,
                        public virtual ::org::apache::http::conn::params::ConnRoutePNames {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnRouteParams(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::params::ConnRoutePNames(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnRouteParams(const ::org::apache::http::conn::params::ConnRouteParams& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnRoutePNames((jobject)0) {obj = x.obj;}
    ConnRouteParams(::org::apache::http::conn::params::ConnRouteParams&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnRoutePNames((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnRouteParams& operator=(const ::org::apache::http::conn::params::ConnRouteParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnRouteParams& operator=(::org::apache::http::conn::params::ConnRouteParams&& x) {obj = std::move(x.obj); return *this;}
    
    static ::org::apache::http::HttpHost getDefaultProxy(const ::org::apache::http::params::HttpParams&);
    static void setDefaultProxy(const ::org::apache::http::params::HttpParams&, const ::org::apache::http::HttpHost&);
    static ::org::apache::http::conn::routing::HttpRoute getForcedRoute(const ::org::apache::http::params::HttpParams&);
    static void setForcedRoute(const ::org::apache::http::params::HttpParams&, const ::org::apache::http::conn::routing::HttpRoute&);
    static ::java::net::InetAddress getLocalAddress(const ::org::apache::http::params::HttpParams&);
    static void setLocalAddress(const ::org::apache::http::params::HttpParams&, const ::java::net::InetAddress&);

};
}
}
}
}
}


