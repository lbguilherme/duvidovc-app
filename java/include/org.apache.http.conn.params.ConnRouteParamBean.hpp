#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.HttpAbstractParamBean.hpp"

namespace java { namespace net { class InetAddress; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace params {
class ConnRouteParamBean : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::params::HttpAbstractParamBean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnRouteParamBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpAbstractParamBean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnRouteParamBean(const ::org::apache::http::conn::params::ConnRouteParamBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj;}
    ConnRouteParamBean(::org::apache::http::conn::params::ConnRouteParamBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnRouteParamBean& operator=(const ::org::apache::http::conn::params::ConnRouteParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnRouteParamBean& operator=(::org::apache::http::conn::params::ConnRouteParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    ConnRouteParamBean(const ::org::apache::http::params::HttpParams&);
    void setDefaultProxy(const ::org::apache::http::HttpHost&) const;
    void setLocalAddress(const ::java::net::InetAddress&) const;
    void setForcedRoute(const ::org::apache::http::conn::routing::HttpRoute&) const;

};
}
}
}
}
}


