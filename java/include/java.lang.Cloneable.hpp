#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace lang {
class Cloneable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Cloneable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Cloneable(const ::java::lang::Cloneable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Cloneable(::java::lang::Cloneable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Cloneable& operator=(const ::java::lang::Cloneable& x) {obj = x.obj; return *this;}
    ::java::lang::Cloneable& operator=(::java::lang::Cloneable&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


