#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace concurrent {
namespace atomic {
class AtomicIntegerArray : public virtual ::java::lang::Object,
                           public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicIntegerArray(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicIntegerArray(const ::java::util::concurrent::atomic::AtomicIntegerArray& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AtomicIntegerArray(::java::util::concurrent::atomic::AtomicIntegerArray&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicIntegerArray& operator=(const ::java::util::concurrent::atomic::AtomicIntegerArray& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicIntegerArray& operator=(::java::util::concurrent::atomic::AtomicIntegerArray&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicIntegerArray(int32_t);
    AtomicIntegerArray(const std::vector< int32_t>&);
    int32_t length() const;
    int32_t get(int32_t) const;
    void set(int32_t, int32_t) const;
    void lazySet(int32_t, int32_t) const;
    int32_t getAndSet(int32_t, int32_t) const;
    bool compareAndSet(int32_t, int32_t, int32_t) const;
    bool weakCompareAndSet(int32_t, int32_t, int32_t) const;
    int32_t getAndIncrement(int32_t) const;
    int32_t getAndDecrement(int32_t) const;
    int32_t getAndAdd(int32_t, int32_t) const;
    int32_t incrementAndGet(int32_t) const;
    int32_t decrementAndGet(int32_t) const;
    int32_t addAndGet(int32_t, int32_t) const;
    ::java::lang::String toString() const;

};
}
}
}
}


