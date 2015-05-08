#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.HttpClient.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { class ConnectionReuseStrategy; } } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpRequestInterceptor; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { class HttpResponseInterceptor; } } }
namespace org { namespace apache { namespace http { namespace auth { class AuthSchemeRegistry; } } } }
namespace org { namespace apache { namespace http { namespace client { class AuthenticationHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { class CookieStore; } } } }
namespace org { namespace apache { namespace http { namespace client { class CredentialsProvider; } } } }
namespace org { namespace apache { namespace http { namespace client { class HttpRequestRetryHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { class RedirectHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { class ResponseHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { class UserTokenHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpUriRequest; } } } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } }
namespace org { namespace apache { namespace http { namespace conn { class ConnectionKeepAliveStrategy; } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoutePlanner; } } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieSpecRegistry; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpRequestExecutor; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class AbstractHttpClient : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::client::HttpClient {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractHttpClient(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::HttpClient(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractHttpClient(const ::org::apache::http::impl::client::AbstractHttpClient& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0) {obj = x.obj;}
    AbstractHttpClient(::org::apache::http::impl::client::AbstractHttpClient&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::AbstractHttpClient& operator=(const ::org::apache::http::impl::client::AbstractHttpClient& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::AbstractHttpClient& operator=(::org::apache::http::impl::client::AbstractHttpClient&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::params::HttpParams getParams() const ;
    void setParams(const ::org::apache::http::params::HttpParams&) const ;
    ::org::apache::http::conn::ClientConnectionManager getConnectionManager() const ;
    ::org::apache::http::protocol::HttpRequestExecutor getRequestExecutor() const ;
    ::org::apache::http::auth::AuthSchemeRegistry getAuthSchemes() const ;
    void setAuthSchemes(const ::org::apache::http::auth::AuthSchemeRegistry&) const ;
    ::org::apache::http::cookie::CookieSpecRegistry getCookieSpecs() const ;
    void setCookieSpecs(const ::org::apache::http::cookie::CookieSpecRegistry&) const ;
    ::org::apache::http::ConnectionReuseStrategy getConnectionReuseStrategy() const ;
    void setReuseStrategy(const ::org::apache::http::ConnectionReuseStrategy&) const ;
    ::org::apache::http::conn::ConnectionKeepAliveStrategy getConnectionKeepAliveStrategy() const ;
    void setKeepAliveStrategy(const ::org::apache::http::conn::ConnectionKeepAliveStrategy&) const ;
    ::org::apache::http::client::HttpRequestRetryHandler getHttpRequestRetryHandler() const ;
    void setHttpRequestRetryHandler(const ::org::apache::http::client::HttpRequestRetryHandler&) const ;
    ::org::apache::http::client::RedirectHandler getRedirectHandler() const ;
    void setRedirectHandler(const ::org::apache::http::client::RedirectHandler&) const ;
    ::org::apache::http::client::AuthenticationHandler getTargetAuthenticationHandler() const ;
    void setTargetAuthenticationHandler(const ::org::apache::http::client::AuthenticationHandler&) const ;
    ::org::apache::http::client::AuthenticationHandler getProxyAuthenticationHandler() const ;
    void setProxyAuthenticationHandler(const ::org::apache::http::client::AuthenticationHandler&) const ;
    ::org::apache::http::client::CookieStore getCookieStore() const ;
    void setCookieStore(const ::org::apache::http::client::CookieStore&) const ;
    ::org::apache::http::client::CredentialsProvider getCredentialsProvider() const ;
    void setCredentialsProvider(const ::org::apache::http::client::CredentialsProvider&) const ;
    ::org::apache::http::conn::routing::HttpRoutePlanner getRoutePlanner() const ;
    void setRoutePlanner(const ::org::apache::http::conn::routing::HttpRoutePlanner&) const ;
    ::org::apache::http::client::UserTokenHandler getUserTokenHandler() const ;
    void setUserTokenHandler(const ::org::apache::http::client::UserTokenHandler&) const ;
    void addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor&) const ;
    void addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor&, int32_t) const ;
    ::org::apache::http::HttpResponseInterceptor getResponseInterceptor(int32_t) const ;
    int32_t getResponseInterceptorCount() const ;
    void clearResponseInterceptors() const ;
    void removeResponseInterceptorByClass(const ::java::lang::Class&) const ;
    void addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor&) const ;
    void addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor&, int32_t) const ;
    ::org::apache::http::HttpRequestInterceptor getRequestInterceptor(int32_t) const ;
    int32_t getRequestInterceptorCount() const ;
    void clearRequestInterceptors() const ;
    void removeRequestInterceptorByClass(const ::java::lang::Class&) const ;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::client::methods::HttpUriRequest&) const ;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::protocol::HttpContext&) const ;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&) const ;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const ;
    ::java::lang::Object execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::client::ResponseHandler&) const ;
    ::java::lang::Object execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::client::ResponseHandler&, const ::org::apache::http::protocol::HttpContext&) const ;
    ::java::lang::Object execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::client::ResponseHandler&) const ;
    ::java::lang::Object execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::client::ResponseHandler&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}
}


