#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.ClassFormatError.hpp"


namespace java {
namespace lang {
namespace reflect {
class GenericSignatureFormatError : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::ClassFormatError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GenericSignatureFormatError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::ClassFormatError(_obj), ::java::lang::Error(_obj), ::java::lang::LinkageError(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GenericSignatureFormatError(const ::java::lang::reflect::GenericSignatureFormatError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::ClassFormatError((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    GenericSignatureFormatError(::java::lang::reflect::GenericSignatureFormatError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::ClassFormatError((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::GenericSignatureFormatError& operator=(const ::java::lang::reflect::GenericSignatureFormatError& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::GenericSignatureFormatError& operator=(::java::lang::reflect::GenericSignatureFormatError&& x) {obj = std::move(x.obj); return *this;}
    
    GenericSignatureFormatError();

};
}
}
}


