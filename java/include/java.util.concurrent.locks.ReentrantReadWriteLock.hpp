#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.concurrent.locks.ReadWriteLock.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }
namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } }
namespace java { namespace util { namespace concurrent { namespace locks { class ReentrantReadWriteLock_ReadLock; } } } }
namespace java { namespace util { namespace concurrent { namespace locks { class ReentrantReadWriteLock_WriteLock; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class ReentrantReadWriteLock : public virtual ::java::lang::Object,
                               public virtual ::java::io::Serializable,
                               public virtual ::java::util::concurrent::locks::ReadWriteLock {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReentrantReadWriteLock(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::concurrent::locks::ReadWriteLock(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReentrantReadWriteLock(const ::java::util::concurrent::locks::ReentrantReadWriteLock& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::ReadWriteLock((jobject)0) {obj = x.obj;}
    ReentrantReadWriteLock(::java::util::concurrent::locks::ReentrantReadWriteLock&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::ReadWriteLock((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::ReentrantReadWriteLock& operator=(const ::java::util::concurrent::locks::ReentrantReadWriteLock& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::ReentrantReadWriteLock& operator=(::java::util::concurrent::locks::ReentrantReadWriteLock&& x) {obj = std::move(x.obj); return *this;}
    
    ReentrantReadWriteLock();
    ReentrantReadWriteLock(bool);
    ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock writeLock() const ;
    ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock readLock() const ;
    bool isFair() const ;
    int32_t getReadLockCount() const ;
    bool isWriteLocked() const ;
    bool isWriteLockedByCurrentThread() const ;
    int32_t getWriteHoldCount() const ;
    int32_t getReadHoldCount() const ;
    bool hasQueuedThreads() const ;
    bool hasQueuedThread(const ::java::lang::Thread&) const ;
    int32_t getQueueLength() const ;
    bool hasWaiters(const ::java::util::concurrent::locks::Condition&) const ;
    int32_t getWaitQueueLength(const ::java::util::concurrent::locks::Condition&) const ;
    ::java::lang::String toString() const ;

};
}
}
}
}

#include "java.util.concurrent.locks.ReentrantReadWriteLock_ReadLock.hpp"
#include "java.util.concurrent.locks.ReentrantReadWriteLock_WriteLock.hpp"

