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
namespace lang {
class Character_Subset : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Character_Subset(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Character_Subset(const ::java::lang::Character_Subset& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Character_Subset(::java::lang::Character_Subset&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Character_Subset& operator=(const ::java::lang::Character_Subset& x) {obj = x.obj; return *this;}
    ::java::lang::Character_Subset& operator=(::java::lang::Character_Subset&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;

};
}
}


