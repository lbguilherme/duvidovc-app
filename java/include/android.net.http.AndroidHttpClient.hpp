#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.HttpClient.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Context; } }
namespace android { namespace net { namespace http { class AndroidHttpClient; } } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace client { class ResponseHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpUriRequest; } } } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } }
namespace org { namespace apache { namespace http { namespace entity { class AbstractHttpEntity; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace android {
namespace net {
namespace http {
class AndroidHttpClient : public virtual ::java::lang::Object,
                          public virtual ::org::apache::http::client::HttpClient {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AndroidHttpClient(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::HttpClient(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AndroidHttpClient(const ::android::net::http::AndroidHttpClient& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0) {obj = x.obj;}
    AndroidHttpClient(::android::net::http::AndroidHttpClient&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::http::AndroidHttpClient& operator=(const ::android::net::http::AndroidHttpClient& x) {obj = x.obj; return *this;}
    ::android::net::http::AndroidHttpClient& operator=(::android::net::http::AndroidHttpClient&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::net::http::AndroidHttpClient newInstance(const ::java::lang::String&, const ::android::content::Context&);
    static ::android::net::http::AndroidHttpClient newInstance(const ::java::lang::String&);
    static void modifyRequestToAcceptGzipResponse(const ::org::apache::http::HttpRequest&);
    static ::java::io::InputStream getUngzippedContent(const ::org::apache::http::HttpEntity&);
    void close() const ;
    ::org::apache::http::params::HttpParams getParams() const ;
    ::org::apache::http::conn::ClientConnectionManager getConnectionManager() const ;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::client::methods::HttpUriRequest&) const ;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::protocol::HttpContext&) const ;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&) const ;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const ;
    ::java::lang::Object execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::client::ResponseHandler&) const ;
    ::java::lang::Object execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::client::ResponseHandler&, const ::org::apache::http::protocol::HttpContext&) const ;
    ::java::lang::Object execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::client::ResponseHandler&) const ;
    ::java::lang::Object execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::client::ResponseHandler&, const ::org::apache::http::protocol::HttpContext&) const ;
    static ::org::apache::http::entity::AbstractHttpEntity getCompressedEntity(const std::vector< int8_t>&, const ::android::content::ContentResolver&);
    static int64_t getMinGzipSize(const ::android::content::ContentResolver&);
    void enableCurlLogging(const ::java::lang::String&, int32_t) const ;
    void disableCurlLogging() const ;
    static int64_t parseDate(const ::java::lang::String&);

};
}
}
}


