#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Error.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace util {
class ServiceConfigurationError : public virtual ::java::lang::Object,
                                  public virtual ::java::lang::Error {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServiceConfigurationError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServiceConfigurationError(const ::java::util::ServiceConfigurationError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ServiceConfigurationError(::java::util::ServiceConfigurationError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::ServiceConfigurationError& operator=(const ::java::util::ServiceConfigurationError& x) {obj = x.obj; return *this;}
    ::java::util::ServiceConfigurationError& operator=(::java::util::ServiceConfigurationError&& x) {obj = std::move(x.obj); return *this;}
    
    ServiceConfigurationError(const ::java::lang::String&);
    ServiceConfigurationError(const ::java::lang::String&, const ::java::lang::Throwable&);

};
}
}


