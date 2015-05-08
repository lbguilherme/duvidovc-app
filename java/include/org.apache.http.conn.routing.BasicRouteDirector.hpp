#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.routing.HttpRouteDirector.hpp"

namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace routing {
class BasicRouteDirector : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::conn::routing::HttpRouteDirector {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicRouteDirector(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::routing::HttpRouteDirector(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicRouteDirector(const ::org::apache::http::conn::routing::BasicRouteDirector& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRouteDirector((jobject)0) {obj = x.obj;}
    BasicRouteDirector(::org::apache::http::conn::routing::BasicRouteDirector&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRouteDirector((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::routing::BasicRouteDirector& operator=(const ::org::apache::http::conn::routing::BasicRouteDirector& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::routing::BasicRouteDirector& operator=(::org::apache::http::conn::routing::BasicRouteDirector&& x) {obj = std::move(x.obj); return *this;}
    
    BasicRouteDirector();
    int32_t nextStep(const ::org::apache::http::conn::routing::RouteInfo&, const ::org::apache::http::conn::routing::RouteInfo&) const ;

};
}
}
}
}
}


