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
class KeyManagementException : public virtual ::java::lang::Object,
                               public virtual ::java::security::KeyException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyManagementException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj), ::java::security::KeyException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyManagementException(const ::java::security::KeyManagementException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {obj = x.obj;}
    KeyManagementException(::java::security::KeyManagementException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyManagementException& operator=(const ::java::security::KeyManagementException& x) {obj = x.obj; return *this;}
    ::java::security::KeyManagementException& operator=(::java::security::KeyManagementException&& x) {obj = std::move(x.obj); return *this;}
    
    KeyManagementException(const ::java::lang::String&);
    KeyManagementException();
    KeyManagementException(const ::java::lang::String&, const ::java::lang::Throwable&);
    KeyManagementException(const ::java::lang::Throwable&);

};
}
}


