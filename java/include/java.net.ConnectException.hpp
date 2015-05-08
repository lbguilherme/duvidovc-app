#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.SocketException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace net {
class ConnectException : public virtual ::java::lang::Object,
                         public virtual ::java::net::SocketException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::net::SocketException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectException(const ::java::net::ConnectException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {obj = x.obj;}
    ConnectException(::java::net::ConnectException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::ConnectException& operator=(const ::java::net::ConnectException& x) {obj = x.obj; return *this;}
    ::java::net::ConnectException& operator=(::java::net::ConnectException&& x) {obj = std::move(x.obj); return *this;}
    
    ConnectException();
    ConnectException(const ::java::lang::String&);

};
}
}


