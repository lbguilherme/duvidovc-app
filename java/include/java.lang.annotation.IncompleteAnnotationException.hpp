#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
namespace annotation {
class IncompleteAnnotationException : public virtual ::java::lang::Object,
                                      public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IncompleteAnnotationException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IncompleteAnnotationException(const ::java::lang::annotation::IncompleteAnnotationException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    IncompleteAnnotationException(::java::lang::annotation::IncompleteAnnotationException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::annotation::IncompleteAnnotationException& operator=(const ::java::lang::annotation::IncompleteAnnotationException& x) {obj = x.obj; return *this;}
    ::java::lang::annotation::IncompleteAnnotationException& operator=(::java::lang::annotation::IncompleteAnnotationException&& x) {obj = std::move(x.obj); return *this;}
    
    IncompleteAnnotationException(const ::java::lang::Class&, const ::java::lang::String&);
    ::java::lang::Class annotationType() const;
    ::java::lang::String elementName() const;

};
}
}
}


