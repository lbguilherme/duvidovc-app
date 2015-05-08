#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.RunnableFuture.hpp"
#include "java.util.concurrent.ScheduledFuture.hpp"


namespace java {
namespace util {
namespace concurrent {
class RunnableScheduledFuture : public virtual ::java::lang::Object,
                                public virtual ::java::util::concurrent::RunnableFuture,
                                public virtual ::java::util::concurrent::ScheduledFuture {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RunnableScheduledFuture(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj), ::java::lang::Runnable(_obj), ::java::util::concurrent::Delayed(_obj), ::java::util::concurrent::Future(_obj), ::java::util::concurrent::RunnableFuture(_obj), ::java::util::concurrent::ScheduledFuture(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RunnableScheduledFuture(const ::java::util::concurrent::RunnableScheduledFuture& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Runnable((jobject)0), ::java::util::concurrent::Delayed((jobject)0), ::java::util::concurrent::Future((jobject)0), ::java::util::concurrent::RunnableFuture((jobject)0), ::java::util::concurrent::ScheduledFuture((jobject)0) {obj = x.obj;}
    RunnableScheduledFuture(::java::util::concurrent::RunnableScheduledFuture&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Runnable((jobject)0), ::java::util::concurrent::Delayed((jobject)0), ::java::util::concurrent::Future((jobject)0), ::java::util::concurrent::RunnableFuture((jobject)0), ::java::util::concurrent::ScheduledFuture((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::RunnableScheduledFuture& operator=(const ::java::util::concurrent::RunnableScheduledFuture& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::RunnableScheduledFuture& operator=(::java::util::concurrent::RunnableScheduledFuture&& x) {obj = std::move(x.obj); return *this;}
    
    bool isPeriodic() const ;

};
}
}
}


