#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.auth.AuthScheme.hpp"

namespace org { namespace apache { namespace http { class Header; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace auth {
class AuthSchemeBase : public virtual ::java::lang::Object,
                       public virtual ::org::apache::http::auth::AuthScheme {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthSchemeBase(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::auth::AuthScheme(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthSchemeBase(const ::org::apache::http::impl::auth::AuthSchemeBase& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0) {obj = x.obj;}
    AuthSchemeBase(::org::apache::http::impl::auth::AuthSchemeBase&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::auth::AuthSchemeBase& operator=(const ::org::apache::http::impl::auth::AuthSchemeBase& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::auth::AuthSchemeBase& operator=(::org::apache::http::impl::auth::AuthSchemeBase&& x) {obj = std::move(x.obj); return *this;}
    
    AuthSchemeBase();
    void processChallenge(const ::org::apache::http::Header&) const ;
    bool isProxy() const ;

};
}
}
}
}
}


