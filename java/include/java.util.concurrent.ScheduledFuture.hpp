#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.Delayed.hpp"
#include "java.util.concurrent.Future.hpp"


namespace java {
namespace util {
namespace concurrent {
class ScheduledFuture : public virtual ::java::lang::Object,
                        public virtual ::java::util::concurrent::Delayed,
                        public virtual ::java::util::concurrent::Future {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScheduledFuture(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::util::concurrent::Delayed(_obj), ::java::util::concurrent::Future(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScheduledFuture(const ::java::util::concurrent::ScheduledFuture& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::concurrent::Delayed((jobject)0), ::java::util::concurrent::Future((jobject)0) {obj = x.obj;}
    ScheduledFuture(::java::util::concurrent::ScheduledFuture&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::concurrent::Delayed((jobject)0), ::java::util::concurrent::Future((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ScheduledFuture& operator=(const ::java::util::concurrent::ScheduledFuture& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ScheduledFuture& operator=(::java::util::concurrent::ScheduledFuture&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


