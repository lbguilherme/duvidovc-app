#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.ThreadLocal.hpp"


namespace java {
namespace lang {
class InheritableThreadLocal : public virtual ::java::lang::Object,
                               public virtual ::java::lang::ThreadLocal {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InheritableThreadLocal(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::ThreadLocal(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InheritableThreadLocal(const ::java::lang::InheritableThreadLocal& x) : ::java::lang::Object((jobject)0), ::java::lang::ThreadLocal((jobject)0) {obj = x.obj;}
    InheritableThreadLocal(::java::lang::InheritableThreadLocal&& x) : ::java::lang::Object((jobject)0), ::java::lang::ThreadLocal((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::InheritableThreadLocal& operator=(const ::java::lang::InheritableThreadLocal& x) {obj = x.obj; return *this;}
    ::java::lang::InheritableThreadLocal& operator=(::java::lang::InheritableThreadLocal&& x) {obj = std::move(x.obj); return *this;}
    
    InheritableThreadLocal();

};
}
}


