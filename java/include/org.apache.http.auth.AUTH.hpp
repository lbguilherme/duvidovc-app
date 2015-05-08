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
namespace auth {
class AUTH : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AUTH(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AUTH(const ::org::apache::http::auth::AUTH& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AUTH(::org::apache::http::auth::AUTH&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::AUTH& operator=(const ::org::apache::http::auth::AUTH& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::AUTH& operator=(::org::apache::http::auth::AUTH&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


