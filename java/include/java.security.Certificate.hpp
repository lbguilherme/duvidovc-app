#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { class PublicKey; } }

namespace java {
namespace security {
class Certificate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Certificate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Certificate(const ::java::security::Certificate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Certificate(::java::security::Certificate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Certificate& operator=(const ::java::security::Certificate& x) {obj = x.obj; return *this;}
    ::java::security::Certificate& operator=(::java::security::Certificate&& x) {obj = std::move(x.obj); return *this;}
    
    void decode(const ::java::io::InputStream&) const;
    void encode(const ::java::io::OutputStream&) const;
    ::java::lang::String getFormat() const;
    ::java::security::Principal getGuarantor() const;
    ::java::security::Principal getPrincipal() const;
    ::java::security::PublicKey getPublicKey() const;
    ::java::lang::String toString(bool) const;

};
}
}


