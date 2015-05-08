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
class Error : public virtual ::java::lang::Object,
              public virtual ::java::lang::Throwable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Error(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Error(const ::java::lang::Error& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    Error(::java::lang::Error&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Error& operator=(const ::java::lang::Error& x) {obj = x.obj; return *this;}
    ::java::lang::Error& operator=(::java::lang::Error&& x) {obj = std::move(x.obj); return *this;}
    
    Error();
    Error(const ::java::lang::String&);
    Error(const ::java::lang::String&, const ::java::lang::Throwable&);
    Error(const ::java::lang::Throwable&);

};
}
}


