#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.GeneralSecurityException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace security {
namespace spec {
class InvalidParameterSpecException : public virtual ::java::lang::Object,
                                      public virtual ::java::security::GeneralSecurityException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InvalidParameterSpecException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InvalidParameterSpecException(const ::java::security::spec::InvalidParameterSpecException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj;}
    InvalidParameterSpecException(::java::security::spec::InvalidParameterSpecException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::InvalidParameterSpecException& operator=(const ::java::security::spec::InvalidParameterSpecException& x) {obj = x.obj; return *this;}
    ::java::security::spec::InvalidParameterSpecException& operator=(::java::security::spec::InvalidParameterSpecException&& x) {obj = std::move(x.obj); return *this;}
    
    InvalidParameterSpecException(const ::java::lang::String&);
    InvalidParameterSpecException();

};
}
}
}


