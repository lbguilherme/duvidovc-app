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
class AtomicLong : public virtual ::java::lang::Object,
                   public virtual ::java::io::Serializable,
                   public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicLong(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicLong(const ::java::util::concurrent::atomic::AtomicLong& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    AtomicLong(::java::util::concurrent::atomic::AtomicLong&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicLong& operator=(const ::java::util::concurrent::atomic::AtomicLong& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicLong& operator=(::java::util::concurrent::atomic::AtomicLong&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicLong(int64_t);
    AtomicLong();
    int64_t get() const ;
    void set(int64_t) const ;
    void lazySet(int64_t) const ;
    int64_t getAndSet(int64_t) const ;
    bool compareAndSet(int64_t, int64_t) const ;
    bool weakCompareAndSet(int64_t, int64_t) const ;
    int64_t getAndIncrement() const ;
    int64_t getAndDecrement() const ;
    int64_t getAndAdd(int64_t) const ;
    int64_t incrementAndGet() const ;
    int64_t decrementAndGet() const ;
    int64_t addAndGet(int64_t) const ;
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


