#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.ScheduledExecutorService.hpp"
#include "java.util.concurrent.ThreadPoolExecutor.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { namespace concurrent { class BlockingQueue; } } }
namespace java { namespace util { namespace concurrent { class Callable; } } }
namespace java { namespace util { namespace concurrent { class Future; } } }
namespace java { namespace util { namespace concurrent { class RejectedExecutionHandler; } } }
namespace java { namespace util { namespace concurrent { class ScheduledFuture; } } }
namespace java { namespace util { namespace concurrent { class ThreadFactory; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class ScheduledThreadPoolExecutor : public virtual ::java::lang::Object,
                                    public virtual ::java::util::concurrent::ScheduledExecutorService,
                                    public virtual ::java::util::concurrent::ThreadPoolExecutor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScheduledThreadPoolExecutor(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::AbstractExecutorService(_obj), ::java::util::concurrent::Executor(_obj), ::java::util::concurrent::ExecutorService(_obj), ::java::util::concurrent::ScheduledExecutorService(_obj), ::java::util::concurrent::ThreadPoolExecutor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScheduledThreadPoolExecutor(const ::java::util::concurrent::ScheduledThreadPoolExecutor& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0), ::java::util::concurrent::ScheduledExecutorService((jobject)0), ::java::util::concurrent::ThreadPoolExecutor((jobject)0) {obj = x.obj;}
    ScheduledThreadPoolExecutor(::java::util::concurrent::ScheduledThreadPoolExecutor&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0), ::java::util::concurrent::ScheduledExecutorService((jobject)0), ::java::util::concurrent::ThreadPoolExecutor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ScheduledThreadPoolExecutor& operator=(const ::java::util::concurrent::ScheduledThreadPoolExecutor& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ScheduledThreadPoolExecutor& operator=(::java::util::concurrent::ScheduledThreadPoolExecutor&& x) {obj = std::move(x.obj); return *this;}
    
    ScheduledThreadPoolExecutor(int32_t);
    ScheduledThreadPoolExecutor(int32_t, const ::java::util::concurrent::ThreadFactory&);
    ScheduledThreadPoolExecutor(int32_t, const ::java::util::concurrent::RejectedExecutionHandler&);
    ScheduledThreadPoolExecutor(int32_t, const ::java::util::concurrent::ThreadFactory&, const ::java::util::concurrent::RejectedExecutionHandler&);
    ::java::util::concurrent::ScheduledFuture schedule(const ::java::lang::Runnable&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::util::concurrent::ScheduledFuture schedule(const ::java::util::concurrent::Callable&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::util::concurrent::ScheduledFuture scheduleAtFixedRate(const ::java::lang::Runnable&, int64_t, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::util::concurrent::ScheduledFuture scheduleWithFixedDelay(const ::java::lang::Runnable&, int64_t, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void execute(const ::java::lang::Runnable&) const;
    ::java::util::concurrent::Future submit(const ::java::lang::Runnable&) const;
    ::java::util::concurrent::Future submit(const ::java::lang::Runnable&, const ::java::lang::Object&) const;
    ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable&) const;
    void setContinueExistingPeriodicTasksAfterShutdownPolicy(bool) const;
    bool getContinueExistingPeriodicTasksAfterShutdownPolicy() const;
    void setExecuteExistingDelayedTasksAfterShutdownPolicy(bool) const;
    bool getExecuteExistingDelayedTasksAfterShutdownPolicy() const;
    void shutdown() const;
    ::java::util::List shutdownNow() const;
    ::java::util::concurrent::BlockingQueue getQueue() const;

};
}
}
}


