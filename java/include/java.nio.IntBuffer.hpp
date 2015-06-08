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
namespace java { namespace nio { class IntBuffer; } }

namespace java {
namespace nio {
class IntBuffer : public virtual ::java::lang::Object,
                  public virtual ::java::lang::Comparable,
                  public virtual ::java::nio::Buffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::nio::Buffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntBuffer(const ::java::nio::IntBuffer& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj;}
    IntBuffer(::java::nio::IntBuffer&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::IntBuffer& operator=(const ::java::nio::IntBuffer& x) {obj = x.obj; return *this;}
    ::java::nio::IntBuffer& operator=(::java::nio::IntBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::IntBuffer allocate(int32_t);
    static ::java::nio::IntBuffer wrap(const std::vector< int32_t>&);
    static ::java::nio::IntBuffer wrap(const std::vector< int32_t>&, int32_t, int32_t);
    std::vector< int32_t> array() const;
    int32_t arrayOffset() const;
    ::java::nio::IntBuffer asReadOnlyBuffer() const;
    ::java::nio::IntBuffer compact() const;
    int32_t compareTo(const ::java::nio::IntBuffer&) const;
    ::java::nio::IntBuffer duplicate() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t get() const;
    ::java::nio::IntBuffer get(const std::vector< int32_t>&) const;
    ::java::nio::IntBuffer get(const std::vector< int32_t>&, int32_t, int32_t) const;
    int32_t get(int32_t) const;
    bool hasArray() const;
    int32_t hashCode() const;
    bool isDirect() const;
    ::java::nio::ByteOrder order() const;
    ::java::nio::IntBuffer put(int32_t) const;
    ::java::nio::IntBuffer put(const std::vector< int32_t>&) const;
    ::java::nio::IntBuffer put(const std::vector< int32_t>&, int32_t, int32_t) const;
    ::java::nio::IntBuffer put(const ::java::nio::IntBuffer&) const;
    ::java::nio::IntBuffer put(int32_t, int32_t) const;
    ::java::nio::IntBuffer slice() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


