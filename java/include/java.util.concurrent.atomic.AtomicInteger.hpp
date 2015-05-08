#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Number.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace concurrent {
namespace atomic {
class AtomicInteger : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable,
                      public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicInteger(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicInteger(const ::java::util::concurrent::atomic::AtomicInteger& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    AtomicInteger(::java::util::concurrent::atomic::AtomicInteger&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicInteger& operator=(const ::java::util::concurrent::atomic::AtomicInteger& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicInteger& operator=(::java::util::concurrent::atomic::AtomicInteger&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicInteger(int32_t);
    AtomicInteger();
    int32_t get() const ;
    void set(int32_t) const ;
    void lazySet(int32_t) const ;
    int32_t getAndSet(int32_t) const ;
    bool compareAndSet(int32_t, int32_t) const ;
    bool weakCompareAndSet(int32_t, int32_t) const ;
    int32_t getAndIncrement() const ;
    int32_t getAndDecrement() const ;
    int32_t getAndAdd(int32_t) const ;
    int32_t incrementAndGet() const ;
    int32_t decrementAndGet() const ;
    int32_t addAndGet(int32_t) const ;
    ::java::lang::String toString() const ;
    int32_t intValue() const ;
    int64_t longValue() const ;
    float floatValue() const ;
    double doubleValue() const ;

};
}
}
}
}


