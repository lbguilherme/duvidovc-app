#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.KeyException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace security {
class InvalidKeyException : public virtual ::java::lang::Object,
                            public virtual ::java::security::KeyException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InvalidKeyException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj), ::java::security::KeyException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InvalidKeyException(const ::java::security::InvalidKeyException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {obj = x.obj;}
    InvalidKeyException(::java::security::InvalidKeyException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::InvalidKeyException& operator=(const ::java::security::InvalidKeyException& x) {obj = x.obj; return *this;}
    ::java::security::InvalidKeyException& operator=(::java::security::InvalidKeyException&& x) {obj = std::move(x.obj); return *this;}
    
    InvalidKeyException(const ::java::lang::String&);
    InvalidKeyException();
    InvalidKeyException(const ::java::lang::String&, const ::java::lang::Throwable&);
    InvalidKeyException(const ::java::lang::Throwable&);

};
}
}


