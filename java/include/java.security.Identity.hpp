#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.security.Principal.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Certificate; } }
namespace java { namespace security { class IdentityScope; } }
namespace java { namespace security { class PublicKey; } }

namespace java {
namespace security {
class Identity : public virtual ::java::lang::Object,
                 public virtual ::java::io::Serializable,
                 public virtual ::java::security::Principal {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Identity(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Principal(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Identity(const ::java::security::Identity& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj;}
    Identity(::java::security::Identity&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Identity& operator=(const ::java::security::Identity& x) {obj = x.obj; return *this;}
    ::java::security::Identity& operator=(::java::security::Identity&& x) {obj = std::move(x.obj); return *this;}
    
    Identity(const ::java::lang::String&);
    Identity(const ::java::lang::String&, const ::java::security::IdentityScope&);
    void addCertificate(const ::java::security::Certificate&) const ;
    void removeCertificate(const ::java::security::Certificate&) const ;
    std::vector< ::java::security::Certificate> certificates() const ;
    ::java::lang::String toString(bool) const ;
    ::java::security::IdentityScope getScope() const ;
    void setPublicKey(const ::java::security::PublicKey&) const ;
    ::java::security::PublicKey getPublicKey() const ;
    void setInfo(const ::java::lang::String&) const ;
    ::java::lang::String getInfo() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String getName() const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}


