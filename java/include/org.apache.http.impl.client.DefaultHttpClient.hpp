#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.client.AbstractHttpClient.hpp"

namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class DefaultHttpClient : public virtual ::java::lang::Object,
                          public virtual ::org::apache::http::impl::client::AbstractHttpClient {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHttpClient(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::HttpClient(_obj), ::org::apache::http::impl::client::AbstractHttpClient(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHttpClient(const ::org::apache::http::impl::client::DefaultHttpClient& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0), ::org::apache::http::impl::client::AbstractHttpClient((jobject)0) {obj = x.obj;}
    DefaultHttpClient(::org::apache::http::impl::client::DefaultHttpClient&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0), ::org::apache::http::impl::client::AbstractHttpClient((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::DefaultHttpClient& operator=(const ::org::apache::http::impl::client::DefaultHttpClient& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::DefaultHttpClient& operator=(::org::apache::http::impl::client::DefaultHttpClient&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHttpClient(const ::org::apache::http::conn::ClientConnectionManager&, const ::org::apache::http::params::HttpParams&);
    DefaultHttpClient(const ::org::apache::http::params::HttpParams&);
    DefaultHttpClient();

};
}
}
}
}
}


