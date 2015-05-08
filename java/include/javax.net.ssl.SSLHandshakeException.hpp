#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ssl.SSLException.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace net {
namespace ssl {
class SSLHandshakeException : public virtual ::java::lang::Object,
                              public virtual ::javax::net::ssl::SSLException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLHandshakeException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::javax::net::ssl::SSLException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLHandshakeException(const ::javax::net::ssl::SSLHandshakeException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::net::ssl::SSLException((jobject)0) {obj = x.obj;}
    SSLHandshakeException(::javax::net::ssl::SSLHandshakeException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::net::ssl::SSLException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLHandshakeException& operator=(const ::javax::net::ssl::SSLHandshakeException& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLHandshakeException& operator=(::javax::net::ssl::SSLHandshakeException&& x) {obj = std::move(x.obj); return *this;}
    
    SSLHandshakeException(const ::java::lang::String&);

};
}
}
}


