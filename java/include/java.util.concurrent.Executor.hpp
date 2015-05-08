#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Runnable; } }

namespace java {
namespace util {
namespace concurrent {
class Executor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Executor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Executor(const ::java::util::concurrent::Executor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Executor(::java::util::concurrent::Executor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::Executor& operator=(const ::java::util::concurrent::Executor& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::Executor& operator=(::java::util::concurrent::Executor&& x) {obj = std::move(x.obj); return *this;}
    
    void execute(const ::java::lang::Runnable&) const ;

};
}
}
}


