#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.ref.Reference.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { namespace ref { class ReferenceQueue; } } }

namespace java {
namespace lang {
namespace ref {
class SoftReference : public virtual ::java::lang::Object,
                      public virtual ::java::lang::ref::Reference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SoftReference(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::ref::Reference(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SoftReference(const ::java::lang::ref::SoftReference& x) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {obj = x.obj;}
    SoftReference(::java::lang::ref::SoftReference&& x) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ref::SoftReference& operator=(const ::java::lang::ref::SoftReference& x) {obj = x.obj; return *this;}
    ::java::lang::ref::SoftReference& operator=(::java::lang::ref::SoftReference&& x) {obj = std::move(x.obj); return *this;}
    
    SoftReference(const ::java::lang::Object&);
    SoftReference(const ::java::lang::Object&, const ::java::lang::ref::ReferenceQueue&);

};
}
}
}


