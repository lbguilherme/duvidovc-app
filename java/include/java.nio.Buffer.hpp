#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { class Buffer; } }

namespace java {
namespace nio {
class Buffer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Buffer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Buffer(const ::java::nio::Buffer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Buffer(::java::nio::Buffer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::Buffer& operator=(const ::java::nio::Buffer& x) {obj = x.obj; return *this;}
    ::java::nio::Buffer& operator=(::java::nio::Buffer&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object array() const ;
    int32_t arrayOffset() const ;
    int32_t capacity() const ;
    ::java::nio::Buffer clear() const ;
    ::java::nio::Buffer flip() const ;
    bool hasArray() const ;
    bool hasRemaining() const ;
    bool isDirect() const ;
    bool isReadOnly() const ;
    int32_t limit() const ;
    ::java::nio::Buffer limit(int32_t) const ;
    ::java::nio::Buffer mark() const ;
    int32_t position() const ;
    ::java::nio::Buffer position(int32_t) const ;
    int32_t remaining() const ;
    ::java::nio::Buffer reset() const ;
    ::java::nio::Buffer rewind() const ;
    ::java::lang::String toString() const ;

};
}
}


