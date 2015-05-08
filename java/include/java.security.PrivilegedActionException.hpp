#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class Exception; } }

namespace java {
namespace security {
class PrivilegedActionException : public virtual ::java::lang::Object,
                                  public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrivilegedActionException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrivilegedActionException(const ::java::security::PrivilegedActionException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    PrivilegedActionException(::java::security::PrivilegedActionException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::PrivilegedActionException& operator=(const ::java::security::PrivilegedActionException& x) {obj = x.obj; return *this;}
    ::java::security::PrivilegedActionException& operator=(::java::security::PrivilegedActionException&& x) {obj = std::move(x.obj); return *this;}
    
    PrivilegedActionException(const ::java::lang::Exception&);
    ::java::lang::Exception getException() const ;

};
}
}


