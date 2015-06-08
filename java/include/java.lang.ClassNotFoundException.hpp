#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
class ClassNotFoundException : public virtual ::java::lang::Object,
                               public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClassNotFoundException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClassNotFoundException(const ::java::lang::ClassNotFoundException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ClassNotFoundException(::java::lang::ClassNotFoundException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ClassNotFoundException& operator=(const ::java::lang::ClassNotFoundException& x) {obj = x.obj; return *this;}
    ::java::lang::ClassNotFoundException& operator=(::java::lang::ClassNotFoundException&& x) {obj = std::move(x.obj); return *this;}
    
    ClassNotFoundException();
    ClassNotFoundException(const ::java::lang::String&);
    ClassNotFoundException(const ::java::lang::String&, const ::java::lang::Throwable&);
    ::java::lang::Throwable getException() const;
    ::java::lang::Throwable getCause() const;

};
}
}


