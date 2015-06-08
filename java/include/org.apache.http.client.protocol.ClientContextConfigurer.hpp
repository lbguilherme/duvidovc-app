#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.protocol.ClientContext.hpp"

namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { namespace auth { class AuthSchemeRegistry; } } } }
namespace org { namespace apache { namespace http { namespace client { class CookieStore; } } } }
namespace org { namespace apache { namespace http { namespace client { class CredentialsProvider; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieSpecRegistry; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace protocol {
class ClientContextConfigurer : public virtual ::java::lang::Object,
                                public virtual ::org::apache::http::client::protocol::ClientContext {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientContextConfigurer(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::protocol::ClientContext(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientContextConfigurer(const ::org::apache::http::client::protocol::ClientContextConfigurer& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::protocol::ClientContext((jobject)0) {obj = x.obj;}
    ClientContextConfigurer(::org::apache::http::client::protocol::ClientContextConfigurer&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::protocol::ClientContext((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::protocol::ClientContextConfigurer& operator=(const ::org::apache::http::client::protocol::ClientContextConfigurer& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::protocol::ClientContextConfigurer& operator=(::org::apache::http::client::protocol::ClientContextConfigurer&& x) {obj = std::move(x.obj); return *this;}
    
    ClientContextConfigurer(const ::org::apache::http::protocol::HttpContext&);
    void setCookieSpecRegistry(const ::org::apache::http::cookie::CookieSpecRegistry&) const;
    void setAuthSchemeRegistry(const ::org::apache::http::auth::AuthSchemeRegistry&) const;
    void setCookieStore(const ::org::apache::http::client::CookieStore&) const;
    void setCredentialsProvider(const ::org::apache::http::client::CredentialsProvider&) const;
    void setAuthSchemePref(const ::java::util::List&) const;

};
}
}
}
}
}


