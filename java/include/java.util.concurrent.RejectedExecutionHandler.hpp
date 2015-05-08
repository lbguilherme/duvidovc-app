#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class ThreadPoolExecutor; } } }

namespace java {
namespace util {
namespace concurrent {
class RejectedExecutionHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RejectedExecutionHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RejectedExecutionHandler(const ::java::util::concurrent::RejectedExecutionHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RejectedExecutionHandler(::java::util::concurrent::RejectedExecutionHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::RejectedExecutionHandler& operator=(const ::java::util::concurrent::RejectedExecutionHandler& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::RejectedExecutionHandler& operator=(::java::util::concurrent::RejectedExecutionHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void rejectedExecution(const ::java::lang::Runnable&, const ::java::util::concurrent::ThreadPoolExecutor&) const ;

};
}
}
}


