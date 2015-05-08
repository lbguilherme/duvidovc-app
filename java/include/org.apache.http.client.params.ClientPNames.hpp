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
namespace client {
namespace params {
class ClientPNames : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientPNames(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientPNames(const ::org::apache::http::client::params::ClientPNames& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClientPNames(::org::apache::http::client::params::ClientPNames&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::params::ClientPNames& operator=(const ::org::apache::http::client::params::ClientPNames& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::params::ClientPNames& operator=(::org::apache::http::client::params::ClientPNames&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}


