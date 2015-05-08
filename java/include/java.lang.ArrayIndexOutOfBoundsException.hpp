#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IndexOutOfBoundsException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class ArrayIndexOutOfBoundsException : public virtual ::java::lang::Object,
                                       public virtual ::java::lang::IndexOutOfBoundsException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ArrayIndexOutOfBoundsException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IndexOutOfBoundsException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ArrayIndexOutOfBoundsException(const ::java::lang::ArrayIndexOutOfBoundsException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ArrayIndexOutOfBoundsException(::java::lang::ArrayIndexOutOfBoundsException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ArrayIndexOutOfBoundsException& operator=(const ::java::lang::ArrayIndexOutOfBoundsException& x) {obj = x.obj; return *this;}
    ::java::lang::ArrayIndexOutOfBoundsException& operator=(::java::lang::ArrayIndexOutOfBoundsException&& x) {obj = std::move(x.obj); return *this;}
    
    ArrayIndexOutOfBoundsException();
    ArrayIndexOutOfBoundsException(int32_t);
    ArrayIndexOutOfBoundsException(const ::java::lang::String&);

};
}
}


