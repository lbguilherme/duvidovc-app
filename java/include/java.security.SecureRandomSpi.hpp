#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"


namespace java {
namespace security {
class SecureRandomSpi : public virtual ::java::lang::Object,
                        public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecureRandomSpi(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecureRandomSpi(const ::java::security::SecureRandomSpi& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    SecureRandomSpi(::java::security::SecureRandomSpi&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::SecureRandomSpi& operator=(const ::java::security::SecureRandomSpi& x) {obj = x.obj; return *this;}
    ::java::security::SecureRandomSpi& operator=(::java::security::SecureRandomSpi&& x) {obj = std::move(x.obj); return *this;}
    
    SecureRandomSpi();

};
}
}


