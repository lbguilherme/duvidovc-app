#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.security.cert.Certificate.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace util { class Date; } }
namespace javax { namespace security { namespace cert { class X509Certificate; } } }

namespace javax {
namespace security {
namespace cert {
class X509Certificate : public virtual ::java::lang::Object,
                        public virtual ::javax::security::cert::Certificate {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509Certificate(jobject _obj) : ::java::lang::Object(_obj), ::javax::security::cert::Certificate(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509Certificate(const ::javax::security::cert::X509Certificate& x) : ::java::lang::Object((jobject)0), ::javax::security::cert::Certificate((jobject)0) {obj = x.obj;}
    X509Certificate(::javax::security::cert::X509Certificate&& x) : ::java::lang::Object((jobject)0), ::javax::security::cert::Certificate((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::cert::X509Certificate& operator=(const ::javax::security::cert::X509Certificate& x) {obj = x.obj; return *this;}
    ::javax::security::cert::X509Certificate& operator=(::javax::security::cert::X509Certificate&& x) {obj = std::move(x.obj); return *this;}
    
    X509Certificate();
    static ::javax::security::cert::X509Certificate getInstance(const ::java::io::InputStream&);
    static ::javax::security::cert::X509Certificate getInstance(const std::vector< int8_t>&);
    void checkValidity() const;
    void checkValidity(const ::java::util::Date&) const;
    int32_t getVersion() const;
    ::java::math::BigInteger getSerialNumber() const;
    ::java::security::Principal getIssuerDN() const;
    ::java::security::Principal getSubjectDN() const;
    ::java::util::Date getNotBefore() const;
    ::java::util::Date getNotAfter() const;
    ::java::lang::String getSigAlgName() const;
    ::java::lang::String getSigAlgOID() const;
    std::vector< int8_t> getSigAlgParams() const;

};
}
}
}


