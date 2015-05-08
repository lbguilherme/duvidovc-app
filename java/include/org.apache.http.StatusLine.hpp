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
class StatusLine : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StatusLine(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StatusLine(const ::org::apache::http::StatusLine& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StatusLine(::org::apache::http::StatusLine&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::StatusLine& operator=(const ::org::apache::http::StatusLine& x) {obj = x.obj; return *this;}
    ::org::apache::http::StatusLine& operator=(::org::apache::http::StatusLine&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::ProtocolVersion getProtocolVersion() const ;
    int32_t getStatusCode() const ;
    ::java::lang::String getReasonPhrase() const ;

};
}
}
}


