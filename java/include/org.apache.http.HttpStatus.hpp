#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace org {
namespace apache {
namespace http {
class HttpStatus : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpStatus(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpStatus(const ::org::apache::http::HttpStatus& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpStatus(::org::apache::http::HttpStatus&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpStatus& operator=(const ::org::apache::http::HttpStatus& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpStatus& operator=(::org::apache::http::HttpStatus&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


