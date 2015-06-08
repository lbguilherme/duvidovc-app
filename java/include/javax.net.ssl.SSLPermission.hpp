#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.BasicPermission.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }

namespace javax {
namespace net {
namespace ssl {
class SSLPermission : public virtual ::java::lang::Object,
                      public virtual ::java::security::BasicPermission {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLPermission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::BasicPermission(_obj), ::java::security::Guard(_obj), ::java::security::Permission(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLPermission(const ::javax::net::ssl::SSLPermission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj;}
    SSLPermission(::javax::net::ssl::SSLPermission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLPermission& operator=(const ::javax::net::ssl::SSLPermission& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLPermission& operator=(::javax::net::ssl::SSLPermission&& x) {obj = std::move(x.obj); return *this;}
    
    SSLPermission(const ::java::lang::String&);
    SSLPermission(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getActions() const;
    bool implies(const ::java::security::Permission&) const;

};
}
}
}


