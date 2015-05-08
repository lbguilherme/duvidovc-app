#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.RunnableFuture.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class Callable; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class FutureTask : public virtual ::java::lang::Object,
                   public virtual ::java::util::concurrent::RunnableFuture {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FutureTask(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj), ::java::util::concurrent::Future(_obj), ::java::util::concurrent::RunnableFuture(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FutureTask(const ::java::util::concurrent::FutureTask& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::util::concurrent::Future((jobject)0), ::java::util::concurrent::RunnableFuture((jobject)0) {obj = x.obj;}
    FutureTask(::java::util::concurrent::FutureTask&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::util::concurrent::Future((jobject)0), ::java::util::concurrent::RunnableFuture((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::FutureTask& operator=(const ::java::util::concurrent::FutureTask& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::FutureTask& operator=(::java::util::concurrent::FutureTask&& x) {obj = std::move(x.obj); return *this;}
    
    FutureTask(const ::java::util::concurrent::Callable&);
    FutureTask(const ::java::lang::Runnable&, const ::java::lang::Object&);
    bool isCancelled() const ;
    bool isDone() const ;
    bool cancel(bool) const ;
    ::java::lang::Object get() const ;
    ::java::lang::Object get(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void run() const ;

};
}
}
}


