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
class MessageDigestSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessageDigestSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessageDigestSpi(const ::java::security::MessageDigestSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MessageDigestSpi(::java::security::MessageDigestSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::MessageDigestSpi& operator=(const ::java::security::MessageDigestSpi& x) {obj = x.obj; return *this;}
    ::java::security::MessageDigestSpi& operator=(::java::security::MessageDigestSpi&& x) {obj = std::move(x.obj); return *this;}
    
    MessageDigestSpi();
    ::java::lang::Object clone() const;

};
}
}


