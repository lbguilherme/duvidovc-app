#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }

namespace org {
namespace apache {
namespace http {
class RequestLine : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RequestLine(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RequestLine(const ::org::apache::http::RequestLine& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RequestLine(::org::apache::http::RequestLine&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::RequestLine& operator=(const ::org::apache::http::RequestLine& x) {obj = x.obj; return *this;}
    ::org::apache::http::RequestLine& operator=(::org::apache::http::RequestLine&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getMethod() const;
    ::org::apache::http::ProtocolVersion getProtocolVersion() const;
    ::java::lang::String getUri() const;

};
}
}
}


