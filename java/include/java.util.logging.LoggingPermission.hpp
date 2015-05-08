#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.security.BasicPermission.hpp"
#include "java.security.Guard.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }

namespace java {
namespace util {
namespace logging {
class LoggingPermission : public virtual ::java::lang::Object,
                          public virtual ::java::io::Serializable,
                          public virtual ::java::security::BasicPermission,
                          public virtual ::java::security::Guard {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoggingPermission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::BasicPermission(_obj), ::java::security::Guard(_obj), ::java::security::Permission(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoggingPermission(const ::java::util::logging::LoggingPermission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj;}
    LoggingPermission(::java::util::logging::LoggingPermission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::LoggingPermission& operator=(const ::java::util::logging::LoggingPermission& x) {obj = x.obj; return *this;}
    ::java::util::logging::LoggingPermission& operator=(::java::util::logging::LoggingPermission&& x) {obj = std::move(x.obj); return *this;}
    
    LoggingPermission(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getActions() const ;
    bool implies(const ::java::security::Permission&) const ;

};
}
}
}


