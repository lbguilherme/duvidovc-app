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
namespace java { namespace nio { class ByteOrder; } }
namespace java { namespace nio { class ShortBuffer; } }

namespace java {
namespace nio {
class ShortBuffer : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Comparable,
                    public virtual ::java::nio::Buffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShortBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::nio::Buffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShortBuffer(const ::java::nio::ShortBuffer& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj;}
    ShortBuffer(::java::nio::ShortBuffer&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::ShortBuffer& operator=(const ::java::nio::ShortBuffer& x) {obj = x.obj; return *this;}
    ::java::nio::ShortBuffer& operator=(::java::nio::ShortBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::ShortBuffer allocate(int32_t);
    static ::java::nio::ShortBuffer wrap(const std::vector< int16_t>&);
    static ::java::nio::ShortBuffer wrap(const std::vector< int16_t>&, int32_t, int32_t);
    std::vector< int16_t> array() const;
    int32_t arrayOffset() const;
    ::java::nio::ShortBuffer asReadOnlyBuffer() const;
    ::java::nio::ShortBuffer compact() const;
    int32_t compareTo(const ::java::nio::ShortBuffer&) const;
    ::java::nio::ShortBuffer duplicate() const;
    bool equals(const ::java::lang::Object&) const;
    int16_t get() const;
    ::java::nio::ShortBuffer get(const std::vector< int16_t>&) const;
    ::java::nio::ShortBuffer get(const std::vector< int16_t>&, int32_t, int32_t) const;
    int16_t get(int32_t) const;
    bool hasArray() const;
    int32_t hashCode() const;
    bool isDirect() const;
    ::java::nio::ByteOrder order() const;
    ::java::nio::ShortBuffer put(int16_t) const;
    ::java::nio::ShortBuffer put(const std::vector< int16_t>&) const;
    ::java::nio::ShortBuffer put(const std::vector< int16_t>&, int32_t, int32_t) const;
    ::java::nio::ShortBuffer put(const ::java::nio::ShortBuffer&) const;
    ::java::nio::ShortBuffer put(int32_t, int16_t) const;
    ::java::nio::ShortBuffer slice() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


