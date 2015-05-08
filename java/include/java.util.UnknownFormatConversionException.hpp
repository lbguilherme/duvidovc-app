#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.IllegalFormatException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
class UnknownFormatConversionException : public virtual ::java::lang::Object,
                                         public virtual ::java::util::IllegalFormatException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnknownFormatConversionException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalArgumentException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj), ::java::util::IllegalFormatException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnknownFormatConversionException(const ::java::util::UnknownFormatConversionException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {obj = x.obj;}
    UnknownFormatConversionException(::java::util::UnknownFormatConversionException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::UnknownFormatConversionException& operator=(const ::java::util::UnknownFormatConversionException& x) {obj = x.obj; return *this;}
    ::java::util::UnknownFormatConversionException& operator=(::java::util::UnknownFormatConversionException&& x) {obj = std::move(x.obj); return *this;}
    
    UnknownFormatConversionException(const ::java::lang::String&);
    ::java::lang::String getConversion() const ;
    ::java::lang::String getMessage() const ;

};
}
}


