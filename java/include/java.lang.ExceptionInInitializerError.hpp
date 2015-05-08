#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.LinkageError.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
class ExceptionInInitializerError : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::LinkageError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExceptionInInitializerError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::LinkageError(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExceptionInInitializerError(const ::java::lang::ExceptionInInitializerError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ExceptionInInitializerError(::java::lang::ExceptionInInitializerError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ExceptionInInitializerError& operator=(const ::java::lang::ExceptionInInitializerError& x) {obj = x.obj; return *this;}
    ::java::lang::ExceptionInInitializerError& operator=(::java::lang::ExceptionInInitializerError&& x) {obj = std::move(x.obj); return *this;}
    
    ExceptionInInitializerError();
    ExceptionInInitializerError(const ::java::lang::String&);
    ExceptionInInitializerError(const ::java::lang::Throwable&);
    ::java::lang::Throwable getException() const ;
    ::java::lang::Throwable getCause() const ;

};
}
}


