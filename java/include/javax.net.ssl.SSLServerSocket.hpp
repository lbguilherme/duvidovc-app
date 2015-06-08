#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.ServerSocket.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace net {
namespace ssl {
class SSLServerSocket : public virtual ::java::lang::Object,
                        public virtual ::java::net::ServerSocket {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLServerSocket(jobject _obj) : ::java::lang::Object(_obj), ::java::net::ServerSocket(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLServerSocket(const ::javax::net::ssl::SSLServerSocket& x) : ::java::lang::Object((jobject)0), ::java::net::ServerSocket((jobject)0) {obj = x.obj;}
    SSLServerSocket(::javax::net::ssl::SSLServerSocket&& x) : ::java::lang::Object((jobject)0), ::java::net::ServerSocket((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLServerSocket& operator=(const ::javax::net::ssl::SSLServerSocket& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLServerSocket& operator=(::javax::net::ssl::SSLServerSocket&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::String> getEnabledCipherSuites() const;
    void setEnabledCipherSuites(const std::vector< ::java::lang::String>&) const;
    std::vector< ::java::lang::String> getSupportedCipherSuites() const;
    std::vector< ::java::lang::String> getSupportedProtocols() const;
    std::vector< ::java::lang::String> getEnabledProtocols() const;
    void setEnabledProtocols(const std::vector< ::java::lang::String>&) const;
    void setNeedClientAuth(bool) const;
    bool getNeedClientAuth() const;
    void setWantClientAuth(bool) const;
    bool getWantClientAuth() const;
    void setUseClientMode(bool) const;
    bool getUseClientMode() const;
    void setEnableSessionCreation(bool) const;
    bool getEnableSessionCreation() const;

};
}
}
}


