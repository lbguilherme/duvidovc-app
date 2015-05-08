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
class SSLContextSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLContextSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLContextSpi(const ::javax::net::ssl::SSLContextSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SSLContextSpi(::javax::net::ssl::SSLContextSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLContextSpi& operator=(const ::javax::net::ssl::SSLContextSpi& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLContextSpi& operator=(::javax::net::ssl::SSLContextSpi&& x) {obj = std::move(x.obj); return *this;}
    
    SSLContextSpi();

};
}
}
}


