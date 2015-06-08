#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace security {
class SignatureSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SignatureSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SignatureSpi(const ::java::security::SignatureSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SignatureSpi(::java::security::SignatureSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::SignatureSpi& operator=(const ::java::security::SignatureSpi& x) {obj = x.obj; return *this;}
    ::java::security::SignatureSpi& operator=(::java::security::SignatureSpi&& x) {obj = std::move(x.obj); return *this;}
    
    SignatureSpi();
    ::java::lang::Object clone() const;

};
}
}


