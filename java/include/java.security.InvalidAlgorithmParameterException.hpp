#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.GeneralSecurityException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace security {
class InvalidAlgorithmParameterException : public virtual ::java::lang::Object,
                                           public virtual ::java::security::GeneralSecurityException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InvalidAlgorithmParameterException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InvalidAlgorithmParameterException(const ::java::security::InvalidAlgorithmParameterException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj;}
    InvalidAlgorithmParameterException(::java::security::InvalidAlgorithmParameterException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::InvalidAlgorithmParameterException& operator=(const ::java::security::InvalidAlgorithmParameterException& x) {obj = x.obj; return *this;}
    ::java::security::InvalidAlgorithmParameterException& operator=(::java::security::InvalidAlgorithmParameterException&& x) {obj = std::move(x.obj); return *this;}
    
    InvalidAlgorithmParameterException(const ::java::lang::String&);
    InvalidAlgorithmParameterException();
    InvalidAlgorithmParameterException(const ::java::lang::String&, const ::java::lang::Throwable&);
    InvalidAlgorithmParameterException(const ::java::lang::Throwable&);

};
}
}


