#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { namespace cert { class CRLSelector; } } }
namespace java { namespace security { namespace cert { class CertSelector; } } }
namespace java { namespace security { namespace cert { class CertStoreParameters; } } }
namespace java { namespace util { class Collection; } }

namespace java {
namespace security {
namespace cert {
class CertStoreSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertStoreSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertStoreSpi(const ::java::security::cert::CertStoreSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CertStoreSpi(::java::security::cert::CertStoreSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertStoreSpi& operator=(const ::java::security::cert::CertStoreSpi& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertStoreSpi& operator=(::java::security::cert::CertStoreSpi&& x) {obj = std::move(x.obj); return *this;}
    
    CertStoreSpi(const ::java::security::cert::CertStoreParameters&);
    ::java::util::Collection engineGetCertificates(const ::java::security::cert::CertSelector&) const;
    ::java::util::Collection engineGetCRLs(const ::java::security::cert::CRLSelector&) const;

};
}
}
}


