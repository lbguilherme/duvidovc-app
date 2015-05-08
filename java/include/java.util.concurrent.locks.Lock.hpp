#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class Lock : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Lock(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Lock(const ::java::util::concurrent::locks::Lock& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Lock(::java::util::concurrent::locks::Lock&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::Lock& operator=(const ::java::util::concurrent::locks::Lock& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::Lock& operator=(::java::util::concurrent::locks::Lock&& x) {obj = std::move(x.obj); return *this;}
    
    void lock() const ;
    void lockInterruptibly() const ;
    bool tryLock() const ;
    bool tryLock(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void unlock() const ;
    ::java::util::concurrent::locks::Condition newCondition() const ;

};
}
}
}
}


