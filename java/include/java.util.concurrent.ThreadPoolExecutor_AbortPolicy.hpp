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
class ThreadPoolExecutor_AbortPolicy : public virtual ::java::lang::Object,
                                       public virtual ::java::util::concurrent::RejectedExecutionHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ThreadPoolExecutor_AbortPolicy(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::RejectedExecutionHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ThreadPoolExecutor_AbortPolicy(const ::java::util::concurrent::ThreadPoolExecutor_AbortPolicy& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::RejectedExecutionHandler((jobject)0) {obj = x.obj;}
    ThreadPoolExecutor_AbortPolicy(::java::util::concurrent::ThreadPoolExecutor_AbortPolicy&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::RejectedExecutionHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ThreadPoolExecutor_AbortPolicy& operator=(const ::java::util::concurrent::ThreadPoolExecutor_AbortPolicy& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ThreadPoolExecutor_AbortPolicy& operator=(::java::util::concurrent::ThreadPoolExecutor_AbortPolicy&& x) {obj = std::move(x.obj); return *this;}
    
    ThreadPoolExecutor_AbortPolicy();
    void rejectedExecution(const ::java::lang::Runnable&, const ::java::util::concurrent::ThreadPoolExecutor&) const;

};
}
}
}


