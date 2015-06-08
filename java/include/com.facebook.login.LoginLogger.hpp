#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace login { class LoginClient_Request; } } }
namespace com { namespace facebook { namespace login { class LoginClient_Result_Code; } } }
namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace com {
namespace facebook {
namespace login {
class LoginLogger : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginLogger(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginLogger(const ::com::facebook::login::LoginLogger& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoginLogger(::com::facebook::login::LoginLogger&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginLogger& operator=(const ::com::facebook::login::LoginLogger& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginLogger& operator=(::com::facebook::login::LoginLogger&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getApplicationId() const;
    void logStartLogin(const ::com::facebook::login::LoginClient_Request&) const;
    void logCompleteLogin(const ::java::lang::String&, const ::java::util::Map&, const ::com::facebook::login::LoginClient_Result_Code&, const ::java::util::Map&, const ::java::lang::Exception&) const;
    void logAuthorizationMethodStart(const ::java::lang::String&, const ::java::lang::String&) const;
    void logAuthorizationMethodComplete(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::util::Map&) const;
    void logUnexpectedError(const ::java::lang::String&, const ::java::lang::String&) const;
    void logUnexpectedError(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}
}


