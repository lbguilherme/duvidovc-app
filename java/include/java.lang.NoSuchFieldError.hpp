#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IncompatibleClassChangeError.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class NoSuchFieldError : public virtual ::java::lang::Object,
                         public virtual ::java::lang::IncompatibleClassChangeError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NoSuchFieldError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::IncompatibleClassChangeError(_obj), ::java::lang::LinkageError(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NoSuchFieldError(const ::java::lang::NoSuchFieldError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    NoSuchFieldError(::java::lang::NoSuchFieldError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::NoSuchFieldError& operator=(const ::java::lang::NoSuchFieldError& x) {obj = x.obj; return *this;}
    ::java::lang::NoSuchFieldError& operator=(::java::lang::NoSuchFieldError&& x) {obj = std::move(x.obj); return *this;}
    
    NoSuchFieldError();
    NoSuchFieldError(const ::java::lang::String&);

};
}
}


