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
class UnsupportedOperationException : public virtual ::java::lang::Object,
                                      public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnsupportedOperationException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnsupportedOperationException(const ::java::lang::UnsupportedOperationException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    UnsupportedOperationException(::java::lang::UnsupportedOperationException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::UnsupportedOperationException& operator=(const ::java::lang::UnsupportedOperationException& x) {obj = x.obj; return *this;}
    ::java::lang::UnsupportedOperationException& operator=(::java::lang::UnsupportedOperationException&& x) {obj = std::move(x.obj); return *this;}
    
    UnsupportedOperationException();
    UnsupportedOperationException(const ::java::lang::String&);
    UnsupportedOperationException(const ::java::lang::String&, const ::java::lang::Throwable&);
    UnsupportedOperationException(const ::java::lang::Throwable&);

};
}
}


