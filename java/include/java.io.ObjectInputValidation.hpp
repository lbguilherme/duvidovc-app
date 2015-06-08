#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace io {
class ObjectInputValidation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectInputValidation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectInputValidation(const ::java::io::ObjectInputValidation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ObjectInputValidation(::java::io::ObjectInputValidation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectInputValidation& operator=(const ::java::io::ObjectInputValidation& x) {obj = x.obj; return *this;}
    ::java::io::ObjectInputValidation& operator=(::java::io::ObjectInputValidation&& x) {obj = std::move(x.obj); return *this;}
    
    void validateObject() const;

};
}
}


