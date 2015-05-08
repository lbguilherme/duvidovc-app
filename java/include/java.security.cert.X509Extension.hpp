#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace security {
namespace cert {
class X509Extension : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509Extension(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509Extension(const ::java::security::cert::X509Extension& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    X509Extension(::java::security::cert::X509Extension&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::X509Extension& operator=(const ::java::security::cert::X509Extension& x) {obj = x.obj; return *this;}
    ::java::security::cert::X509Extension& operator=(::java::security::cert::X509Extension&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Set getCriticalExtensionOIDs() const ;
    std::vector< int8_t> getExtensionValue(const ::java::lang::String&) const ;
    ::java::util::Set getNonCriticalExtensionOIDs() const ;
    bool hasUnsupportedCriticalExtension() const ;

};
}
}
}


