#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace lang {
namespace ref {
class Reference : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Reference(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Reference(const ::java::lang::ref::Reference& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Reference(::java::lang::ref::Reference&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ref::Reference& operator=(const ::java::lang::ref::Reference& x) {obj = x.obj; return *this;}
    ::java::lang::ref::Reference& operator=(::java::lang::ref::Reference&& x) {obj = std::move(x.obj); return *this;}
    
    void clear() const ;
    bool enqueue() const ;
    ::java::lang::Object get() const ;
    bool isEnqueued() const ;

};
}
}
}


