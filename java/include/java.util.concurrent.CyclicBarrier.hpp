#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class CyclicBarrier : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CyclicBarrier(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CyclicBarrier(const ::java::util::concurrent::CyclicBarrier& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CyclicBarrier(::java::util::concurrent::CyclicBarrier&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::CyclicBarrier& operator=(const ::java::util::concurrent::CyclicBarrier& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::CyclicBarrier& operator=(::java::util::concurrent::CyclicBarrier&& x) {obj = std::move(x.obj); return *this;}
    
    CyclicBarrier(int32_t, const ::java::lang::Runnable&);
    CyclicBarrier(int32_t);
    int32_t getParties() const ;
    int32_t await() const ;
    int32_t await(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    bool isBroken() const ;
    void reset() const ;
    int32_t getNumberWaiting() const ;

};
}
}
}


