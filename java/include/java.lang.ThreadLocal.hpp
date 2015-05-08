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
class ThreadLocal : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ThreadLocal(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ThreadLocal(const ::java::lang::ThreadLocal& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ThreadLocal(::java::lang::ThreadLocal&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ThreadLocal& operator=(const ::java::lang::ThreadLocal& x) {obj = x.obj; return *this;}
    ::java::lang::ThreadLocal& operator=(::java::lang::ThreadLocal&& x) {obj = std::move(x.obj); return *this;}
    
    ThreadLocal();
    ::java::lang::Object get() const ;
    void set(const ::java::lang::Object&) const ;
    void remove() const ;

};
}
}


