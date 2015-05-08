#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.GeneralSecurityException.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace crypto {
class ExemptionMechanismException : public virtual ::java::lang::Object,
                                    public virtual ::java::security::GeneralSecurityException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExemptionMechanismException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExemptionMechanismException(const ::javax::crypto::ExemptionMechanismException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj;}
    ExemptionMechanismException(::javax::crypto::ExemptionMechanismException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::ExemptionMechanismException& operator=(const ::javax::crypto::ExemptionMechanismException& x) {obj = x.obj; return *this;}
    ::javax::crypto::ExemptionMechanismException& operator=(::javax::crypto::ExemptionMechanismException&& x) {obj = std::move(x.obj); return *this;}
    
    ExemptionMechanismException(const ::java::lang::String&);
    ExemptionMechanismException();

};
}
}


