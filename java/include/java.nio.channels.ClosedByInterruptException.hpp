#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.AsynchronousCloseException.hpp"


namespace java {
namespace nio {
namespace channels {
class ClosedByInterruptException : public virtual ::java::lang::Object,
                                   public virtual ::java::nio::channels::AsynchronousCloseException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClosedByInterruptException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::nio::channels::AsynchronousCloseException(_obj), ::java::nio::channels::ClosedChannelException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClosedByInterruptException(const ::java::nio::channels::ClosedByInterruptException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::channels::AsynchronousCloseException((jobject)0), ::java::nio::channels::ClosedChannelException((jobject)0) {obj = x.obj;}
    ClosedByInterruptException(::java::nio::channels::ClosedByInterruptException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::channels::AsynchronousCloseException((jobject)0), ::java::nio::channels::ClosedChannelException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::ClosedByInterruptException& operator=(const ::java::nio::channels::ClosedByInterruptException& x) {obj = x.obj; return *this;}
    ::java::nio::channels::ClosedByInterruptException& operator=(::java::nio::channels::ClosedByInterruptException&& x) {obj = std::move(x.obj); return *this;}
    
    ClosedByInterruptException();

};
}
}
}


