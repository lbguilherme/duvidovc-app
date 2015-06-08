#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace concurrent { namespace locks { class Lock; } } } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class ReadWriteLock : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReadWriteLock(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReadWriteLock(const ::java::util::concurrent::locks::ReadWriteLock& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ReadWriteLock(::java::util::concurrent::locks::ReadWriteLock&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::ReadWriteLock& operator=(const ::java::util::concurrent::locks::ReadWriteLock& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::ReadWriteLock& operator=(::java::util::concurrent::locks::ReadWriteLock&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::concurrent::locks::Lock readLock() const;
    ::java::util::concurrent::locks::Lock writeLock() const;

};
}
}
}
}


