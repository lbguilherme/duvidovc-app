#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class AuthScheme : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthScheme(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthScheme(const ::org::apache::http::auth::AuthScheme& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthScheme(::org::apache::http::auth::AuthScheme&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::AuthScheme& operator=(const ::org::apache::http::auth::AuthScheme& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::AuthScheme& operator=(::org::apache::http::auth::AuthScheme&& x) {obj = std::move(x.obj); return *this;}
    
    void processChallenge(const ::org::apache::http::Header&) const;
    ::java::lang::String getSchemeName() const;
    ::java::lang::String getParameter(const ::java::lang::String&) const;
    ::java::lang::String getRealm() const;
    bool isConnectionBased() const;
    bool isComplete() const;
    ::org::apache::http::Header authenticate(const ::org::apache::http::auth::Credentials&, const ::org::apache::http::HttpRequest&) const;

};
}
}
}
}


