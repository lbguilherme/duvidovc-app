#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.concurrent.locks.Condition.hpp"

namespace java { namespace util { class Date; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace java { namespace util { namespace concurrent { namespace locks { class AbstractQueuedSynchronizer; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class AbstractQueuedSynchronizer_ConditionObject : public virtual ::java::lang::Object,
                                                   public virtual ::java::io::Serializable,
                                                   public virtual ::java::util::concurrent::locks::Condition {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractQueuedSynchronizer_ConditionObject(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::concurrent::locks::Condition(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractQueuedSynchronizer_ConditionObject(const ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Condition((jobject)0) {obj = x.obj;}
    AbstractQueuedSynchronizer_ConditionObject(::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Condition((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject& operator=(const ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject& operator=(::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractQueuedSynchronizer_ConditionObject(const ::java::util::concurrent::locks::AbstractQueuedSynchronizer&);
    void signal() const ;
    void signalAll() const ;
    void awaitUninterruptibly() const ;
    void await() const ;
    int64_t awaitNanos(int64_t) const ;
    bool awaitUntil(const ::java::util::Date&) const ;
    bool await(int64_t, const ::java::util::concurrent::TimeUnit&) const ;

};
}
}
}
}


