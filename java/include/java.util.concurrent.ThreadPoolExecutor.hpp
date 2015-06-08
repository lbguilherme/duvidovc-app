#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.AbstractExecutorService.hpp"

namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { namespace concurrent { class BlockingQueue; } } }
namespace java { namespace util { namespace concurrent { class RejectedExecutionHandler; } } }
namespace java { namespace util { namespace concurrent { class ThreadFactory; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class ThreadPoolExecutor : public virtual ::java::lang::Object,
                           public virtual ::java::util::concurrent::AbstractExecutorService {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ThreadPoolExecutor(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::AbstractExecutorService(_obj), ::java::util::concurrent::Executor(_obj), ::java::util::concurrent::ExecutorService(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ThreadPoolExecutor(const ::java::util::concurrent::ThreadPoolExecutor& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {obj = x.obj;}
    ThreadPoolExecutor(::java::util::concurrent::ThreadPoolExecutor&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ThreadPoolExecutor& operator=(const ::java::util::concurrent::ThreadPoolExecutor& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ThreadPoolExecutor& operator=(::java::util::concurrent::ThreadPoolExecutor&& x) {obj = std::move(x.obj); return *this;}
    
    ThreadPoolExecutor(int32_t, int32_t, int64_t, const ::java::util::concurrent::TimeUnit&, const ::java::util::concurrent::BlockingQueue&);
    ThreadPoolExecutor(int32_t, int32_t, int64_t, const ::java::util::concurrent::TimeUnit&, const ::java::util::concurrent::BlockingQueue&, const ::java::util::concurrent::ThreadFactory&);
    ThreadPoolExecutor(int32_t, int32_t, int64_t, const ::java::util::concurrent::TimeUnit&, const ::java::util::concurrent::BlockingQueue&, const ::java::util::concurrent::RejectedExecutionHandler&);
    ThreadPoolExecutor(int32_t, int32_t, int64_t, const ::java::util::concurrent::TimeUnit&, const ::java::util::concurrent::BlockingQueue&, const ::java::util::concurrent::ThreadFactory&, const ::java::util::concurrent::RejectedExecutionHandler&);
    void execute(const ::java::lang::Runnable&) const;
    void shutdown() const;
    ::java::util::List shutdownNow() const;
    bool isShutdown() const;
    bool isTerminating() const;
    bool isTerminated() const;
    bool awaitTermination(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void setThreadFactory(const ::java::util::concurrent::ThreadFactory&) const;
    ::java::util::concurrent::ThreadFactory getThreadFactory() const;
    void setRejectedExecutionHandler(const ::java::util::concurrent::RejectedExecutionHandler&) const;
    ::java::util::concurrent::RejectedExecutionHandler getRejectedExecutionHandler() const;
    void setCorePoolSize(int32_t) const;
    int32_t getCorePoolSize() const;
    bool prestartCoreThread() const;
    int32_t prestartAllCoreThreads() const;
    bool allowsCoreThreadTimeOut() const;
    void allowCoreThreadTimeOut(bool) const;
    void setMaximumPoolSize(int32_t) const;
    int32_t getMaximumPoolSize() const;
    void setKeepAliveTime(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    int64_t getKeepAliveTime(const ::java::util::concurrent::TimeUnit&) const;
    ::java::util::concurrent::BlockingQueue getQueue() const;
    bool remove(const ::java::lang::Runnable&) const;
    void purge() const;
    int32_t getPoolSize() const;
    int32_t getActiveCount() const;
    int32_t getLargestPoolSize() const;
    int64_t getTaskCount() const;
    int64_t getCompletedTaskCount() const;
    ::java::lang::String toString() const;

};
}
}
}

#include "java.util.concurrent.ThreadPoolExecutor_AbortPolicy.hpp"
#include "java.util.concurrent.ThreadPoolExecutor_CallerRunsPolicy.hpp"
#include "java.util.concurrent.ThreadPoolExecutor_DiscardOldestPolicy.hpp"
#include "java.util.concurrent.ThreadPoolExecutor_DiscardPolicy.hpp"

