#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.ExecutorService.hpp"

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
class AbstractExecutorService : public virtual ::java::lang::Object,
                                public virtual ::java::util::concurrent::ExecutorService {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractExecutorService(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::Executor(_obj), ::java::util::concurrent::ExecutorService(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractExecutorService(const ::java::util::concurrent::AbstractExecutorService& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {obj = x.obj;}
    AbstractExecutorService(::java::util::concurrent::AbstractExecutorService&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::AbstractExecutorService& operator=(const ::java::util::concurrent::AbstractExecutorService& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::AbstractExecutorService& operator=(::java::util::concurrent::AbstractExecutorService&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractExecutorService();
    ::java::util::concurrent::Future submit(const ::java::lang::Runnable&) const;
    ::java::util::concurrent::Future submit(const ::java::lang::Runnable&, const ::java::lang::Object&) const;
    ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable&) const;
    ::java::lang::Object invokeAny(const ::java::util::Collection&) const;
    ::java::lang::Object invokeAny(const ::java::util::Collection&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::util::List invokeAll(const ::java::util::Collection&) const;
    ::java::util::List invokeAll(const ::java::util::Collection&, int64_t, const ::java::util::concurrent::TimeUnit&) const;

};
}
}
}


