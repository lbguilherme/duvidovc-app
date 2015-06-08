#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.auth.RFC2617Scheme.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace auth {
class BasicScheme : public virtual ::java::lang::Object,
                    public virtual ::org::apache::http::impl::auth::RFC2617Scheme {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicScheme(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::auth::AuthScheme(_obj), ::org::apache::http::impl::auth::AuthSchemeBase(_obj), ::org::apache::http::impl::auth::RFC2617Scheme(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicScheme(const ::org::apache::http::impl::auth::BasicScheme& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0), ::org::apache::http::impl::auth::RFC2617Scheme((jobject)0) {obj = x.obj;}
    BasicScheme(::org::apache::http::impl::auth::BasicScheme&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0), ::org::apache::http::impl::auth::RFC2617Scheme((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::auth::BasicScheme& operator=(const ::org::apache::http::impl::auth::BasicScheme& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::auth::BasicScheme& operator=(::org::apache::http::impl::auth::BasicScheme&& x) {obj = std::move(x.obj); return *this;}
    
    BasicScheme();
    ::java::lang::String getSchemeName() const;
    void processChallenge(const ::org::apache::http::Header&) const;
    bool isComplete() const;
    bool isConnectionBased() const;
    ::org::apache::http::Header authenticate(const ::org::apache::http::auth::Credentials&, const ::org::apache::http::HttpRequest&) const;
    static ::org::apache::http::Header authenticate(const ::org::apache::http::auth::Credentials&, const ::java::lang::String&, bool);

};
}
}
}
}
}


