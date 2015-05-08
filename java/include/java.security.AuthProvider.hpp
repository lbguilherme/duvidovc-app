#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.Provider.hpp"

namespace javax { namespace security { namespace auth { class Subject; } } }
namespace javax { namespace security { namespace auth { namespace callback { class CallbackHandler; } } } }

namespace java {
namespace security {
class AuthProvider : public virtual ::java::lang::Object,
                     public virtual ::java::security::Provider {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthProvider(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::security::Provider(_obj), ::java::util::Dictionary(_obj), ::java::util::Hashtable(_obj), ::java::util::Map(_obj), ::java::util::Properties(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthProvider(const ::java::security::AuthProvider& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::Provider((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Hashtable((jobject)0), ::java::util::Map((jobject)0), ::java::util::Properties((jobject)0) {obj = x.obj;}
    AuthProvider(::java::security::AuthProvider&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::Provider((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Hashtable((jobject)0), ::java::util::Map((jobject)0), ::java::util::Properties((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AuthProvider& operator=(const ::java::security::AuthProvider& x) {obj = x.obj; return *this;}
    ::java::security::AuthProvider& operator=(::java::security::AuthProvider&& x) {obj = std::move(x.obj); return *this;}
    
    void login(const ::javax::security::auth::Subject&, const ::javax::security::auth::callback::CallbackHandler&) const ;
    void logout() const ;
    void setCallbackHandler(const ::javax::security::auth::callback::CallbackHandler&) const ;

};
}
}


