#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
class Policy_Parameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Policy_Parameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Policy_Parameters(const ::java::security::Policy_Parameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Policy_Parameters(::java::security::Policy_Parameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Policy_Parameters& operator=(const ::java::security::Policy_Parameters& x) {obj = x.obj; return *this;}
    ::java::security::Policy_Parameters& operator=(::java::security::Policy_Parameters&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


