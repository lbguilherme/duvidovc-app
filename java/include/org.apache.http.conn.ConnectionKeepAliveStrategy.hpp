#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class ConnectionKeepAliveStrategy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectionKeepAliveStrategy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectionKeepAliveStrategy(const ::org::apache::http::conn::ConnectionKeepAliveStrategy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnectionKeepAliveStrategy(::org::apache::http::conn::ConnectionKeepAliveStrategy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ConnectionKeepAliveStrategy& operator=(const ::org::apache::http::conn::ConnectionKeepAliveStrategy& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ConnectionKeepAliveStrategy& operator=(::org::apache::http::conn::ConnectionKeepAliveStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t getKeepAliveDuration(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}


