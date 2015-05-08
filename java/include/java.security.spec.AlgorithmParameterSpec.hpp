#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
namespace spec {
class AlgorithmParameterSpec : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlgorithmParameterSpec(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlgorithmParameterSpec(const ::java::security::spec::AlgorithmParameterSpec& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AlgorithmParameterSpec(::java::security::spec::AlgorithmParameterSpec&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::AlgorithmParameterSpec& operator=(const ::java::security::spec::AlgorithmParameterSpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::AlgorithmParameterSpec& operator=(::java::security::spec::AlgorithmParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


