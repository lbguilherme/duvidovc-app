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
class KeyManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyManager(const ::javax::net::ssl::KeyManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyManager(::javax::net::ssl::KeyManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::KeyManager& operator=(const ::javax::net::ssl::KeyManager& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::KeyManager& operator=(::javax::net::ssl::KeyManager&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


