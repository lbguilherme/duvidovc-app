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
class TrustManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrustManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrustManager(const ::javax::net::ssl::TrustManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TrustManager(::javax::net::ssl::TrustManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::TrustManager& operator=(const ::javax::net::ssl::TrustManager& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::TrustManager& operator=(::javax::net::ssl::TrustManager&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


