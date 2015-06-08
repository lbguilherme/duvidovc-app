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
class ConnectionReuseStrategy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectionReuseStrategy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectionReuseStrategy(const ::org::apache::http::ConnectionReuseStrategy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnectionReuseStrategy(::org::apache::http::ConnectionReuseStrategy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::ConnectionReuseStrategy& operator=(const ::org::apache::http::ConnectionReuseStrategy& x) {obj = x.obj; return *this;}
    ::org::apache::http::ConnectionReuseStrategy& operator=(::org::apache::http::ConnectionReuseStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    bool keepAlive(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}


