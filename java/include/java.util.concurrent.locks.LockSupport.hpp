#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Thread; } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class LockSupport : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LockSupport(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LockSupport(const ::java::util::concurrent::locks::LockSupport& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LockSupport(::java::util::concurrent::locks::LockSupport&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::LockSupport& operator=(const ::java::util::concurrent::locks::LockSupport& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::LockSupport& operator=(::java::util::concurrent::locks::LockSupport&& x) {obj = std::move(x.obj); return *this;}
    
    static void unpark(const ::java::lang::Thread&);
    static void park(const ::java::lang::Object&);
    static void parkNanos(const ::java::lang::Object&, int64_t);
    static void parkUntil(const ::java::lang::Object&, int64_t);
    static ::java::lang::Object getBlocker(const ::java::lang::Thread&);
    static void park();
    static void parkNanos(int64_t);
    static void parkUntil(int64_t);

};
}
}
}
}


