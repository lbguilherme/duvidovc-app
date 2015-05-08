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
class PhantomReference : public virtual ::java::lang::Object,
                         public virtual ::java::lang::ref::Reference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PhantomReference(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::ref::Reference(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PhantomReference(const ::java::lang::ref::PhantomReference& x) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {obj = x.obj;}
    PhantomReference(::java::lang::ref::PhantomReference&& x) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ref::PhantomReference& operator=(const ::java::lang::ref::PhantomReference& x) {obj = x.obj; return *this;}
    ::java::lang::ref::PhantomReference& operator=(::java::lang::ref::PhantomReference&& x) {obj = std::move(x.obj); return *this;}
    
    PhantomReference(const ::java::lang::Object&, const ::java::lang::ref::ReferenceQueue&);
    ::java::lang::Object get() const ;

};
}
}
}


