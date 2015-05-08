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
class AtomicBoolean : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AtomicBoolean(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AtomicBoolean(const ::java::util::concurrent::atomic::AtomicBoolean& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AtomicBoolean(::java::util::concurrent::atomic::AtomicBoolean&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::atomic::AtomicBoolean& operator=(const ::java::util::concurrent::atomic::AtomicBoolean& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::atomic::AtomicBoolean& operator=(::java::util::concurrent::atomic::AtomicBoolean&& x) {obj = std::move(x.obj); return *this;}
    
    AtomicBoolean(bool);
    AtomicBoolean();
    bool get() const ;
    bool compareAndSet(bool, bool) const ;
    bool weakCompareAndSet(bool, bool) const ;
    void set(bool) const ;
    void lazySet(bool) const ;
    bool getAndSet(bool) const ;
    ::java::lang::String toString() const ;

};
}
}
}
}


