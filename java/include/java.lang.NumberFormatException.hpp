#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IllegalArgumentException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class NumberFormatException : public virtual ::java::lang::Object,
                              public virtual ::java::lang::IllegalArgumentException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NumberFormatException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalArgumentException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NumberFormatException(const ::java::lang::NumberFormatException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    NumberFormatException(::java::lang::NumberFormatException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::NumberFormatException& operator=(const ::java::lang::NumberFormatException& x) {obj = x.obj; return *this;}
    ::java::lang::NumberFormatException& operator=(::java::lang::NumberFormatException&& x) {obj = std::move(x.obj); return *this;}
    
    NumberFormatException();
    NumberFormatException(const ::java::lang::String&);

};
}
}


