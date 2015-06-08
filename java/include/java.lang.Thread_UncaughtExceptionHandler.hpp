#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Thread; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
class Thread_UncaughtExceptionHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Thread_UncaughtExceptionHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Thread_UncaughtExceptionHandler(const ::java::lang::Thread_UncaughtExceptionHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Thread_UncaughtExceptionHandler(::java::lang::Thread_UncaughtExceptionHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Thread_UncaughtExceptionHandler& operator=(const ::java::lang::Thread_UncaughtExceptionHandler& x) {obj = x.obj; return *this;}
    ::java::lang::Thread_UncaughtExceptionHandler& operator=(::java::lang::Thread_UncaughtExceptionHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void uncaughtException(const ::java::lang::Thread&, const ::java::lang::Throwable&) const;

};
}
}


