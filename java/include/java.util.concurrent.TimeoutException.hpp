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
class TimeoutException : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimeoutException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimeoutException(const ::java::util::concurrent::TimeoutException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    TimeoutException(::java::util::concurrent::TimeoutException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::TimeoutException& operator=(const ::java::util::concurrent::TimeoutException& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::TimeoutException& operator=(::java::util::concurrent::TimeoutException&& x) {obj = std::move(x.obj); return *this;}
    
    TimeoutException();
    TimeoutException(const ::java::lang::String&);

};
}
}
}


