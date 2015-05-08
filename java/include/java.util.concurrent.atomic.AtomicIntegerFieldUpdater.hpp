#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace concurrent { namespace atomic { class AtomicIntegerFieldUpdater; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace atomic {
class AtomicIntegerFieldUpdater : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicIntegerFieldUpdater(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicIntegerFieldUpdater(const ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AtomicIntegerFieldUpdater(::java::util::concurrent::atomic::AtomicIntegerFieldUpdater&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater& operator=(const ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater& operator=(::java::util::concurrent::atomic::AtomicIntegerFieldUpdater&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater newUpdater(const ::java::lang::Class&, const ::java::lang::String&);
    bool compareAndSet(const ::java::lang::Object&, int32_t, int32_t) const ;
    bool weakCompareAndSet(const ::java::lang::Object&, int32_t, int32_t) const ;
    void set(const ::java::lang::Object&, int32_t) const ;
    void lazySet(const ::java::lang::Object&, int32_t) const ;
    int32_t get(const ::java::lang::Object&) const ;
    int32_t getAndSet(const ::java::lang::Object&, int32_t) const ;
    int32_t getAndIncrement(const ::java::lang::Object&) const ;
    int32_t getAndDecrement(const ::java::lang::Object&) const ;
    int32_t getAndAdd(const ::java::lang::Object&, int32_t) const ;
    int32_t incrementAndGet(const ::java::lang::Object&) const ;
    int32_t decrementAndGet(const ::java::lang::Object&) const ;
    int32_t addAndGet(const ::java::lang::Object&, int32_t) const ;

};
}
}
}
}


