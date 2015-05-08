#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.IllegalFormatException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
class IllegalFormatCodePointException : public virtual ::java::lang::Object,
                                        public virtual ::java::io::Serializable,
                                        public virtual ::java::util::IllegalFormatException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IllegalFormatCodePointException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalArgumentException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj), ::java::util::IllegalFormatException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IllegalFormatCodePointException(const ::java::util::IllegalFormatCodePointException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {obj = x.obj;}
    IllegalFormatCodePointException(::java::util::IllegalFormatCodePointException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::IllegalFormatCodePointException& operator=(const ::java::util::IllegalFormatCodePointException& x) {obj = x.obj; return *this;}
    ::java::util::IllegalFormatCodePointException& operator=(::java::util::IllegalFormatCodePointException&& x) {obj = std::move(x.obj); return *this;}
    
    IllegalFormatCodePointException(int32_t);
    int32_t getCodePoint() const ;
    ::java::lang::String getMessage() const ;

};
}
}


