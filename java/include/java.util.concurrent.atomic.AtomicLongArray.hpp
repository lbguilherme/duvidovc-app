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
class AtomicLongArray : public virtual ::java::lang::Object,
                        public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicLongArray(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicLongArray(const ::java::util::concurrent::atomic::AtomicLongArray& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AtomicLongArray(::java::util::concurrent::atomic::AtomicLongArray&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicLongArray& operator=(const ::java::util::concurrent::atomic::AtomicLongArray& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicLongArray& operator=(::java::util::concurrent::atomic::AtomicLongArray&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicLongArray(int32_t);
    AtomicLongArray(const std::vector< int64_t>&);
    int32_t length() const ;
    int64_t get(int32_t) const ;
    void set(int32_t, int64_t) const ;
    void lazySet(int32_t, int64_t) const ;
    int64_t getAndSet(int32_t, int64_t) const ;
    bool compareAndSet(int32_t, int64_t, int64_t) const ;
    bool weakCompareAndSet(int32_t, int64_t, int64_t) const ;
    int64_t getAndIncrement(int32_t) const ;
    int64_t getAndDecrement(int32_t) const ;
    int64_t getAndAdd(int32_t, int64_t) const ;
    int64_t incrementAndGet(int32_t) const ;
    int64_t decrementAndGet(int32_t) const ;
    int64_t addAndGet(int32_t, int64_t) const ;
    ::java::lang::String toString() const ;

};
}
}
}
}


