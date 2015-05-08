#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace net {
namespace ssl {
class KeyManagerFactorySpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyManagerFactorySpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyManagerFactorySpi(const ::javax::net::ssl::KeyManagerFactorySpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyManagerFactorySpi(::javax::net::ssl::KeyManagerFactorySpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::KeyManagerFactorySpi& operator=(const ::javax::net::ssl::KeyManagerFactorySpi& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::KeyManagerFactorySpi& operator=(::javax::net::ssl::KeyManagerFactorySpi&& x) {obj = std::move(x.obj); return *this;}
    
    KeyManagerFactorySpi();

};
}
}
}


