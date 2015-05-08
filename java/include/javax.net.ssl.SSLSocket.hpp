#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.Socket.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace net { namespace ssl { class HandshakeCompletedListener; } } }
namespace javax { namespace net { namespace ssl { class SSLParameters; } } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLSocket : public virtual ::java::lang::Object,
                  public virtual ::java::net::Socket {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLSocket(jobject _obj) : ::java::lang::Object(_obj), ::java::net::Socket(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLSocket(const ::javax::net::ssl::SSLSocket& x) : ::java::lang::Object((jobject)0), ::java::net::Socket((jobject)0) {obj = x.obj;}
    SSLSocket(::javax::net::ssl::SSLSocket&& x) : ::java::lang::Object((jobject)0), ::java::net::Socket((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLSocket& operator=(const ::javax::net::ssl::SSLSocket& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLSocket& operator=(::javax::net::ssl::SSLSocket&& x) {obj = std::move(x.obj); return *this;}
    
    void shutdownInput() const ;
    void shutdownOutput() const ;
    std::vector< ::java::lang::String> getSupportedCipherSuites() const ;
    std::vector< ::java::lang::String> getEnabledCipherSuites() const ;
    void setEnabledCipherSuites(const std::vector< ::java::lang::String>&) const ;
    std::vector< ::java::lang::String> getSupportedProtocols() const ;
    std::vector< ::java::lang::String> getEnabledProtocols() const ;
    void setEnabledProtocols(const std::vector< ::java::lang::String>&) const ;
    ::javax::net::ssl::SSLSession getSession() const ;
    void addHandshakeCompletedListener(const ::javax::net::ssl::HandshakeCompletedListener&) const ;
    void removeHandshakeCompletedListener(const ::javax::net::ssl::HandshakeCompletedListener&) const ;
    void startHandshake() const ;
    void setUseClientMode(bool) const ;
    bool getUseClientMode() const ;
    void setNeedClientAuth(bool) const ;
    void setWantClientAuth(bool) const ;
    bool getNeedClientAuth() const ;
    bool getWantClientAuth() const ;
    void setEnableSessionCreation(bool) const ;
    bool getEnableSessionCreation() const ;
    ::javax::net::ssl::SSLParameters getSSLParameters() const ;
    void setSSLParameters(const ::javax::net::ssl::SSLParameters&) const ;

};
}
}
}


