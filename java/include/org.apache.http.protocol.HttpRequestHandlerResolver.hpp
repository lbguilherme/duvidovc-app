#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpRequestHandler; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpRequestHandlerResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequestHandlerResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequestHandlerResolver(const ::org::apache::http::protocol::HttpRequestHandlerResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpRequestHandlerResolver(::org::apache::http::protocol::HttpRequestHandlerResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpRequestHandlerResolver& operator=(const ::org::apache::http::protocol::HttpRequestHandlerResolver& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpRequestHandlerResolver& operator=(::org::apache::http::protocol::HttpRequestHandlerResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::protocol::HttpRequestHandler lookup(const ::java::lang::String&) const ;

};
}
}
}
}


