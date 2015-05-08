#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class Callable; } } }
namespace java { namespace util { namespace concurrent { class Future; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class CompletionService : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CompletionService(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CompletionService(const ::java::util::concurrent::CompletionService& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CompletionService(::java::util::concurrent::CompletionService&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::CompletionService& operator=(const ::java::util::concurrent::CompletionService& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::CompletionService& operator=(::java::util::concurrent::CompletionService&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable&) const ;
    ::java::util::concurrent::Future submit(const ::java::lang::Runnable&, const ::java::lang::Object&) const ;
    ::java::util::concurrent::Future take() const ;
    ::java::util::concurrent::Future poll() const ;
    ::java::util::concurrent::Future poll(int64_t, const ::java::util::concurrent::TimeUnit&) const ;

};
}
}
}


