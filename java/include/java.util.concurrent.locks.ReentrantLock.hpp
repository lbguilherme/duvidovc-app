#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.concurrent.locks.Lock.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class ReentrantLock : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable,
                      public virtual ::java::util::concurrent::locks::Lock {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReentrantLock(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::concurrent::locks::Lock(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReentrantLock(const ::java::util::concurrent::locks::ReentrantLock& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Lock((jobject)0) {obj = x.obj;}
    ReentrantLock(::java::util::concurrent::locks::ReentrantLock&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Lock((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::ReentrantLock& operator=(const ::java::util::concurrent::locks::ReentrantLock& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::ReentrantLock& operator=(::java::util::concurrent::locks::ReentrantLock&& x) {obj = std::move(x.obj); return *this;}
    
    ReentrantLock();
    ReentrantLock(bool);
    void lock() const;
    void lockInterruptibly() const;
    bool tryLock() const;
    bool tryLock(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void unlock() const;
    ::java::util::concurrent::locks::Condition newCondition() const;
    int32_t getHoldCount() const;
    bool isHeldByCurrentThread() const;
    bool isLocked() const;
    bool isFair() const;
    bool hasQueuedThreads() const;
    bool hasQueuedThread(const ::java::lang::Thread&) const;
    int32_t getQueueLength() const;
    bool hasWaiters(const ::java::util::concurrent::locks::Condition&) const;
    int32_t getWaitQueueLength(const ::java::util::concurrent::locks::Condition&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


