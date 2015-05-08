#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.InternalError.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace zip {
class ZipError : public virtual ::java::lang::Object,
                 public virtual ::java::lang::InternalError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ZipError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::InternalError(_obj), ::java::lang::Throwable(_obj), ::java::lang::VirtualMachineError(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ZipError(const ::java::util::zip::ZipError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::InternalError((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {obj = x.obj;}
    ZipError(::java::util::zip::ZipError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::InternalError((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::VirtualMachineError((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::ZipError& operator=(const ::java::util::zip::ZipError& x) {obj = x.obj; return *this;}
    ::java::util::zip::ZipError& operator=(::java::util::zip::ZipError&& x) {obj = std::move(x.obj); return *this;}
    
    ZipError(const ::java::lang::String&);

};
}
}
}


