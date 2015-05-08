#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class NoSuchFieldException : public virtual ::java::lang::Object,
                             public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NoSuchFieldException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NoSuchFieldException(const ::java::lang::NoSuchFieldException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    NoSuchFieldException(::java::lang::NoSuchFieldException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::NoSuchFieldException& operator=(const ::java::lang::NoSuchFieldException& x) {obj = x.obj; return *this;}
    ::java::lang::NoSuchFieldException& operator=(::java::lang::NoSuchFieldException&& x) {obj = std::move(x.obj); return *this;}
    
    NoSuchFieldException();
    NoSuchFieldException(const ::java::lang::String&);

};
}
}


