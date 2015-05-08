#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.ExecutorService.hpp"

namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class Callable; } } }
namespace java { namespace util { namespace concurrent { class ScheduledFuture; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class ScheduledExecutorService : public virtual ::java::lang::Object,
                                 public virtual ::java::util::concurrent::ExecutorService {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScheduledExecutorService(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::Executor(_obj), ::java::util::concurrent::ExecutorService(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScheduledExecutorService(const ::java::util::concurrent::ScheduledExecutorService& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {obj = x.obj;}
    ScheduledExecutorService(::java::util::concurrent::ScheduledExecutorService&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ScheduledExecutorService& operator=(const ::java::util::concurrent::ScheduledExecutorService& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ScheduledExecutorService& operator=(::java::util::concurrent::ScheduledExecutorService&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::concurrent::ScheduledFuture schedule(const ::java::lang::Runnable&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::java::util::concurrent::ScheduledFuture schedule(const ::java::util::concurrent::Callable&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::java::util::concurrent::ScheduledFuture scheduleAtFixedRate(const ::java::lang::Runnable&, int64_t, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::java::util::concurrent::ScheduledFuture scheduleWithFixedDelay(const ::java::lang::Runnable&, int64_t, int64_t, const ::java::util::concurrent::TimeUnit&) const ;

};
}
}
}


