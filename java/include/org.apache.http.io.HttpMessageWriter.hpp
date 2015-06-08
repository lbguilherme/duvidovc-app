#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpMessage; } } }

namespace org {
namespace apache {
namespace http {
namespace io {
class HttpMessageWriter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpMessageWriter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpMessageWriter(const ::org::apache::http::io::HttpMessageWriter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpMessageWriter(::org::apache::http::io::HttpMessageWriter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::io::HttpMessageWriter& operator=(const ::org::apache::http::io::HttpMessageWriter& x) {obj = x.obj; return *this;}
    ::org::apache::http::io::HttpMessageWriter& operator=(::org::apache::http::io::HttpMessageWriter&& x) {obj = std::move(x.obj); return *this;}
    
    void write(const ::org::apache::http::HttpMessage&) const;

};
}
}
}
}


