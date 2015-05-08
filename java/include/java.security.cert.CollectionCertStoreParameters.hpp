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
namespace java { namespace util { class Collection; } }

namespace java {
namespace security {
namespace cert {
class CollectionCertStoreParameters : public virtual ::java::lang::Object,
                                      public virtual ::java::security::cert::CertStoreParameters {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollectionCertStoreParameters(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::security::cert::CertStoreParameters(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollectionCertStoreParameters(const ::java::security::cert::CollectionCertStoreParameters& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {obj = x.obj;}
    CollectionCertStoreParameters(::java::security::cert::CollectionCertStoreParameters&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CollectionCertStoreParameters& operator=(const ::java::security::cert::CollectionCertStoreParameters& x) {obj = x.obj; return *this;}
    ::java::security::cert::CollectionCertStoreParameters& operator=(::java::security::cert::CollectionCertStoreParameters&& x) {obj = std::move(x.obj); return *this;}
    
    CollectionCertStoreParameters();
    CollectionCertStoreParameters(const ::java::util::Collection&);
    ::java::lang::Object clone() const ;
    ::java::util::Collection getCollection() const ;
    ::java::lang::String toString() const ;

};
}
}
}


