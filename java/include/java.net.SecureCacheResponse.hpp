#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.CacheResponse.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace util { class List; } }

namespace java {
namespace net {
class SecureCacheResponse : public virtual ::java::lang::Object,
                            public virtual ::java::net::CacheResponse {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecureCacheResponse(jobject _obj) : ::java::lang::Object(_obj), ::java::net::CacheResponse(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecureCacheResponse(const ::java::net::SecureCacheResponse& x) : ::java::lang::Object((jobject)0), ::java::net::CacheResponse((jobject)0) {obj = x.obj;}
    SecureCacheResponse(::java::net::SecureCacheResponse&& x) : ::java::lang::Object((jobject)0), ::java::net::CacheResponse((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::SecureCacheResponse& operator=(const ::java::net::SecureCacheResponse& x) {obj = x.obj; return *this;}
    ::java::net::SecureCacheResponse& operator=(::java::net::SecureCacheResponse&& x) {obj = std::move(x.obj); return *this;}
    
    SecureCacheResponse();
    ::java::lang::String getCipherSuite() const ;
    ::java::util::List getLocalCertificateChain() const ;
    ::java::util::List getServerCertificateChain() const ;
    ::java::security::Principal getPeerPrincipal() const ;
    ::java::security::Principal getLocalPrincipal() const ;

};
}
}


