#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpContext(const ::org::apache::http::protocol::HttpContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpContext(::org::apache::http::protocol::HttpContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpContext& operator=(const ::org::apache::http::protocol::HttpContext& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpContext& operator=(::org::apache::http::protocol::HttpContext&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object getAttribute(const ::java::lang::String&) const;
    void setAttribute(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object removeAttribute(const ::java::lang::String&) const;

};
}
}
}
}


