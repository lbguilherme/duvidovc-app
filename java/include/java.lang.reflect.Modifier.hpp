#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
namespace reflect {
class Modifier : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Modifier(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Modifier(const ::java::lang::reflect::Modifier& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Modifier(::java::lang::reflect::Modifier&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::Modifier& operator=(const ::java::lang::reflect::Modifier& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::Modifier& operator=(::java::lang::reflect::Modifier&& x) {obj = std::move(x.obj); return *this;}
    
    Modifier();
    static bool isAbstract(int32_t);
    static bool isFinal(int32_t);
    static bool isInterface(int32_t);
    static bool isNative(int32_t);
    static bool isPrivate(int32_t);
    static bool isProtected(int32_t);
    static bool isPublic(int32_t);
    static bool isStatic(int32_t);
    static bool isStrict(int32_t);
    static bool isSynchronized(int32_t);
    static bool isTransient(int32_t);
    static bool isVolatile(int32_t);
    static ::java::lang::String toString(int32_t);

};
}
}
}


