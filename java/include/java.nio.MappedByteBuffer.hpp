#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.ByteBuffer.hpp"

namespace java { namespace nio { class MappedByteBuffer; } }

namespace java {
namespace nio {
class MappedByteBuffer : public virtual ::java::lang::Object,
                         public virtual ::java::nio::ByteBuffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MappedByteBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::nio::Buffer(_obj), ::java::nio::ByteBuffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MappedByteBuffer(const ::java::nio::MappedByteBuffer& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0), ::java::nio::ByteBuffer((jobject)0) {obj = x.obj;}
    MappedByteBuffer(::java::nio::MappedByteBuffer&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0), ::java::nio::ByteBuffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::MappedByteBuffer& operator=(const ::java::nio::MappedByteBuffer& x) {obj = x.obj; return *this;}
    ::java::nio::MappedByteBuffer& operator=(::java::nio::MappedByteBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    bool isLoaded() const ;
    ::java::nio::MappedByteBuffer load() const ;
    ::java::nio::MappedByteBuffer force() const ;

};
}
}


