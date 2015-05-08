#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.Executor.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { namespace concurrent { class Callable; } } }
namespace java { namespace util { namespace concurrent { class Future; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class ExecutorService : public virtual ::java::lang::Object,
                        public virtual ::java::util::concurrent::Executor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExecutorService(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::Executor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExecutorService(const ::java::util::concurrent::ExecutorService& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0) {obj = x.obj;}
    ExecutorService(::java::util::concurrent::ExecutorService&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ExecutorService& operator=(const ::java::util::concurrent::ExecutorService& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ExecutorService& operator=(::java::util::concurrent::ExecutorService&& x) {obj = std::move(x.obj); return *this;}
    
    void shutdown() const ;
    ::java::util::List shutdownNow() const ;
    bool isShutdown() const ;
    bool isTerminated() const ;
    bool awaitTermination(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable&) const ;
    ::java::util::concurrent::Future submit(const ::java::lang::Runnable&, const ::java::lang::Object&) const ;
    ::java::util::concurrent::Future submit(const ::java::lang::Runnable&) const ;
    ::java::util::List invokeAll(const ::java::util::Collection&) const ;
    ::java::util::List invokeAll(const ::java::util::Collection&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::java::lang::Object invokeAny(const ::java::util::Collection&) const ;
    ::java::lang::Object invokeAny(const ::java::util::Collection&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;

};
}
}
}


