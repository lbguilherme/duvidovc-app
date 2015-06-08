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
class DefaultedHttpContext : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::protocol::HttpContext {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultedHttpContext(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::protocol::HttpContext(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultedHttpContext(const ::org::apache::http::protocol::DefaultedHttpContext& x) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {obj = x.obj;}
    DefaultedHttpContext(::org::apache::http::protocol::DefaultedHttpContext&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::DefaultedHttpContext& operator=(const ::org::apache::http::protocol::DefaultedHttpContext& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::DefaultedHttpContext& operator=(::org::apache::http::protocol::DefaultedHttpContext&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultedHttpContext(const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::protocol::HttpContext&);
    ::java::lang::Object getAttribute(const ::java::lang::String&) const;
    ::java::lang::Object removeAttribute(const ::java::lang::String&) const;
    void setAttribute(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::org::apache::http::protocol::HttpContext getDefaults() const;

};
}
}
}
}


