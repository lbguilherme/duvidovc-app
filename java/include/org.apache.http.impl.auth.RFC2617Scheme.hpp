#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.auth.AuthSchemeBase.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace auth {
class RFC2617Scheme : public virtual ::java::lang::Object,
                      public virtual ::org::apache::http::impl::auth::AuthSchemeBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RFC2617Scheme(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::auth::AuthScheme(_obj), ::org::apache::http::impl::auth::AuthSchemeBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RFC2617Scheme(const ::org::apache::http::impl::auth::RFC2617Scheme& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0) {obj = x.obj;}
    RFC2617Scheme(::org::apache::http::impl::auth::RFC2617Scheme&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::auth::RFC2617Scheme& operator=(const ::org::apache::http::impl::auth::RFC2617Scheme& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::auth::RFC2617Scheme& operator=(::org::apache::http::impl::auth::RFC2617Scheme&& x) {obj = std::move(x.obj); return *this;}
    
    RFC2617Scheme();
    ::java::lang::String getParameter(const ::java::lang::String&) const;
    ::java::lang::String getRealm() const;

};
}
}
}
}
}


