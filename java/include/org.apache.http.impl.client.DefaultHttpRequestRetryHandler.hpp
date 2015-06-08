#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.HttpRequestRetryHandler.hpp"

namespace java { namespace io { class IOException; } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class DefaultHttpRequestRetryHandler : public virtual ::java::lang::Object,
                                       public virtual ::org::apache::http::client::HttpRequestRetryHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHttpRequestRetryHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::HttpRequestRetryHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHttpRequestRetryHandler(const ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpRequestRetryHandler((jobject)0) {obj = x.obj;}
    DefaultHttpRequestRetryHandler(::org::apache::http::impl::client::DefaultHttpRequestRetryHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpRequestRetryHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler& operator=(const ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler& operator=(::org::apache::http::impl::client::DefaultHttpRequestRetryHandler&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHttpRequestRetryHandler(int32_t, bool);
    DefaultHttpRequestRetryHandler();
    bool retryRequest(const ::java::io::IOException&, int32_t, const ::org::apache::http::protocol::HttpContext&) const;
    bool isRequestSentRetryEnabled() const;
    int32_t getRetryCount() const;

};
}
}
}
}
}


