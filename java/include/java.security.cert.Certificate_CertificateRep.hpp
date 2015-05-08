#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"


namespace java {
namespace security {
namespace cert {
class Certificate_CertificateRep : public virtual ::java::lang::Object,
                                   public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Certificate_CertificateRep(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Certificate_CertificateRep(const ::java::security::cert::Certificate_CertificateRep& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Certificate_CertificateRep(::java::security::cert::Certificate_CertificateRep&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::Certificate_CertificateRep& operator=(const ::java::security::cert::Certificate_CertificateRep& x) {obj = x.obj; return *this;}
    ::java::security::cert::Certificate_CertificateRep& operator=(::java::security::cert::Certificate_CertificateRep&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


