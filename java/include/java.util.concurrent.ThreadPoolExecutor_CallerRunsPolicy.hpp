#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.RejectedExecutionHandler.hpp"

namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class ThreadPoolExecutor; } } }

namespace java {
namespace util {
namespace concurrent {
class ThreadPoolExecutor_CallerRunsPolicy : public virtual ::java::lang::Object,
                                            public virtual ::java::util::concurrent::RejectedExecutionHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ThreadPoolExecutor_CallerRunsPolicy(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::RejectedExecutionHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ThreadPoolExecutor_CallerRunsPolicy(const ::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::RejectedExecutionHandler((jobject)0) {obj = x.obj;}
    ThreadPoolExecutor_CallerRunsPolicy(::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::RejectedExecutionHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy& operator=(const ::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy& operator=(::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy&& x) {obj = std::move(x.obj); return *this;}
    
    ThreadPoolExecutor_CallerRunsPolicy();
    void rejectedExecution(const ::java::lang::Runnable&, const ::java::util::concurrent::ThreadPoolExecutor&) const;

};
}
}
}


