#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.ClassFormatError.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class UnsupportedClassVersionError : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::ClassFormatError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnsupportedClassVersionError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::ClassFormatError(_obj), ::java::lang::Error(_obj), ::java::lang::LinkageError(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnsupportedClassVersionError(const ::java::lang::UnsupportedClassVersionError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::ClassFormatError((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    UnsupportedClassVersionError(::java::lang::UnsupportedClassVersionError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::ClassFormatError((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::UnsupportedClassVersionError& operator=(const ::java::lang::UnsupportedClassVersionError& x) {obj = x.obj; return *this;}
    ::java::lang::UnsupportedClassVersionError& operator=(::java::lang::UnsupportedClassVersionError&& x) {obj = std::move(x.obj); return *this;}
    
    UnsupportedClassVersionError();
    UnsupportedClassVersionError(const ::java::lang::String&);

};
}
}


