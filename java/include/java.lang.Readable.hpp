#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace nio { class CharBuffer; } }

namespace java {
namespace lang {
class Readable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Readable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Readable(const ::java::lang::Readable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Readable(::java::lang::Readable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Readable& operator=(const ::java::lang::Readable& x) {obj = x.obj; return *this;}
    ::java::lang::Readable& operator=(::java::lang::Readable&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t read(const ::java::nio::CharBuffer&) const ;

};
}
}


