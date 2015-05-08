#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InterruptedIOException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace net {
class SocketTimeoutException : public virtual ::java::lang::Object,
                               public virtual ::java::io::InterruptedIOException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketTimeoutException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::InterruptedIOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketTimeoutException(const ::java::net::SocketTimeoutException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SocketTimeoutException(::java::net::SocketTimeoutException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::SocketTimeoutException& operator=(const ::java::net::SocketTimeoutException& x) {obj = x.obj; return *this;}
    ::java::net::SocketTimeoutException& operator=(::java::net::SocketTimeoutException&& x) {obj = std::move(x.obj); return *this;}
    
    SocketTimeoutException();
    SocketTimeoutException(const ::java::lang::String&);

};
}
}


