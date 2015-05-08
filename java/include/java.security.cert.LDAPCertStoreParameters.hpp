#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CertStoreParameters.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace security {
namespace cert {
class LDAPCertStoreParameters : public virtual ::java::lang::Object,
                                public virtual ::java::security::cert::CertStoreParameters {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LDAPCertStoreParameters(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::security::cert::CertStoreParameters(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LDAPCertStoreParameters(const ::java::security::cert::LDAPCertStoreParameters& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {obj = x.obj;}
    LDAPCertStoreParameters(::java::security::cert::LDAPCertStoreParameters&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::LDAPCertStoreParameters& operator=(const ::java::security::cert::LDAPCertStoreParameters& x) {obj = x.obj; return *this;}
    ::java::security::cert::LDAPCertStoreParameters& operator=(::java::security::cert::LDAPCertStoreParameters&& x) {obj = std::move(x.obj); return *this;}
    
    LDAPCertStoreParameters(const ::java::lang::String&, int32_t);
    LDAPCertStoreParameters();
    LDAPCertStoreParameters(const ::java::lang::String&);
    ::java::lang::Object clone() const ;
    int32_t getPort() const ;
    ::java::lang::String getServerName() const ;
    ::java::lang::String toString() const ;

};
}
}
}


