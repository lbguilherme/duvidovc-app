#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
namespace reflect {
class UndeclaredThrowableException : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UndeclaredThrowableException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UndeclaredThrowableException(const ::java::lang::reflect::UndeclaredThrowableException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    UndeclaredThrowableException(::java::lang::reflect::UndeclaredThrowableException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::UndeclaredThrowableException& operator=(const ::java::lang::reflect::UndeclaredThrowableException& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::UndeclaredThrowableException& operator=(::java::lang::reflect::UndeclaredThrowableException&& x) {obj = std::move(x.obj); return *this;}
    
    UndeclaredThrowableException(const ::java::lang::Throwable&);
    UndeclaredThrowableException(const ::java::lang::Throwable&, const ::java::lang::String&);
    ::java::lang::Throwable getUndeclaredThrowable() const ;
    ::java::lang::Throwable getCause() const ;

};
}
}
}


