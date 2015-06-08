#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpDateGenerator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpDateGenerator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpDateGenerator(const ::org::apache::http::protocol::HttpDateGenerator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpDateGenerator(::org::apache::http::protocol::HttpDateGenerator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpDateGenerator& operator=(const ::org::apache::http::protocol::HttpDateGenerator& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpDateGenerator& operator=(::org::apache::http::protocol::HttpDateGenerator&& x) {obj = std::move(x.obj); return *this;}
    
    HttpDateGenerator();
    ::java::lang::String getCurrentDate() const;

};
}
}
}
}


