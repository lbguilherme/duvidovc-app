#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class Semaphore : public virtual ::java::lang::Object,
                  public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Semaphore(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Semaphore(const ::java::util::concurrent::Semaphore& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Semaphore(::java::util::concurrent::Semaphore&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::Semaphore& operator=(const ::java::util::concurrent::Semaphore& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::Semaphore& operator=(::java::util::concurrent::Semaphore&& x) {obj = std::move(x.obj); return *this;}
    
    Semaphore(int32_t);
    Semaphore(int32_t, bool);
    void acquire() const;
    void acquireUninterruptibly() const;
    bool tryAcquire() const;
    bool tryAcquire(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void release() const;
    void acquire(int32_t) const;
    void acquireUninterruptibly(int32_t) const;
    bool tryAcquire(int32_t) const;
    bool tryAcquire(int32_t, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void release(int32_t) const;
    int32_t availablePermits() const;
    int32_t drainPermits() const;
    bool isFair() const;
    bool hasQueuedThreads() const;
    int32_t getQueueLength() const;
    ::java::lang::String toString() const;

};
}
}
}


