#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace crypto {
class KeyGeneratorSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyGeneratorSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyGeneratorSpi(const ::javax::crypto::KeyGeneratorSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyGeneratorSpi(::javax::crypto::KeyGeneratorSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::KeyGeneratorSpi& operator=(const ::javax::crypto::KeyGeneratorSpi& x) {obj = x.obj; return *this;}
    ::javax::crypto::KeyGeneratorSpi& operator=(::javax::crypto::KeyGeneratorSpi&& x) {obj = std::move(x.obj); return *this;}
    
    KeyGeneratorSpi();

};
}
}


