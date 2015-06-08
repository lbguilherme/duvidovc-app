#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class CountDownLatch : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CountDownLatch(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CountDownLatch(const ::java::util::concurrent::CountDownLatch& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CountDownLatch(::java::util::concurrent::CountDownLatch&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::CountDownLatch& operator=(const ::java::util::concurrent::CountDownLatch& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::CountDownLatch& operator=(::java::util::concurrent::CountDownLatch&& x) {obj = std::move(x.obj); return *this;}
    
    CountDownLatch(int32_t);
    void await() const;
    bool await(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void countDown() const;
    int64_t getCount() const;
    ::java::lang::String toString() const;

};
}
}
}


