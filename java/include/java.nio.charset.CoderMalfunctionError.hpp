#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Error.hpp"

namespace java { namespace lang { class Exception; } }

namespace java {
namespace nio {
namespace charset {
class CoderMalfunctionError : public virtual ::java::lang::Object,
                              public virtual ::java::lang::Error {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CoderMalfunctionError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CoderMalfunctionError(const ::java::nio::charset::CoderMalfunctionError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    CoderMalfunctionError(::java::nio::charset::CoderMalfunctionError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::CoderMalfunctionError& operator=(const ::java::nio::charset::CoderMalfunctionError& x) {obj = x.obj; return *this;}
    ::java::nio::charset::CoderMalfunctionError& operator=(::java::nio::charset::CoderMalfunctionError&& x) {obj = std::move(x.obj); return *this;}
    
    CoderMalfunctionError(const ::java::lang::Exception&);

};
}
}
}


