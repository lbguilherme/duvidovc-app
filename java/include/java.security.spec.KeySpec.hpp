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
class KeySpec : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeySpec(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeySpec(const ::java::security::spec::KeySpec& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeySpec(::java::security::spec::KeySpec&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::KeySpec& operator=(const ::java::security::spec::KeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::KeySpec& operator=(::java::security::spec::KeySpec&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


