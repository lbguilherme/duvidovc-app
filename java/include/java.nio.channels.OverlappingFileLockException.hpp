#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IllegalStateException.hpp"


namespace java {
namespace nio {
namespace channels {
class OverlappingFileLockException : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::IllegalStateException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OverlappingFileLockException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalStateException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OverlappingFileLockException(const ::java::nio::channels::OverlappingFileLockException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    OverlappingFileLockException(::java::nio::channels::OverlappingFileLockException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::OverlappingFileLockException& operator=(const ::java::nio::channels::OverlappingFileLockException& x) {obj = x.obj; return *this;}
    ::java::nio::channels::OverlappingFileLockException& operator=(::java::nio::channels::OverlappingFileLockException&& x) {obj = std::move(x.obj); return *this;}
    
    OverlappingFileLockException();

};
}
}
}


