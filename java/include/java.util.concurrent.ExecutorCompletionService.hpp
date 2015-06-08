#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.CompletionService.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class BlockingQueue; } } }
namespace java { namespace util { namespace concurrent { class Callable; } } }
namespace java { namespace util { namespace concurrent { class Executor; } } }
namespace java { namespace util { namespace concurrent { class Future; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class ExecutorCompletionService : public virtual ::java::lang::Object,
                                  public virtual ::java::util::concurrent::CompletionService {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExecutorCompletionService(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::CompletionService(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExecutorCompletionService(const ::java::util::concurrent::ExecutorCompletionService& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::CompletionService((jobject)0) {obj = x.obj;}
    ExecutorCompletionService(::java::util::concurrent::ExecutorCompletionService&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::CompletionService((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ExecutorCompletionService& operator=(const ::java::util::concurrent::ExecutorCompletionService& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ExecutorCompletionService& operator=(::java::util::concurrent::ExecutorCompletionService&& x) {obj = std::move(x.obj); return *this;}
    
    ExecutorCompletionService(const ::java::util::concurrent::Executor&);
    ExecutorCompletionService(const ::java::util::concurrent::Executor&, const ::java::util::concurrent::BlockingQueue&);
    ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable&) const;
    ::java::util::concurrent::Future submit(const ::java::lang::Runnable&, const ::java::lang::Object&) const;
    ::java::util::concurrent::Future take() const;
    ::java::util::concurrent::Future poll() const;
    ::java::util::concurrent::Future poll(int64_t, const ::java::util::concurrent::TimeUnit&) const;

};
}
}
}


