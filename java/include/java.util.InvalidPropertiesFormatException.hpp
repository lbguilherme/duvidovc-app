#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.IOException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace util {
class InvalidPropertiesFormatException : public virtual ::java::lang::Object,
                                         public virtual ::java::io::IOException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InvalidPropertiesFormatException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InvalidPropertiesFormatException(const ::java::util::InvalidPropertiesFormatException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    InvalidPropertiesFormatException(::java::util::InvalidPropertiesFormatException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::InvalidPropertiesFormatException& operator=(const ::java::util::InvalidPropertiesFormatException& x) {obj = x.obj; return *this;}
    ::java::util::InvalidPropertiesFormatException& operator=(::java::util::InvalidPropertiesFormatException&& x) {obj = std::move(x.obj); return *this;}
    
    InvalidPropertiesFormatException(const ::java::lang::String&);
    InvalidPropertiesFormatException(const ::java::lang::Throwable&);

};
}
}


