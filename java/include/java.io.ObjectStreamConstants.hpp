#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace io {
class ObjectStreamConstants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectStreamConstants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectStreamConstants(const ::java::io::ObjectStreamConstants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ObjectStreamConstants(::java::io::ObjectStreamConstants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectStreamConstants& operator=(const ::java::io::ObjectStreamConstants& x) {obj = x.obj; return *this;}
    ::java::io::ObjectStreamConstants& operator=(::java::io::ObjectStreamConstants&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


