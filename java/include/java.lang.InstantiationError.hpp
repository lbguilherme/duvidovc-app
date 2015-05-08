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
class InstantiationError : public virtual ::java::lang::Object,
                           public virtual ::java::lang::IncompatibleClassChangeError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InstantiationError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::IncompatibleClassChangeError(_obj), ::java::lang::LinkageError(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InstantiationError(const ::java::lang::InstantiationError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    InstantiationError(::java::lang::InstantiationError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::IncompatibleClassChangeError((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::InstantiationError& operator=(const ::java::lang::InstantiationError& x) {obj = x.obj; return *this;}
    ::java::lang::InstantiationError& operator=(::java::lang::InstantiationError&& x) {obj = std::move(x.obj); return *this;}
    
    InstantiationError();
    InstantiationError(const ::java::lang::String&);

};
}
}


