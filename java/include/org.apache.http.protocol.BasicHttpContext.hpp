#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class BasicHttpContext : public virtual ::java::lang::Object,
                         public virtual ::org::apache::http::protocol::HttpContext {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHttpContext(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::protocol::HttpContext(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHttpContext(const ::org::apache::http::protocol::BasicHttpContext& x) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {obj = x.obj;}
    BasicHttpContext(::org::apache::http::protocol::BasicHttpContext&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::BasicHttpContext& operator=(const ::org::apache::http::protocol::BasicHttpContext& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::BasicHttpContext& operator=(::org::apache::http::protocol::BasicHttpContext&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHttpContext();
    BasicHttpContext(const ::org::apache::http::protocol::HttpContext&);
    ::java::lang::Object getAttribute(const ::java::lang::String&) const;
    void setAttribute(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object removeAttribute(const ::java::lang::String&) const;

};
}
}
}
}


