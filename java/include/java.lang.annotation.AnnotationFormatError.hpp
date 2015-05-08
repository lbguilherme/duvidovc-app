#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Error.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
namespace annotation {
class AnnotationFormatError : public virtual ::java::lang::Object,
                              public virtual ::java::lang::Error {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnnotationFormatError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnnotationFormatError(const ::java::lang::annotation::AnnotationFormatError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AnnotationFormatError(::java::lang::annotation::AnnotationFormatError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::annotation::AnnotationFormatError& operator=(const ::java::lang::annotation::AnnotationFormatError& x) {obj = x.obj; return *this;}
    ::java::lang::annotation::AnnotationFormatError& operator=(::java::lang::annotation::AnnotationFormatError&& x) {obj = std::move(x.obj); return *this;}
    
    AnnotationFormatError(const ::java::lang::String&);
    AnnotationFormatError(const ::java::lang::String&, const ::java::lang::Throwable&);
    AnnotationFormatError(const ::java::lang::Throwable&);

};
}
}
}


