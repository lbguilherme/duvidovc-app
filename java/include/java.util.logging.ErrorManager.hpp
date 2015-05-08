#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace logging {
class ErrorManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ErrorManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ErrorManager(const ::java::util::logging::ErrorManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ErrorManager(::java::util::logging::ErrorManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::ErrorManager& operator=(const ::java::util::logging::ErrorManager& x) {obj = x.obj; return *this;}
    ::java::util::logging::ErrorManager& operator=(::java::util::logging::ErrorManager&& x) {obj = std::move(x.obj); return *this;}
    
    ErrorManager();
    void error(const ::java::lang::String&, const ::java::lang::Exception&, int32_t) const ;

};
}
}
}


