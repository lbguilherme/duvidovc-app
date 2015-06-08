#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace concurrent {
namespace atomic {
class AtomicReferenceArray : public virtual ::java::lang::Object,
                             public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicReferenceArray(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicReferenceArray(const ::java::util::concurrent::atomic::AtomicReferenceArray& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AtomicReferenceArray(::java::util::concurrent::atomic::AtomicReferenceArray&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicReferenceArray& operator=(const ::java::util::concurrent::atomic::AtomicReferenceArray& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicReferenceArray& operator=(::java::util::concurrent::atomic::AtomicReferenceArray&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicReferenceArray(int32_t);
    AtomicReferenceArray(const std::vector< ::java::lang::Object>&);
    int32_t length() const;
    ::java::lang::Object get(int32_t) const;
    void set(int32_t, const ::java::lang::Object&) const;
    void lazySet(int32_t, const ::java::lang::Object&) const;
    ::java::lang::Object getAndSet(int32_t, const ::java::lang::Object&) const;
    bool compareAndSet(int32_t, const ::java::lang::Object&, const ::java::lang::Object&) const;
    bool weakCompareAndSet(int32_t, const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


