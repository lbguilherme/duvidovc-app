#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"
#include "java.nio.Buffer.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace nio { class ByteOrder; } }
namespace java { namespace nio { class CharBuffer; } }
namespace java { namespace nio { class DoubleBuffer; } }
namespace java { namespace nio { class FloatBuffer; } }
namespace java { namespace nio { class IntBuffer; } }
namespace java { namespace nio { class LongBuffer; } }
namespace java { namespace nio { class ShortBuffer; } }

namespace java {
namespace nio {
class ByteBuffer : public virtual ::java::lang::Object,
                   public virtual ::java::lang::Comparable,
                   public virtual ::java::nio::Buffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ByteBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::nio::Buffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ByteBuffer(const ::java::nio::ByteBuffer& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj;}
    ByteBuffer(::java::nio::ByteBuffer&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::ByteBuffer& operator=(const ::java::nio::ByteBuffer& x) {obj = x.obj; return *this;}
    ::java::nio::ByteBuffer& operator=(::java::nio::ByteBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::ByteBuffer allocate(int32_t);
    static ::java::nio::ByteBuffer allocateDirect(int32_t);
    static ::java::nio::ByteBuffer wrap(const std::vector< int8_t>&);
    static ::java::nio::ByteBuffer wrap(const std::vector< int8_t>&, int32_t, int32_t);
    std::vector< int8_t> array() const ;
    int32_t arrayOffset() const ;
    ::java::nio::CharBuffer asCharBuffer() const ;
    ::java::nio::DoubleBuffer asDoubleBuffer() const ;
    ::java::nio::FloatBuffer asFloatBuffer() const ;
    ::java::nio::IntBuffer asIntBuffer() const ;
    ::java::nio::LongBuffer asLongBuffer() const ;
    ::java::nio::ByteBuffer asReadOnlyBuffer() const ;
    ::java::nio::ShortBuffer asShortBuffer() const ;
    ::java::nio::ByteBuffer compact() const ;
    int32_t compareTo(const ::java::nio::ByteBuffer&) const ;
    ::java::nio::ByteBuffer duplicate() const ;
    bool equals(const ::java::lang::Object&) const ;
    int8_t get() const ;
    ::java::nio::ByteBuffer get(const std::vector< int8_t>&) const ;
    ::java::nio::ByteBuffer get(const std::vector< int8_t>&, int32_t, int32_t) const ;
    int8_t get(int32_t) const ;
    uint16_t getChar() const ;
    uint16_t getChar(int32_t) const ;
    double getDouble() const ;
    double getDouble(int32_t) const ;
    float getFloat() const ;
    float getFloat(int32_t) const ;
    int32_t getInt() const ;
    int32_t getInt(int32_t) const ;
    int64_t getLong() const ;
    int64_t getLong(int32_t) const ;
    int16_t getShort() const ;
    int16_t getShort(int32_t) const ;
    bool hasArray() const ;
    int32_t hashCode() const ;
    bool isDirect() const ;
    ::java::nio::ByteOrder order() const ;
    ::java::nio::ByteBuffer order(const ::java::nio::ByteOrder&) const ;
    ::java::nio::ByteBuffer put(int8_t) const ;
    ::java::nio::ByteBuffer put(const std::vector< int8_t>&) const ;
    ::java::nio::ByteBuffer put(const std::vector< int8_t>&, int32_t, int32_t) const ;
    ::java::nio::ByteBuffer put(const ::java::nio::ByteBuffer&) const ;
    ::java::nio::ByteBuffer put(int32_t, int8_t) const ;
    ::java::nio::ByteBuffer putChar(uint16_t) const ;
    ::java::nio::ByteBuffer putChar(int32_t, uint16_t) const ;
    ::java::nio::ByteBuffer putDouble(double) const ;
    ::java::nio::ByteBuffer putDouble(int32_t, double) const ;
    ::java::nio::ByteBuffer putFloat(float) const ;
    ::java::nio::ByteBuffer putFloat(int32_t, float) const ;
    ::java::nio::ByteBuffer putInt(int32_t) const ;
    ::java::nio::ByteBuffer putInt(int32_t, int32_t) const ;
    ::java::nio::ByteBuffer putLong(int64_t) const ;
    ::java::nio::ByteBuffer putLong(int32_t, int64_t) const ;
    ::java::nio::ByteBuffer putShort(int16_t) const ;
    ::java::nio::ByteBuffer putShort(int32_t, int16_t) const ;
    ::java::nio::ByteBuffer slice() const ;
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}


