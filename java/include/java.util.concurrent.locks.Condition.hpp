#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class Date; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
namespace locks {
class Condition : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Condition(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Condition(const ::java::util::concurrent::locks::Condition& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Condition(::java::util::concurrent::locks::Condition&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::locks::Condition& operator=(const ::java::util::concurrent::locks::Condition& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::locks::Condition& operator=(::java::util::concurrent::locks::Condition&& x) {obj = std::move(x.obj); return *this;}
    
    void await() const;
    void awaitUninterruptibly() const;
    int64_t awaitNanos(int64_t) const;
    bool await(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    bool awaitUntil(const ::java::util::Date&) const;
    void signal() const;
    void signalAll() const;

};
}
}
}
}


