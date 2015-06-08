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
namespace reflect {
class InvocationTargetException : public virtual ::java::lang::Object,
                                  public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InvocationTargetException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InvocationTargetException(const ::java::lang::reflect::InvocationTargetException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    InvocationTargetException(::java::lang::reflect::InvocationTargetException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::InvocationTargetException& operator=(const ::java::lang::reflect::InvocationTargetException& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::InvocationTargetException& operator=(::java::lang::reflect::InvocationTargetException&& x) {obj = std::move(x.obj); return *this;}
    
    InvocationTargetException(const ::java::lang::Throwable&);
    InvocationTargetException(const ::java::lang::Throwable&, const ::java::lang::String&);
    ::java::lang::Throwable getTargetException() const;
    ::java::lang::Throwable getCause() const;

};
}
}
}


