#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.auth.AuthSchemeBase.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace auth { class NTLMEngine; } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace auth {
class NTLMScheme : public virtual ::java::lang::Object,
                   public virtual ::org::apache::http::impl::auth::AuthSchemeBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NTLMScheme(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::auth::AuthScheme(_obj), ::org::apache::http::impl::auth::AuthSchemeBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NTLMScheme(const ::org::apache::http::impl::auth::NTLMScheme& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0) {obj = x.obj;}
    NTLMScheme(::org::apache::http::impl::auth::NTLMScheme&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::auth::NTLMScheme& operator=(const ::org::apache::http::impl::auth::NTLMScheme& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::auth::NTLMScheme& operator=(::org::apache::http::impl::auth::NTLMScheme&& x) {obj = std::move(x.obj); return *this;}
    
    NTLMScheme(const ::org::apache::http::impl::auth::NTLMEngine&);
    ::java::lang::String getSchemeName() const;
    ::java::lang::String getParameter(const ::java::lang::String&) const;
    ::java::lang::String getRealm() const;
    bool isConnectionBased() const;
    ::org::apache::http::Header authenticate(const ::org::apache::http::auth::Credentials&, const ::org::apache::http::HttpRequest&) const;
    bool isComplete() const;

};
}
}
}
}
}


