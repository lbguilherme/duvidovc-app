#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace lang {
namespace reflect {
class Type : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Type(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Type(const ::java::lang::reflect::Type& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Type(::java::lang::reflect::Type&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::Type& operator=(const ::java::lang::reflect::Type& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::Type& operator=(::java::lang::reflect::Type&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


