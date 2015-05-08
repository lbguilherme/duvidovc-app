#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace net {
class IDN : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IDN(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IDN(const ::java::net::IDN& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IDN(::java::net::IDN&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::IDN& operator=(const ::java::net::IDN& x) {obj = x.obj; return *this;}
    ::java::net::IDN& operator=(::java::net::IDN&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String toASCII(const ::java::lang::String&, int32_t);
    static ::java::lang::String toASCII(const ::java::lang::String&);
    static ::java::lang::String toUnicode(const ::java::lang::String&, int32_t);
    static ::java::lang::String toUnicode(const ::java::lang::String&);

};
}
}


