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
class PortUnreachableException : public virtual ::java::lang::Object,
                                 public virtual ::java::net::SocketException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PortUnreachableException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::net::SocketException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PortUnreachableException(const ::java::net::PortUnreachableException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {obj = x.obj;}
    PortUnreachableException(::java::net::PortUnreachableException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::PortUnreachableException& operator=(const ::java::net::PortUnreachableException& x) {obj = x.obj; return *this;}
    ::java::net::PortUnreachableException& operator=(::java::net::PortUnreachableException&& x) {obj = std::move(x.obj); return *this;}
    
    PortUnreachableException();
    PortUnreachableException(const ::java::lang::String&);

};
}
}


