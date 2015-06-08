#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.concurrent.locks.AbstractOwnableSynchronizer.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { namespace concurrent { namespace locks { class AbstractQueuedLongSynchronizer_ConditionObject; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class AbstractQueuedLongSynchronizer : public virtual ::java::lang::Object,
                                       public virtual ::java::io::Serializable,
                                       public virtual ::java::util::concurrent::locks::AbstractOwnableSynchronizer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractQueuedLongSynchronizer(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::concurrent::locks::AbstractOwnableSynchronizer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractQueuedLongSynchronizer(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::AbstractOwnableSynchronizer((jobject)0) {obj = x.obj;}
    AbstractQueuedLongSynchronizer(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::AbstractOwnableSynchronizer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer& operator=(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer& operator=(::java::util::concurrent::locks::AbstractQueuedLongSynchronizer&& x) {obj = std::move(x.obj); return *this;}
    
    void acquire(int64_t) const;
    void acquireInterruptibly(int64_t) const;
    bool tryAcquireNanos(int64_t, int64_t) const;
    bool release(int64_t) const;
    void acquireShared(int64_t) const;
    void acquireSharedInterruptibly(int64_t) const;
    bool tryAcquireSharedNanos(int64_t, int64_t) const;
    bool releaseShared(int64_t) const;
    bool hasQueuedThreads() const;
    bool hasContended() const;
    ::java::lang::Thread getFirstQueuedThread() const;
    bool isQueued(const ::java::lang::Thread&) const;
    int32_t getQueueLength() const;
    ::java::util::Collection getQueuedThreads() const;
    ::java::util::Collection getExclusiveQueuedThreads() const;
    ::java::util::Collection getSharedQueuedThreads() const;
    ::java::lang::String toString() const;
    bool owns(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject&) const;
    bool hasWaiters(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject&) const;
    int32_t getWaitQueueLength(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject&) const;
    ::java::util::Collection getWaitingThreads(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject&) const;

};
}
}
}
}

#include "java.util.concurrent.locks.AbstractQueuedLongSynchronizer_ConditionObject.hpp"

