#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.LinkageError.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class ClassFormatError : public virtual ::java::lang::Object,
                         public virtual ::java::lang::LinkageError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClassFormatError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::LinkageError(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClassFormatError(const ::java::lang::ClassFormatError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ClassFormatError(::java::lang::ClassFormatError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ClassFormatError& operator=(const ::java::lang::ClassFormatError& x) {obj = x.obj; return *this;}
    ::java::lang::ClassFormatError& operator=(::java::lang::ClassFormatError&& x) {obj = std::move(x.obj); return *this;}
    
    ClassFormatError();
    ClassFormatError(const ::java::lang::String&);

};
}
}


