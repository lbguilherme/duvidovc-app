#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class Delayed : public virtual ::java::lang::Object,
                public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Delayed(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Delayed(const ::java::util::concurrent::Delayed& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Delayed(::java::util::concurrent::Delayed&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::Delayed& operator=(const ::java::util::concurrent::Delayed& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::Delayed& operator=(::java::util::concurrent::Delayed&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t getDelay(const ::java::util::concurrent::TimeUnit&) const ;

};
}
}
}


