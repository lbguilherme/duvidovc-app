#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ssl.ManagerFactoryParameters.hpp"

namespace java { namespace security { namespace cert { class CertPathParameters; } } }

namespace javax {
namespace net {
namespace ssl {
class CertPathTrustManagerParameters : public virtual ::java::lang::Object,
                                       public virtual ::javax::net::ssl::ManagerFactoryParameters {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertPathTrustManagerParameters(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ssl::ManagerFactoryParameters(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertPathTrustManagerParameters(const ::javax::net::ssl::CertPathTrustManagerParameters& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::ManagerFactoryParameters((jobject)0) {obj = x.obj;}
    CertPathTrustManagerParameters(::javax::net::ssl::CertPathTrustManagerParameters&& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::ManagerFactoryParameters((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::CertPathTrustManagerParameters& operator=(const ::javax::net::ssl::CertPathTrustManagerParameters& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::CertPathTrustManagerParameters& operator=(::javax::net::ssl::CertPathTrustManagerParameters&& x) {obj = std::move(x.obj); return *this;}
    
    CertPathTrustManagerParameters(const ::java::security::cert::CertPathParameters&);
    ::java::security::cert::CertPathParameters getParameters() const;

};
}
}
}


