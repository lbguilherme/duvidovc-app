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
class NonWritableChannelException : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::IllegalStateException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NonWritableChannelException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalStateException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NonWritableChannelException(const ::java::nio::channels::NonWritableChannelException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    NonWritableChannelException(::java::nio::channels::NonWritableChannelException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::NonWritableChannelException& operator=(const ::java::nio::channels::NonWritableChannelException& x) {obj = x.obj; return *this;}
    ::java::nio::channels::NonWritableChannelException& operator=(::java::nio::channels::NonWritableChannelException&& x) {obj = std::move(x.obj); return *this;}
    
    NonWritableChannelException();

};
}
}
}


