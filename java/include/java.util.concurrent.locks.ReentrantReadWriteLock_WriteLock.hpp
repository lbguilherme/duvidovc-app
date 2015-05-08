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
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class ReentrantReadWriteLock_WriteLock : public virtual ::java::lang::Object,
                                         public virtual ::java::io::Serializable,
                                         public virtual ::java::util::concurrent::locks::Lock {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReentrantReadWriteLock_WriteLock(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::concurrent::locks::Lock(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReentrantReadWriteLock_WriteLock(const ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Lock((jobject)0) {obj = x.obj;}
    ReentrantReadWriteLock_WriteLock(::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Lock((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock& operator=(const ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock& operator=(::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock&& x) {obj = std::move(x.obj); return *this;}
    
    void lock() const ;
    void lockInterruptibly() const ;
    bool tryLock() const ;
    bool tryLock(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void unlock() const ;
    ::java::util::concurrent::locks::Condition newCondition() const ;
    ::java::lang::String toString() const ;
    bool isHeldByCurrentThread() const ;
    int32_t getHoldCount() const ;

};
}
}
}
}


