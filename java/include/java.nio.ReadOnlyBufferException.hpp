#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.UnsupportedOperationException.hpp"


namespace java {
namespace nio {
class ReadOnlyBufferException : public virtual ::java::lang::Object,
                                public virtual ::java::lang::UnsupportedOperationException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReadOnlyBufferException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj), ::java::lang::UnsupportedOperationException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReadOnlyBufferException(const ::java::nio::ReadOnlyBufferException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::UnsupportedOperationException((jobject)0) {obj = x.obj;}
    ReadOnlyBufferException(::java::nio::ReadOnlyBufferException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::UnsupportedOperationException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::ReadOnlyBufferException& operator=(const ::java::nio::ReadOnlyBufferException& x) {obj = x.obj; return *this;}
    ::java::nio::ReadOnlyBufferException& operator=(::java::nio::ReadOnlyBufferException&& x) {obj = std::move(x.obj); return *this;}
    
    ReadOnlyBufferException();

};
}
}


