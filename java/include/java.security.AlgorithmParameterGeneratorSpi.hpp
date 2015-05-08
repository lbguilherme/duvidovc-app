#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
class AlgorithmParameterGeneratorSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlgorithmParameterGeneratorSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlgorithmParameterGeneratorSpi(const ::java::security::AlgorithmParameterGeneratorSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AlgorithmParameterGeneratorSpi(::java::security::AlgorithmParameterGeneratorSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AlgorithmParameterGeneratorSpi& operator=(const ::java::security::AlgorithmParameterGeneratorSpi& x) {obj = x.obj; return *this;}
    ::java::security::AlgorithmParameterGeneratorSpi& operator=(::java::security::AlgorithmParameterGeneratorSpi&& x) {obj = std::move(x.obj); return *this;}
    
    AlgorithmParameterGeneratorSpi();

};
}
}


