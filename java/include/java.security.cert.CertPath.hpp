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
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class List; } }

namespace java {
namespace security {
namespace cert {
class CertPath : public virtual ::java::lang::Object,
                 public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertPath(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertPath(const ::java::security::cert::CertPath& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    CertPath(::java::security::cert::CertPath&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertPath& operator=(const ::java::security::cert::CertPath& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertPath& operator=(::java::security::cert::CertPath&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getType() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    ::java::util::List getCertificates() const;
    std::vector< int8_t> getEncoded() const;
    std::vector< int8_t> getEncoded(const ::java::lang::String&) const;
    ::java::util::Iterator getEncodings() const;

};
}
}
}

#include "java.security.cert.CertPath_CertPathRep.hpp"

