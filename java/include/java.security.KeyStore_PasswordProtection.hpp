#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.KeyStore_ProtectionParameter.hpp"
#include "javax.security.auth.Destroyable.hpp"


namespace java {
namespace security {
class KeyStore_PasswordProtection : public virtual ::java::lang::Object,
                                    public virtual ::java::security::KeyStore_ProtectionParameter,
                                    public virtual ::javax::security::auth::Destroyable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_PasswordProtection(jobject _obj) : ::java::lang::Object(_obj), ::java::security::KeyStore_ProtectionParameter(_obj), ::javax::security::auth::Destroyable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_PasswordProtection(const ::java::security::KeyStore_PasswordProtection& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_ProtectionParameter((jobject)0), ::javax::security::auth::Destroyable((jobject)0) {obj = x.obj;}
    KeyStore_PasswordProtection(::java::security::KeyStore_PasswordProtection&& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_ProtectionParameter((jobject)0), ::javax::security::auth::Destroyable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_PasswordProtection& operator=(const ::java::security::KeyStore_PasswordProtection& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_PasswordProtection& operator=(::java::security::KeyStore_PasswordProtection&& x) {obj = std::move(x.obj); return *this;}
    
    KeyStore_PasswordProtection(const std::vector< uint16_t>&);
    std::vector< uint16_t> getPassword() const ;
    void destroy() const ;
    bool isDestroyed() const ;

};
}
}


