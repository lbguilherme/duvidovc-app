#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace javax { namespace net { namespace ssl { class SSLEngineResult; } } }
namespace javax { namespace net { namespace ssl { class SSLEngineResult_HandshakeStatus; } } }
namespace javax { namespace net { namespace ssl { class SSLParameters; } } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLEngine : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLEngine(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLEngine(const ::javax::net::ssl::SSLEngine& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SSLEngine(::javax::net::ssl::SSLEngine&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLEngine& operator=(const ::javax::net::ssl::SSLEngine& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLEngine& operator=(::javax::net::ssl::SSLEngine&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getPeerHost() const ;
    int32_t getPeerPort() const ;
    void beginHandshake() const ;
    void closeInbound() const ;
    void closeOutbound() const ;
    ::java::lang::Runnable getDelegatedTask() const ;
    std::vector< ::java::lang::String> getEnabledCipherSuites() const ;
    std::vector< ::java::lang::String> getEnabledProtocols() const ;
    bool getEnableSessionCreation() const ;
    ::javax::net::ssl::SSLEngineResult_HandshakeStatus getHandshakeStatus() const ;
    bool getNeedClientAuth() const ;
    ::javax::net::ssl::SSLSession getSession() const ;
    std::vector< ::java::lang::String> getSupportedCipherSuites() const ;
    std::vector< ::java::lang::String> getSupportedProtocols() const ;
    bool getUseClientMode() const ;
    bool getWantClientAuth() const ;
    bool isInboundDone() const ;
    bool isOutboundDone() const ;
    void setEnabledCipherSuites(const std::vector< ::java::lang::String>&) const ;
    void setEnabledProtocols(const std::vector< ::java::lang::String>&) const ;
    void setEnableSessionCreation(bool) const ;
    void setNeedClientAuth(bool) const ;
    void setUseClientMode(bool) const ;
    void setWantClientAuth(bool) const ;
    ::javax::net::ssl::SSLEngineResult unwrap(const ::java::nio::ByteBuffer&, const std::vector< ::java::nio::ByteBuffer>&, int32_t, int32_t) const ;
    ::javax::net::ssl::SSLEngineResult wrap(const std::vector< ::java::nio::ByteBuffer>&, int32_t, int32_t, const ::java::nio::ByteBuffer&) const ;
    ::javax::net::ssl::SSLEngineResult unwrap(const ::java::nio::ByteBuffer&, const ::java::nio::ByteBuffer&) const ;
    ::javax::net::ssl::SSLEngineResult unwrap(const ::java::nio::ByteBuffer&, const std::vector< ::java::nio::ByteBuffer>&) const ;
    ::javax::net::ssl::SSLEngineResult wrap(const std::vector< ::java::nio::ByteBuffer>&, const ::java::nio::ByteBuffer&) const ;
    ::javax::net::ssl::SSLEngineResult wrap(const ::java::nio::ByteBuffer&, const ::java::nio::ByteBuffer&) const ;
    ::javax::net::ssl::SSLParameters getSSLParameters() const ;
    void setSSLParameters(const ::javax::net::ssl::SSLParameters&) const ;

};
}
}
}


