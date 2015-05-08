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
class VerifyError : public virtual ::java::lang::Object,
                    public virtual ::java::lang::LinkageError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VerifyError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::LinkageError(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VerifyError(const ::java::lang::VerifyError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    VerifyError(::java::lang::VerifyError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::VerifyError& operator=(const ::java::lang::VerifyError& x) {obj = x.obj; return *this;}
    ::java::lang::VerifyError& operator=(::java::lang::VerifyError&& x) {obj = std::move(x.obj); return *this;}
    
    VerifyError();
    VerifyError(const ::java::lang::String&);

};
}
}


