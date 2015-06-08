#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.auth.AuthSchemeFactory.hpp"

namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace auth {
class DigestSchemeFactory : public virtual ::java::lang::Object,
                            public virtual ::org::apache::http::auth::AuthSchemeFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DigestSchemeFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::auth::AuthSchemeFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DigestSchemeFactory(const ::org::apache::http::impl::auth::DigestSchemeFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthSchemeFactory((jobject)0) {obj = x.obj;}
    DigestSchemeFactory(::org::apache::http::impl::auth::DigestSchemeFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthSchemeFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::auth::DigestSchemeFactory& operator=(const ::org::apache::http::impl::auth::DigestSchemeFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::auth::DigestSchemeFactory& operator=(::org::apache::http::impl::auth::DigestSchemeFactory&& x) {obj = std::move(x.obj); return *this;}
    
    DigestSchemeFactory();
    ::org::apache::http::auth::AuthScheme newInstance(const ::org::apache::http::params::HttpParams&) const;

};
}
}
}
}
}


