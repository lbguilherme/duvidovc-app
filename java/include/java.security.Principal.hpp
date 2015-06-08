#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace security {
class Principal : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Principal(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Principal(const ::java::security::Principal& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Principal(::java::security::Principal&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Principal& operator=(const ::java::security::Principal& x) {obj = x.obj; return *this;}
    ::java::security::Principal& operator=(::java::security::Principal&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String getName() const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;

};
}
}


