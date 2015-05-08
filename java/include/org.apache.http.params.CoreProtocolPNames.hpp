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
namespace params {
class CoreProtocolPNames : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CoreProtocolPNames(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CoreProtocolPNames(const ::org::apache::http::params::CoreProtocolPNames& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CoreProtocolPNames(::org::apache::http::params::CoreProtocolPNames&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::CoreProtocolPNames& operator=(const ::org::apache::http::params::CoreProtocolPNames& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::CoreProtocolPNames& operator=(::org::apache::http::params::CoreProtocolPNames&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


