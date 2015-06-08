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
namespace java { namespace nio { class LongBuffer; } }

namespace java {
namespace nio {
class LongBuffer : public virtual ::java::lang::Object,
                   public virtual ::java::lang::Comparable,
                   public virtual ::java::nio::Buffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LongBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::nio::Buffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LongBuffer(const ::java::nio::LongBuffer& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj;}
    LongBuffer(::java::nio::LongBuffer&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::LongBuffer& operator=(const ::java::nio::LongBuffer& x) {obj = x.obj; return *this;}
    ::java::nio::LongBuffer& operator=(::java::nio::LongBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::LongBuffer allocate(int32_t);
    static ::java::nio::LongBuffer wrap(const std::vector< int64_t>&);
    static ::java::nio::LongBuffer wrap(const std::vector< int64_t>&, int32_t, int32_t);
    std::vector< int64_t> array() const;
    int32_t arrayOffset() const;
    ::java::nio::LongBuffer asReadOnlyBuffer() const;
    ::java::nio::LongBuffer compact() const;
    int32_t compareTo(const ::java::nio::LongBuffer&) const;
    ::java::nio::LongBuffer duplicate() const;
    bool equals(const ::java::lang::Object&) const;
    int64_t get() const;
    ::java::nio::LongBuffer get(const std::vector< int64_t>&) const;
    ::java::nio::LongBuffer get(const std::vector< int64_t>&, int32_t, int32_t) const;
    int64_t get(int32_t) const;
    bool hasArray() const;
    int32_t hashCode() const;
    bool isDirect() const;
    ::java::nio::ByteOrder order() const;
    ::java::nio::LongBuffer put(int64_t) const;
    ::java::nio::LongBuffer put(const std::vector< int64_t>&) const;
    ::java::nio::LongBuffer put(const std::vector< int64_t>&, int32_t, int32_t) const;
    ::java::nio::LongBuffer put(const ::java::nio::LongBuffer&) const;
    ::java::nio::LongBuffer put(int32_t, int64_t) const;
    ::java::nio::LongBuffer slice() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


