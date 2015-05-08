#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
class IllegalArgumentException : public virtual ::java::lang::Object,
                                 public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IllegalArgumentException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IllegalArgumentException(const ::java::lang::IllegalArgumentException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    IllegalArgumentException(::java::lang::IllegalArgumentException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::IllegalArgumentException& operator=(const ::java::lang::IllegalArgumentException& x) {obj = x.obj; return *this;}
    ::java::lang::IllegalArgumentException& operator=(::java::lang::IllegalArgumentException&& x) {obj = std::move(x.obj); return *this;}
    
    IllegalArgumentException();
    IllegalArgumentException(const ::java::lang::String&);
    IllegalArgumentException(const ::java::lang::String&, const ::java::lang::Throwable&);
    IllegalArgumentException(const ::java::lang::Throwable&);

};
}
}


