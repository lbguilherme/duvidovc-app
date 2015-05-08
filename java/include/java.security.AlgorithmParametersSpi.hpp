#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
class AlgorithmParametersSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlgorithmParametersSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlgorithmParametersSpi(const ::java::security::AlgorithmParametersSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AlgorithmParametersSpi(::java::security::AlgorithmParametersSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AlgorithmParametersSpi& operator=(const ::java::security::AlgorithmParametersSpi& x) {obj = x.obj; return *this;}
    ::java::security::AlgorithmParametersSpi& operator=(::java::security::AlgorithmParametersSpi&& x) {obj = std::move(x.obj); return *this;}
    
    AlgorithmParametersSpi();

};
}
}


