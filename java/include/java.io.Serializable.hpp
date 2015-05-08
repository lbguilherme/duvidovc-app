#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace io {
class Serializable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Serializable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Serializable(const ::java::io::Serializable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Serializable(::java::io::Serializable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::Serializable& operator=(const ::java::io::Serializable& x) {obj = x.obj; return *this;}
    ::java::io::Serializable& operator=(::java::io::Serializable&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


