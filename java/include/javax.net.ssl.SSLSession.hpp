#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace javax { namespace net { namespace ssl { class SSLSessionContext; } } }
namespace javax { namespace security { namespace cert { class X509Certificate; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLSession : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLSession(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLSession(const ::javax::net::ssl::SSLSession& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SSLSession(::javax::net::ssl::SSLSession&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLSession& operator=(const ::javax::net::ssl::SSLSession& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLSession& operator=(::javax::net::ssl::SSLSession&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getApplicationBufferSize() const ;
    ::java::lang::String getCipherSuite() const ;
    int64_t getCreationTime() const ;
    std::vector< int8_t> getId() const ;
    int64_t getLastAccessedTime() const ;
    std::vector< ::java::security::cert::Certificate> getLocalCertificates() const ;
    ::java::security::Principal getLocalPrincipal() const ;
    int32_t getPacketBufferSize() const ;
    std::vector< ::javax::security::cert::X509Certificate> getPeerCertificateChain() const ;
    std::vector< ::java::security::cert::Certificate> getPeerCertificates() const ;
    ::java::lang::String getPeerHost() const ;
    int32_t getPeerPort() const ;
    ::java::security::Principal getPeerPrincipal() const ;
    ::java::lang::String getProtocol() const ;
    ::javax::net::ssl::SSLSessionContext getSessionContext() const ;
    ::java::lang::Object getValue(const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> getValueNames() const ;
    void invalidate() const ;
    bool isValid() const ;
    void putValue(const ::java::lang::String&, const ::java::lang::Object&) const ;
    void removeValue(const ::java::lang::String&) const ;

};
}
}
}


