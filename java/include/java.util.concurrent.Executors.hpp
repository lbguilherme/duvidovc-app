#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace security { class PrivilegedAction; } }
namespace java { namespace security { class PrivilegedExceptionAction; } }
namespace java { namespace util { namespace concurrent { class Callable; } } }
namespace java { namespace util { namespace concurrent { class ExecutorService; } } }
namespace java { namespace util { namespace concurrent { class ScheduledExecutorService; } } }
namespace java { namespace util { namespace concurrent { class ThreadFactory; } } }

namespace java {
namespace util {
namespace concurrent {
class Executors : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Executors(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Executors(const ::java::util::concurrent::Executors& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Executors(::java::util::concurrent::Executors&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::Executors& operator=(const ::java::util::concurrent::Executors& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::Executors& operator=(::java::util::concurrent::Executors&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::concurrent::ExecutorService newFixedThreadPool(int32_t);
    static ::java::util::concurrent::ExecutorService newFixedThreadPool(int32_t, const ::java::util::concurrent::ThreadFactory&);
    static ::java::util::concurrent::ExecutorService newSingleThreadExecutor();
    static ::java::util::concurrent::ExecutorService newSingleThreadExecutor(const ::java::util::concurrent::ThreadFactory&);
    static ::java::util::concurrent::ExecutorService newCachedThreadPool();
    static ::java::util::concurrent::ExecutorService newCachedThreadPool(const ::java::util::concurrent::ThreadFactory&);
    static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor();
    static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor(const ::java::util::concurrent::ThreadFactory&);
    static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(int32_t);
    static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(int32_t, const ::java::util::concurrent::ThreadFactory&);
    static ::java::util::concurrent::ExecutorService unconfigurableExecutorService(const ::java::util::concurrent::ExecutorService&);
    static ::java::util::concurrent::ScheduledExecutorService unconfigurableScheduledExecutorService(const ::java::util::concurrent::ScheduledExecutorService&);
    static ::java::util::concurrent::ThreadFactory defaultThreadFactory();
    static ::java::util::concurrent::ThreadFactory privilegedThreadFactory();
    static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable&, const ::java::lang::Object&);
    static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable&);
    static ::java::util::concurrent::Callable callable(const ::java::security::PrivilegedAction&);
    static ::java::util::concurrent::Callable callable(const ::java::security::PrivilegedExceptionAction&);
    static ::java::util::concurrent::Callable privilegedCallable(const ::java::util::concurrent::Callable&);
    static ::java::util::concurrent::Callable privilegedCallableUsingCurrentClassLoader(const ::java::util::concurrent::Callable&);

};
}
}
}


