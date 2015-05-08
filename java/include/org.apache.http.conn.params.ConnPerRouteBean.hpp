#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.params.ConnPerRoute.hpp"

namespace java { namespace util { class Map; } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace params {
class ConnPerRouteBean : public virtual ::java::lang::Object,
                         public virtual ::org::apache::http::conn::params::ConnPerRoute {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnPerRouteBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::params::ConnPerRoute(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnPerRouteBean(const ::org::apache::http::conn::params::ConnPerRouteBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnPerRoute((jobject)0) {obj = x.obj;}
    ConnPerRouteBean(::org::apache::http::conn::params::ConnPerRouteBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnPerRoute((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnPerRouteBean& operator=(const ::org::apache::http::conn::params::ConnPerRouteBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnPerRouteBean& operator=(::org::apache::http::conn::params::ConnPerRouteBean&& x) {obj = std::move(x.obj); return *this;}
    
    ConnPerRouteBean(int32_t);
    ConnPerRouteBean();
    int32_t getDefaultMax() const ;
    void setDefaultMaxPerRoute(int32_t) const ;
    void setMaxForRoute(const ::org::apache::http::conn::routing::HttpRoute&, int32_t) const ;
    int32_t getMaxForRoute(const ::org::apache::http::conn::routing::HttpRoute&) const ;
    void setMaxForRoutes(const ::java::util::Map&) const ;

};
}
}
}
}
}


