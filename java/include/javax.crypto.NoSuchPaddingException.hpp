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
class NoSuchPaddingException : public virtual ::java::lang::Object,
                               public virtual ::java::security::GeneralSecurityException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NoSuchPaddingException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NoSuchPaddingException(const ::javax::crypto::NoSuchPaddingException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj;}
    NoSuchPaddingException(::javax::crypto::NoSuchPaddingException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::NoSuchPaddingException& operator=(const ::javax::crypto::NoSuchPaddingException& x) {obj = x.obj; return *this;}
    ::javax::crypto::NoSuchPaddingException& operator=(::javax::crypto::NoSuchPaddingException&& x) {obj = std::move(x.obj); return *this;}
    
    NoSuchPaddingException(const ::java::lang::String&);
    NoSuchPaddingException();

};
}
}


