#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ssl.SSLSocketFactory.hpp"

namespace android { namespace net { class SSLSessionCache; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class Socket; } }
namespace javax { namespace net { class SocketFactory; } }
namespace javax { namespace net { namespace ssl { class KeyManager; } } }
namespace javax { namespace net { namespace ssl { class SSLSocketFactory; } } }
namespace javax { namespace net { namespace ssl { class TrustManager; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace ssl { class SSLSocketFactory; } } } } }

namespace android {
namespace net {
class SSLCertificateSocketFactory : public virtual ::java::lang::Object,
                                    public virtual ::javax::net::ssl::SSLSocketFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLCertificateSocketFactory(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::SocketFactory(_obj), ::javax::net::ssl::SSLSocketFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLCertificateSocketFactory(const ::android::net::SSLCertificateSocketFactory& x) : ::java::lang::Object((jobject)0), ::javax::net::SocketFactory((jobject)0), ::javax::net::ssl::SSLSocketFactory((jobject)0) {obj = x.obj;}
    SSLCertificateSocketFactory(::android::net::SSLCertificateSocketFactory&& x) : ::java::lang::Object((jobject)0), ::javax::net::SocketFactory((jobject)0), ::javax::net::ssl::SSLSocketFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::SSLCertificateSocketFactory& operator=(const ::android::net::SSLCertificateSocketFactory& x) {obj = x.obj; return *this;}
    ::android::net::SSLCertificateSocketFactory& operator=(::android::net::SSLCertificateSocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    SSLCertificateSocketFactory(int32_t);
    static ::javax::net::SocketFactory getDefault(int32_t);
    static ::javax::net::ssl::SSLSocketFactory getDefault(int32_t, const ::android::net::SSLSessionCache&);
    static ::javax::net::ssl::SSLSocketFactory getInsecure(int32_t, const ::android::net::SSLSessionCache&);
    static ::org::apache::http::conn::ssl::SSLSocketFactory getHttpSocketFactory(int32_t, const ::android::net::SSLSessionCache&);
    void setTrustManagers(const std::vector< ::javax::net::ssl::TrustManager>&) const;
    void setKeyManagers(const std::vector< ::javax::net::ssl::KeyManager>&) const;
    ::java::net::Socket createSocket(const ::java::net::Socket&, const ::java::lang::String&, int32_t, bool) const;
    ::java::net::Socket createSocket() const;
    ::java::net::Socket createSocket(const ::java::net::InetAddress&, int32_t, const ::java::net::InetAddress&, int32_t) const;
    ::java::net::Socket createSocket(const ::java::net::InetAddress&, int32_t) const;
    ::java::net::Socket createSocket(const ::java::lang::String&, int32_t, const ::java::net::InetAddress&, int32_t) const;
    ::java::net::Socket createSocket(const ::java::lang::String&, int32_t) const;
    std::vector< ::java::lang::String> getDefaultCipherSuites() const;
    std::vector< ::java::lang::String> getSupportedCipherSuites() const;

};
}
}


