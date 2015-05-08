#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.IOException.hpp"


namespace java {
namespace io {
class ObjectStreamException : public virtual ::java::lang::Object,
                              public virtual ::java::io::IOException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectStreamException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectStreamException(const ::java::io::ObjectStreamException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ObjectStreamException(::java::io::ObjectStreamException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectStreamException& operator=(const ::java::io::ObjectStreamException& x) {obj = x.obj; return *this;}
    ::java::io::ObjectStreamException& operator=(::java::io::ObjectStreamException&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


