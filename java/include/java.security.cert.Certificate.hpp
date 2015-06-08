#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class PublicKey; } }

namespace java {
namespace security {
namespace cert {
class Certificate : public virtual ::java::lang::Object,
                    public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Certificate(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Certificate(const ::java::security::cert::Certificate& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Certificate(::java::security::cert::Certificate&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::Certificate& operator=(const ::java::security::cert::Certificate& x) {obj = x.obj; return *this;}
    ::java::security::cert::Certificate& operator=(::java::security::cert::Certificate&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getType() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    std::vector< int8_t> getEncoded() const;
    void verify(const ::java::security::PublicKey&) const;
    void verify(const ::java::security::PublicKey&, const ::java::lang::String&) const;
    ::java::lang::String toString() const;
    ::java::security::PublicKey getPublicKey() const;

};
}
}
}

#include "java.security.cert.Certificate_CertificateRep.hpp"

