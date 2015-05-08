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
class TrustManagerFactorySpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrustManagerFactorySpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrustManagerFactorySpi(const ::javax::net::ssl::TrustManagerFactorySpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TrustManagerFactorySpi(::javax::net::ssl::TrustManagerFactorySpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::TrustManagerFactorySpi& operator=(const ::javax::net::ssl::TrustManagerFactorySpi& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::TrustManagerFactorySpi& operator=(::javax::net::ssl::TrustManagerFactorySpi&& x) {obj = std::move(x.obj); return *this;}
    
    TrustManagerFactorySpi();

};
}
}
}


