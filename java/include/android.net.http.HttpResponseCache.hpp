#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.net.ResponseCache.hpp"

namespace android { namespace net { namespace http { class HttpResponseCache; } } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class CacheRequest; } }
namespace java { namespace net { class CacheResponse; } }
namespace java { namespace net { class URI; } }
namespace java { namespace net { class URLConnection; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace net {
namespace http {
class HttpResponseCache : public virtual ::java::lang::Object,
                          public virtual ::java::io::Closeable,
                          public virtual ::java::net::ResponseCache {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpResponseCache(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::net::ResponseCache(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpResponseCache(const ::android::net::http::HttpResponseCache& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::net::ResponseCache((jobject)0) {obj = x.obj;}
    HttpResponseCache(::android::net::http::HttpResponseCache&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::net::ResponseCache((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::http::HttpResponseCache& operator=(const ::android::net::http::HttpResponseCache& x) {obj = x.obj; return *this;}
    ::android::net::http::HttpResponseCache& operator=(::android::net::http::HttpResponseCache&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::net::http::HttpResponseCache getInstalled();
    static ::android::net::http::HttpResponseCache install(const ::java::io::File&, int64_t);
    ::java::net::CacheResponse get(const ::java::net::URI&, const ::java::lang::String&, const ::java::util::Map&) const;
    ::java::net::CacheRequest put(const ::java::net::URI&, const ::java::net::URLConnection&) const;
    int64_t size() const;
    int64_t maxSize() const;
    void flush() const;
    int32_t getNetworkCount() const;
    int32_t getHitCount() const;
    int32_t getRequestCount() const;
    void close() const;
    void delete_() const;

};
}
}
}


