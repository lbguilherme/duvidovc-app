#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace concurrent {
class BrokenBarrierException : public virtual ::java::lang::Object,
                               public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BrokenBarrierException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BrokenBarrierException(const ::java::util::concurrent::BrokenBarrierException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    BrokenBarrierException(::java::util::concurrent::BrokenBarrierException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::BrokenBarrierException& operator=(const ::java::util::concurrent::BrokenBarrierException& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::BrokenBarrierException& operator=(::java::util::concurrent::BrokenBarrierException&& x) {obj = std::move(x.obj); return *this;}
    
    BrokenBarrierException();
    BrokenBarrierException(const ::java::lang::String&);

};
}
}
}

