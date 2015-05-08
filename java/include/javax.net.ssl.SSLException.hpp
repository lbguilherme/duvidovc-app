#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.IOException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace javax {
namespace net {
namespace ssl {
class SSLException : public virtual ::java::lang::Object,
                     public virtual ::java::io::IOException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLException(const ::javax::net::ssl::SSLException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SSLException(::javax::net::ssl::SSLException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLException& operator=(const ::javax::net::ssl::SSLException& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLException& operator=(::javax::net::ssl::SSLException&& x) {obj = std::move(x.obj); return *this;}
    
    SSLException(const ::java::lang::String&);
    SSLException(const ::java::lang::String&, const ::java::lang::Throwable&);
    SSLException(const ::java::lang::Throwable&);

};
}
}
}


