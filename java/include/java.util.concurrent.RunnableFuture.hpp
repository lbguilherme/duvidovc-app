#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.util.concurrent.Future.hpp"


namespace java {
namespace util {
namespace concurrent {
class RunnableFuture : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Runnable,
                       public virtual ::java::util::concurrent::Future {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RunnableFuture(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj), ::java::util::concurrent::Future(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RunnableFuture(const ::java::util::concurrent::RunnableFuture& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::util::concurrent::Future((jobject)0) {obj = x.obj;}
    RunnableFuture(::java::util::concurrent::RunnableFuture&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::util::concurrent::Future((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::RunnableFuture& operator=(const ::java::util::concurrent::RunnableFuture& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::RunnableFuture& operator=(::java::util::concurrent::RunnableFuture&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const;

};
}
}
}


