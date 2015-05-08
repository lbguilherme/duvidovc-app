#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
class KeyFactorySpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyFactorySpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyFactorySpi(const ::java::security::KeyFactorySpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyFactorySpi(::java::security::KeyFactorySpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyFactorySpi& operator=(const ::java::security::KeyFactorySpi& x) {obj = x.obj; return *this;}
    ::java::security::KeyFactorySpi& operator=(::java::security::KeyFactorySpi&& x) {obj = std::move(x.obj); return *this;}
    
    KeyFactorySpi();

};
}
}


