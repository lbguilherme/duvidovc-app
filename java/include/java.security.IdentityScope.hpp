#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.Identity.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Identity; } }
namespace java { namespace security { class IdentityScope; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace security {
class IdentityScope : public virtual ::java::lang::Object,
                      public virtual ::java::security::Identity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IdentityScope(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Identity(_obj), ::java::security::Principal(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IdentityScope(const ::java::security::IdentityScope& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Identity((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj;}
    IdentityScope(::java::security::IdentityScope&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Identity((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::IdentityScope& operator=(const ::java::security::IdentityScope& x) {obj = x.obj; return *this;}
    ::java::security::IdentityScope& operator=(::java::security::IdentityScope&& x) {obj = std::move(x.obj); return *this;}
    
    IdentityScope(const ::java::lang::String&);
    IdentityScope(const ::java::lang::String&, const ::java::security::IdentityScope&);
    static ::java::security::IdentityScope getSystemScope();
    int32_t size() const;
    ::java::security::Identity getIdentity(const ::java::lang::String&) const;
    ::java::security::Identity getIdentity(const ::java::security::Principal&) const;
    ::java::security::Identity getIdentity(const ::java::security::PublicKey&) const;
    void addIdentity(const ::java::security::Identity&) const;
    void removeIdentity(const ::java::security::Identity&) const;
    ::java::util::Enumeration identities() const;
    ::java::lang::String toString() const;

};
}
}


