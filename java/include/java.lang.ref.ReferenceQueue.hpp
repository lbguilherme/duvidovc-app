#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { namespace ref { class Reference; } } }

namespace java {
namespace lang {
namespace ref {
class ReferenceQueue : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReferenceQueue(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReferenceQueue(const ::java::lang::ref::ReferenceQueue& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ReferenceQueue(::java::lang::ref::ReferenceQueue&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ref::ReferenceQueue& operator=(const ::java::lang::ref::ReferenceQueue& x) {obj = x.obj; return *this;}
    ::java::lang::ref::ReferenceQueue& operator=(::java::lang::ref::ReferenceQueue&& x) {obj = std::move(x.obj); return *this;}
    
    ReferenceQueue();
    ::java::lang::ref::Reference poll() const ;
    ::java::lang::ref::Reference remove() const ;
    ::java::lang::ref::Reference remove(int64_t) const ;

};
}
}
}


