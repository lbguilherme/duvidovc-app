#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class Thread; } }

namespace java {
namespace util {
namespace concurrent {
class ThreadFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ThreadFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ThreadFactory(const ::java::util::concurrent::ThreadFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ThreadFactory(::java::util::concurrent::ThreadFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ThreadFactory& operator=(const ::java::util::concurrent::ThreadFactory& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ThreadFactory& operator=(::java::util::concurrent::ThreadFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Thread newThread(const ::java::lang::Runnable&) const;

};
}
}
}


