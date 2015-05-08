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
class AtomicReference : public virtual ::java::lang::Object,
                        public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicReference(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicReference(const ::java::util::concurrent::atomic::AtomicReference& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AtomicReference(::java::util::concurrent::atomic::AtomicReference&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicReference& operator=(const ::java::util::concurrent::atomic::AtomicReference& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicReference& operator=(::java::util::concurrent::atomic::AtomicReference&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicReference(const ::java::lang::Object&);
    AtomicReference();
    ::java::lang::Object get() const ;
    void set(const ::java::lang::Object&) const ;
    void lazySet(const ::java::lang::Object&) const ;
    bool compareAndSet(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    bool weakCompareAndSet(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    ::java::lang::Object getAndSet(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;

};
}
}
}
}


