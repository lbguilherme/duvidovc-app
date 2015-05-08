#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.Key.hpp"


namespace javax {
namespace crypto {
class SecretKey : public virtual ::java::lang::Object,
                  public virtual ::java::security::Key {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecretKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecretKey(const ::javax::crypto::SecretKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0) {obj = x.obj;}
    SecretKey(::javax::crypto::SecretKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::SecretKey& operator=(const ::javax::crypto::SecretKey& x) {obj = x.obj; return *this;}
    ::javax::crypto::SecretKey& operator=(::javax::crypto::SecretKey&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


