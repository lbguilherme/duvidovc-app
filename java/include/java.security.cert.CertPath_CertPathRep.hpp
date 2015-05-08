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
class CertPath_CertPathRep : public virtual ::java::lang::Object,
                             public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertPath_CertPathRep(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertPath_CertPathRep(const ::java::security::cert::CertPath_CertPathRep& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    CertPath_CertPathRep(::java::security::cert::CertPath_CertPathRep&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertPath_CertPathRep& operator=(const ::java::security::cert::CertPath_CertPathRep& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertPath_CertPathRep& operator=(::java::security::cert::CertPath_CertPathRep&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


