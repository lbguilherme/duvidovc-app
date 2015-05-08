#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.UnrecoverableEntryException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace security {
class UnrecoverableKeyException : public virtual ::java::lang::Object,
                                  public virtual ::java::security::UnrecoverableEntryException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnrecoverableKeyException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj), ::java::security::UnrecoverableEntryException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnrecoverableKeyException(const ::java::security::UnrecoverableKeyException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::UnrecoverableEntryException((jobject)0) {obj = x.obj;}
    UnrecoverableKeyException(::java::security::UnrecoverableKeyException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::UnrecoverableEntryException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::UnrecoverableKeyException& operator=(const ::java::security::UnrecoverableKeyException& x) {obj = x.obj; return *this;}
    ::java::security::UnrecoverableKeyException& operator=(::java::security::UnrecoverableKeyException&& x) {obj = std::move(x.obj); return *this;}
    
    UnrecoverableKeyException(const ::java::lang::String&);
    UnrecoverableKeyException();

};
}
}


