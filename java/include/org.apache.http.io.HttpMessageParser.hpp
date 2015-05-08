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
class HttpMessageParser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpMessageParser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpMessageParser(const ::org::apache::http::io::HttpMessageParser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpMessageParser(::org::apache::http::io::HttpMessageParser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::io::HttpMessageParser& operator=(const ::org::apache::http::io::HttpMessageParser& x) {obj = x.obj; return *this;}
    ::org::apache::http::io::HttpMessageParser& operator=(::org::apache::http::io::HttpMessageParser&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::HttpMessage parse() const ;

};
}
}
}
}


