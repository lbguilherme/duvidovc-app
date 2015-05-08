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
namespace java { namespace nio { class DoubleBuffer; } }

namespace java {
namespace nio {
class DoubleBuffer : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Comparable,
                     public virtual ::java::nio::Buffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DoubleBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::nio::Buffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DoubleBuffer(const ::java::nio::DoubleBuffer& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj;}
    DoubleBuffer(::java::nio::DoubleBuffer&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::DoubleBuffer& operator=(const ::java::nio::DoubleBuffer& x) {obj = x.obj; return *this;}
    ::java::nio::DoubleBuffer& operator=(::java::nio::DoubleBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::DoubleBuffer allocate(int32_t);
    static ::java::nio::DoubleBuffer wrap(const std::vector< double>&);
    static ::java::nio::DoubleBuffer wrap(const std::vector< double>&, int32_t, int32_t);
    std::vector< double> array() const ;
    int32_t arrayOffset() const ;
    ::java::nio::DoubleBuffer asReadOnlyBuffer() const ;
    ::java::nio::DoubleBuffer compact() const ;
    int32_t compareTo(const ::java::nio::DoubleBuffer&) const ;
    ::java::nio::DoubleBuffer duplicate() const ;
    bool equals(const ::java::lang::Object&) const ;
    double get() const ;
    ::java::nio::DoubleBuffer get(const std::vector< double>&) const ;
    ::java::nio::DoubleBuffer get(const std::vector< double>&, int32_t, int32_t) const ;
    double get(int32_t) const ;
    bool hasArray() const ;
    int32_t hashCode() const ;
    bool isDirect() const ;
    ::java::nio::ByteOrder order() const ;
    ::java::nio::DoubleBuffer put(double) const ;
    ::java::nio::DoubleBuffer put(const std::vector< double>&) const ;
    ::java::nio::DoubleBuffer put(const std::vector< double>&, int32_t, int32_t) const ;
    ::java::nio::DoubleBuffer put(const ::java::nio::DoubleBuffer&) const ;
    ::java::nio::DoubleBuffer put(int32_t, double) const ;
    ::java::nio::DoubleBuffer slice() const ;
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}


