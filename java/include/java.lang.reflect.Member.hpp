#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
namespace reflect {
class Member : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Member(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Member(const ::java::lang::reflect::Member& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Member(::java::lang::reflect::Member&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::Member& operator=(const ::java::lang::reflect::Member& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::Member& operator=(::java::lang::reflect::Member&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Class getDeclaringClass() const;
    int32_t getModifiers() const;
    ::java::lang::String getName() const;
    bool isSynthetic() const;

};
}
}
}


