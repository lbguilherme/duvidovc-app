#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IllegalArgumentException.hpp"


namespace java {
namespace nio {
namespace channels {
class UnsupportedAddressTypeException : public virtual ::java::lang::Object,
                                        public virtual ::java::lang::IllegalArgumentException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnsupportedAddressTypeException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalArgumentException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnsupportedAddressTypeException(const ::java::nio::channels::UnsupportedAddressTypeException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    UnsupportedAddressTypeException(::java::nio::channels::UnsupportedAddressTypeException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::UnsupportedAddressTypeException& operator=(const ::java::nio::channels::UnsupportedAddressTypeException& x) {obj = x.obj; return *this;}
    ::java::nio::channels::UnsupportedAddressTypeException& operator=(::java::nio::channels::UnsupportedAddressTypeException&& x) {obj = std::move(x.obj); return *this;}
    
    UnsupportedAddressTypeException();

};
}
}
}


