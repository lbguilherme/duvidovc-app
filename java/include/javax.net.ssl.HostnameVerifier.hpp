#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }

namespace javax {
namespace net {
namespace ssl {
class HostnameVerifier : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HostnameVerifier(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HostnameVerifier(const ::javax::net::ssl::HostnameVerifier& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HostnameVerifier(::javax::net::ssl::HostnameVerifier&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::HostnameVerifier& operator=(const ::javax::net::ssl::HostnameVerifier& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::HostnameVerifier& operator=(::javax::net::ssl::HostnameVerifier&& x) {obj = std::move(x.obj); return *this;}
    
    bool verify(const ::java::lang::String&, const ::javax::net::ssl::SSLSession&) const;

};
}
}
}


