#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class Future : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Future(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Future(const ::java::util::concurrent::Future& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Future(::java::util::concurrent::Future&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::Future& operator=(const ::java::util::concurrent::Future& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::Future& operator=(::java::util::concurrent::Future&& x) {obj = std::move(x.obj); return *this;}
    
    bool cancel(bool) const ;
    bool isCancelled() const ;
    bool isDone() const ;
    ::java::lang::Object get() const ;
    ::java::lang::Object get(int64_t, const ::java::util::concurrent::TimeUnit&) const ;

};
}
}
}


