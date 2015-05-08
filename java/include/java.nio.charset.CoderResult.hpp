#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace charset { class CoderResult; } } }

namespace java {
namespace nio {
namespace charset {
class CoderResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CoderResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CoderResult(const ::java::nio::charset::CoderResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CoderResult(::java::nio::charset::CoderResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::CoderResult& operator=(const ::java::nio::charset::CoderResult& x) {obj = x.obj; return *this;}
    ::java::nio::charset::CoderResult& operator=(::java::nio::charset::CoderResult&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::charset::CoderResult malformedForLength(int32_t);
    static ::java::nio::charset::CoderResult unmappableForLength(int32_t);
    bool isUnderflow() const ;
    bool isError() const ;
    bool isMalformed() const ;
    bool isOverflow() const ;
    bool isUnmappable() const ;
    int32_t length() const ;
    void throwException() const ;
    ::java::lang::String toString() const ;

};
}
}
}


