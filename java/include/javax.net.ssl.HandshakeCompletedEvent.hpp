#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventObject.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }
namespace javax { namespace net { namespace ssl { class SSLSocket; } } }
namespace javax { namespace security { namespace cert { class X509Certificate; } } }

namespace javax {
namespace net {
namespace ssl {
class HandshakeCompletedEvent : public virtual ::java::lang::Object,
                                public virtual ::java::util::EventObject {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HandshakeCompletedEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HandshakeCompletedEvent(const ::javax::net::ssl::HandshakeCompletedEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    HandshakeCompletedEvent(::javax::net::ssl::HandshakeCompletedEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::HandshakeCompletedEvent& operator=(const ::javax::net::ssl::HandshakeCompletedEvent& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::HandshakeCompletedEvent& operator=(::javax::net::ssl::HandshakeCompletedEvent&& x) {obj = std::move(x.obj); return *this;}
    
    HandshakeCompletedEvent(const ::javax::net::ssl::SSLSocket&, const ::javax::net::ssl::SSLSession&);
    ::javax::net::ssl::SSLSession getSession() const;
    ::java::lang::String getCipherSuite() const;
    std::vector< ::java::security::cert::Certificate> getLocalCertificates() const;
    std::vector< ::java::security::cert::Certificate> getPeerCertificates() const;
    std::vector< ::javax::security::cert::X509Certificate> getPeerCertificateChain() const;
    ::java::security::Principal getPeerPrincipal() const;
    ::java::security::Principal getLocalPrincipal() const;
    ::javax::net::ssl::SSLSocket getSocket() const;

};
}
}
}


