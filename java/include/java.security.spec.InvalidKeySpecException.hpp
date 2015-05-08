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
namespace spec {
class InvalidKeySpecException : public virtual ::java::lang::Object,
                                public virtual ::java::security::GeneralSecurityException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InvalidKeySpecException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InvalidKeySpecException(const ::java::security::spec::InvalidKeySpecException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj;}
    InvalidKeySpecException(::java::security::spec::InvalidKeySpecException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::InvalidKeySpecException& operator=(const ::java::security::spec::InvalidKeySpecException& x) {obj = x.obj; return *this;}
    ::java::security::spec::InvalidKeySpecException& operator=(::java::security::spec::InvalidKeySpecException&& x) {obj = std::move(x.obj); return *this;}
    
    InvalidKeySpecException(const ::java::lang::String&);
    InvalidKeySpecException();
    InvalidKeySpecException(const ::java::lang::String&, const ::java::lang::Throwable&);
    InvalidKeySpecException(const ::java::lang::Throwable&);

};
}
}
}


