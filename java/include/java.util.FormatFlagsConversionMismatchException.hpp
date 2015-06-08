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
class FormatFlagsConversionMismatchException : public virtual ::java::lang::Object,
                                               public virtual ::java::io::Serializable,
                                               public virtual ::java::util::IllegalFormatException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FormatFlagsConversionMismatchException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalArgumentException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj), ::java::util::IllegalFormatException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FormatFlagsConversionMismatchException(const ::java::util::FormatFlagsConversionMismatchException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {obj = x.obj;}
    FormatFlagsConversionMismatchException(::java::util::FormatFlagsConversionMismatchException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::FormatFlagsConversionMismatchException& operator=(const ::java::util::FormatFlagsConversionMismatchException& x) {obj = x.obj; return *this;}
    ::java::util::FormatFlagsConversionMismatchException& operator=(::java::util::FormatFlagsConversionMismatchException&& x) {obj = std::move(x.obj); return *this;}
    
    FormatFlagsConversionMismatchException(const ::java::lang::String&, uint16_t);
    ::java::lang::String getFlags() const;
    uint16_t getConversion() const;
    ::java::lang::String getMessage() const;

};
}
}


