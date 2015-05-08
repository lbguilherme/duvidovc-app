#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "javax.security.auth.callback.Callback.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace security {
namespace auth {
namespace callback {
class PasswordCallback : public virtual ::java::lang::Object,
                         public virtual ::java::io::Serializable,
                         public virtual ::javax::security::auth::callback::Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PasswordCallback(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::javax::security::auth::callback::Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PasswordCallback(const ::javax::security::auth::callback::PasswordCallback& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::javax::security::auth::callback::Callback((jobject)0) {obj = x.obj;}
    PasswordCallback(::javax::security::auth::callback::PasswordCallback&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::javax::security::auth::callback::Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::callback::PasswordCallback& operator=(const ::javax::security::auth::callback::PasswordCallback& x) {obj = x.obj; return *this;}
    ::javax::security::auth::callback::PasswordCallback& operator=(::javax::security::auth::callback::PasswordCallback&& x) {obj = std::move(x.obj); return *this;}
    
    PasswordCallback(const ::java::lang::String&, bool);
    ::java::lang::String getPrompt() const ;
    bool isEchoOn() const ;
    void setPassword(const std::vector< uint16_t>&) const ;
    std::vector< uint16_t> getPassword() const ;
    void clearPassword() const ;

};
}
}
}
}


