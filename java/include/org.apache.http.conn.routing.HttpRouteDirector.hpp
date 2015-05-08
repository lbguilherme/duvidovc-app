#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace routing {
class HttpRouteDirector : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRouteDirector(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRouteDirector(const ::org::apache::http::conn::routing::HttpRouteDirector& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpRouteDirector(::org::apache::http::conn::routing::HttpRouteDirector&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::routing::HttpRouteDirector& operator=(const ::org::apache::http::conn::routing::HttpRouteDirector& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::routing::HttpRouteDirector& operator=(::org::apache::http::conn::routing::HttpRouteDirector&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t nextStep(const ::org::apache::http::conn::routing::RouteInfo&, const ::org::apache::http::conn::routing::RouteInfo&) const ;

};
}
}
}
}
}


