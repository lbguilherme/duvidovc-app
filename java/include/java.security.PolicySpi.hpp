#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
class PolicySpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PolicySpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PolicySpi(const ::java::security::PolicySpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PolicySpi(::java::security::PolicySpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::PolicySpi& operator=(const ::java::security::PolicySpi& x) {obj = x.obj; return *this;}
    ::java::security::PolicySpi& operator=(::java::security::PolicySpi&& x) {obj = std::move(x.obj); return *this;}
    
    PolicySpi();

};
}
}


