#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } }
namespace org { namespace apache { namespace http { namespace auth { class AuthScope; } } } }
namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class AuthState : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthState(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthState(const ::org::apache::http::auth::AuthState& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthState(::org::apache::http::auth::AuthState&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::AuthState& operator=(const ::org::apache::http::auth::AuthState& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::AuthState& operator=(::org::apache::http::auth::AuthState&& x) {obj = std::move(x.obj); return *this;}
    
    AuthState();
    void invalidate() const;
    bool isValid() const;
    void setAuthScheme(const ::org::apache::http::auth::AuthScheme&) const;
    ::org::apache::http::auth::AuthScheme getAuthScheme() const;
    ::org::apache::http::auth::Credentials getCredentials() const;
    void setCredentials(const ::org::apache::http::auth::Credentials&) const;
    ::org::apache::http::auth::AuthScope getAuthScope() const;
    void setAuthScope(const ::org::apache::http::auth::AuthScope&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


