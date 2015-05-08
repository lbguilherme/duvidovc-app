#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Throwable.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
class Exception : public virtual ::java::lang::Object,
                  public virtual ::java::lang::Throwable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Exception(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Exception(const ::java::lang::Exception& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    Exception(::java::lang::Exception&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Exception& operator=(const ::java::lang::Exception& x) {obj = x.obj; return *this;}
    ::java::lang::Exception& operator=(::java::lang::Exception&& x) {obj = std::move(x.obj); return *this;}
    
    Exception();
    Exception(const ::java::lang::String&);
    Exception(const ::java::lang::String&, const ::java::lang::Throwable&);
    Exception(const ::java::lang::Throwable&);

};
}
}


