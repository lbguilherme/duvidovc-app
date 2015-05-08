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
class UnsatisfiedLinkError : public virtual ::java::lang::Object,
                             public virtual ::java::lang::LinkageError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnsatisfiedLinkError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::LinkageError(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnsatisfiedLinkError(const ::java::lang::UnsatisfiedLinkError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    UnsatisfiedLinkError(::java::lang::UnsatisfiedLinkError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::UnsatisfiedLinkError& operator=(const ::java::lang::UnsatisfiedLinkError& x) {obj = x.obj; return *this;}
    ::java::lang::UnsatisfiedLinkError& operator=(::java::lang::UnsatisfiedLinkError&& x) {obj = std::move(x.obj); return *this;}
    
    UnsatisfiedLinkError();
    UnsatisfiedLinkError(const ::java::lang::String&);

};
}
}


