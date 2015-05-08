#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class Exchanger : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Exchanger(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Exchanger(const ::java::util::concurrent::Exchanger& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Exchanger(::java::util::concurrent::Exchanger&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::Exchanger& operator=(const ::java::util::concurrent::Exchanger& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::Exchanger& operator=(::java::util::concurrent::Exchanger&& x) {obj = std::move(x.obj); return *this;}
    
    Exchanger();
    ::java::lang::Object exchange(const ::java::lang::Object&) const ;
    ::java::lang::Object exchange(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;

};
}
}
}


