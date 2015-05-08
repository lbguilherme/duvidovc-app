#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace lang {
class Void : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Void(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Void(const ::java::lang::Void& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Void(::java::lang::Void&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Void& operator=(const ::java::lang::Void& x) {obj = x.obj; return *this;}
    ::java::lang::Void& operator=(::java::lang::Void&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


