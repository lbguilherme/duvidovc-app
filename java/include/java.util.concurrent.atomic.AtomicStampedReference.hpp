#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace util {
namespace concurrent {
namespace atomic {
class AtomicStampedReference : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicStampedReference(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicStampedReference(const ::java::util::concurrent::atomic::AtomicStampedReference& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AtomicStampedReference(::java::util::concurrent::atomic::AtomicStampedReference&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicStampedReference& operator=(const ::java::util::concurrent::atomic::AtomicStampedReference& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicStampedReference& operator=(::java::util::concurrent::atomic::AtomicStampedReference&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicStampedReference(const ::java::lang::Object&, int32_t);
    ::java::lang::Object getReference() const;
    int32_t getStamp() const;
    ::java::lang::Object get(const std::vector< int32_t>&) const;
    bool weakCompareAndSet(const ::java::lang::Object&, const ::java::lang::Object&, int32_t, int32_t) const;
    bool compareAndSet(const ::java::lang::Object&, const ::java::lang::Object&, int32_t, int32_t) const;
    void set(const ::java::lang::Object&, int32_t) const;
    bool attemptStamp(const ::java::lang::Object&, int32_t) const;

};
}
}
}
}


