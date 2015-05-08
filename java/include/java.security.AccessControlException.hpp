#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.SecurityException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }

namespace java {
namespace security {
class AccessControlException : public virtual ::java::lang::Object,
                               public virtual ::java::lang::SecurityException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessControlException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::SecurityException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessControlException(const ::java::security::AccessControlException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::SecurityException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AccessControlException(::java::security::AccessControlException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::SecurityException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AccessControlException& operator=(const ::java::security::AccessControlException& x) {obj = x.obj; return *this;}
    ::java::security::AccessControlException& operator=(::java::security::AccessControlException&& x) {obj = std::move(x.obj); return *this;}
    
    AccessControlException(const ::java::lang::String&);
    AccessControlException(const ::java::lang::String&, const ::java::security::Permission&);
    ::java::security::Permission getPermission() const ;

};
}
}


