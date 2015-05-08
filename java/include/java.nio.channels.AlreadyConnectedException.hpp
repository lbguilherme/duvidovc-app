#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IllegalStateException.hpp"


namespace java {
namespace nio {
namespace channels {
class AlreadyConnectedException : public virtual ::java::lang::Object,
                                  public virtual ::java::lang::IllegalStateException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlreadyConnectedException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalStateException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlreadyConnectedException(const ::java::nio::channels::AlreadyConnectedException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AlreadyConnectedException(::java::nio::channels::AlreadyConnectedException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::AlreadyConnectedException& operator=(const ::java::nio::channels::AlreadyConnectedException& x) {obj = x.obj; return *this;}
    ::java::nio::channels::AlreadyConnectedException& operator=(::java::nio::channels::AlreadyConnectedException&& x) {obj = std::move(x.obj); return *this;}
    
    AlreadyConnectedException();

};
}
}
}


