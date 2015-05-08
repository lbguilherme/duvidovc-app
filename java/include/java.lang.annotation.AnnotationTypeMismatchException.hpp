#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { namespace reflect { class Method; } } }

namespace java {
namespace lang {
namespace annotation {
class AnnotationTypeMismatchException : public virtual ::java::lang::Object,
                                        public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnnotationTypeMismatchException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnnotationTypeMismatchException(const ::java::lang::annotation::AnnotationTypeMismatchException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AnnotationTypeMismatchException(::java::lang::annotation::AnnotationTypeMismatchException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::annotation::AnnotationTypeMismatchException& operator=(const ::java::lang::annotation::AnnotationTypeMismatchException& x) {obj = x.obj; return *this;}
    ::java::lang::annotation::AnnotationTypeMismatchException& operator=(::java::lang::annotation::AnnotationTypeMismatchException&& x) {obj = std::move(x.obj); return *this;}
    
    AnnotationTypeMismatchException(const ::java::lang::reflect::Method&, const ::java::lang::String&);
    ::java::lang::reflect::Method element() const ;
    ::java::lang::String foundType() const ;

};
}
}
}


