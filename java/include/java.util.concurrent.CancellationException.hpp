#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IllegalStateException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace concurrent {
class CancellationException : public virtual ::java::lang::Object,
                              public virtual ::java::lang::IllegalStateException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CancellationException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalStateException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CancellationException(const ::java::util::concurrent::CancellationException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    CancellationException(::java::util::concurrent::CancellationException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::CancellationException& operator=(const ::java::util::concurrent::CancellationException& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::CancellationException& operator=(::java::util::concurrent::CancellationException&& x) {obj = std::move(x.obj); return *this;}
    
    CancellationException();
    CancellationException(const ::java::lang::String&);

};
}
}
}


