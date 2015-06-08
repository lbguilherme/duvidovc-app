#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace params {
class ConnPerRoute : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnPerRoute(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnPerRoute(const ::org::apache::http::conn::params::ConnPerRoute& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnPerRoute(::org::apache::http::conn::params::ConnPerRoute&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnPerRoute& operator=(const ::org::apache::http::conn::params::ConnPerRoute& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnPerRoute& operator=(::org::apache::http::conn::params::ConnPerRoute&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getMaxForRoute(const ::org::apache::http::conn::routing::HttpRoute&) const;

};
}
}
}
}
}


