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
namespace java { namespace nio { class FloatBuffer; } }

namespace java {
namespace nio {
class FloatBuffer : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Comparable,
                    public virtual ::java::nio::Buffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FloatBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::nio::Buffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FloatBuffer(const ::java::nio::FloatBuffer& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj;}
    FloatBuffer(::java::nio::FloatBuffer&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::FloatBuffer& operator=(const ::java::nio::FloatBuffer& x) {obj = x.obj; return *this;}
    ::java::nio::FloatBuffer& operator=(::java::nio::FloatBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::FloatBuffer allocate(int32_t);
    static ::java::nio::FloatBuffer wrap(const std::vector< float>&);
    static ::java::nio::FloatBuffer wrap(const std::vector< float>&, int32_t, int32_t);
    std::vector< float> array() const;
    int32_t arrayOffset() const;
    ::java::nio::FloatBuffer asReadOnlyBuffer() const;
    ::java::nio::FloatBuffer compact() const;
    int32_t compareTo(const ::java::nio::FloatBuffer&) const;
    ::java::nio::FloatBuffer duplicate() const;
    bool equals(const ::java::lang::Object&) const;
    float get() const;
    ::java::nio::FloatBuffer get(const std::vector< float>&) const;
    ::java::nio::FloatBuffer get(const std::vector< float>&, int32_t, int32_t) const;
    float get(int32_t) const;
    bool hasArray() const;
    int32_t hashCode() const;
    bool isDirect() const;
    ::java::nio::ByteOrder order() const;
    ::java::nio::FloatBuffer put(float) const;
    ::java::nio::FloatBuffer put(const std::vector< float>&) const;
    ::java::nio::FloatBuffer put(const std::vector< float>&, int32_t, int32_t) const;
    ::java::nio::FloatBuffer put(const ::java::nio::FloatBuffer&) const;
    ::java::nio::FloatBuffer put(int32_t, float) const;
    ::java::nio::FloatBuffer slice() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


