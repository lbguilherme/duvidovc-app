#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.VirtualMachineError.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class UnknownError : public virtual ::java::lang::Object,
                     public virtual ::java::lang::VirtualMachineError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnknownError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj), ::java::lang::VirtualMachineError(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnknownError(const ::java::lang::UnknownError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {obj = x.obj;}
    UnknownError(::java::lang::UnknownError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::UnknownError& operator=(const ::java::lang::UnknownError& x) {obj = x.obj; return *this;}
    ::java::lang::UnknownError& operator=(::java::lang::UnknownError&& x) {obj = std::move(x.obj); return *this;}
    
    UnknownError();
    UnknownError(const ::java::lang::String&);

};
}
}


