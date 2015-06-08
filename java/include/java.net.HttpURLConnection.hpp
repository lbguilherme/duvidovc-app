#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.URLConnection.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }

namespace java {
namespace net {
class HttpURLConnection : public virtual ::java::lang::Object,
                          public virtual ::java::net::URLConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpURLConnection(jobject _obj) : ::java::lang::Object(_obj), ::java::net::URLConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpURLConnection(const ::java::net::HttpURLConnection& x) : ::java::lang::Object((jobject)0), ::java::net::URLConnection((jobject)0) {obj = x.obj;}
    HttpURLConnection(::java::net::HttpURLConnection&& x) : ::java::lang::Object((jobject)0), ::java::net::URLConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::HttpURLConnection& operator=(const ::java::net::HttpURLConnection& x) {obj = x.obj; return *this;}
    ::java::net::HttpURLConnection& operator=(::java::net::HttpURLConnection&& x) {obj = std::move(x.obj); return *this;}
    
    void disconnect() const;
    ::java::io::InputStream getErrorStream() const;
    static bool getFollowRedirects();
    ::java::security::Permission getPermission() const;
    ::java::lang::String getRequestMethod() const;
    int32_t getResponseCode() const;
    ::java::lang::String getResponseMessage() const;
    static void setFollowRedirects(bool);
    void setRequestMethod(const ::java::lang::String&) const;
    bool usingProxy() const;
    ::java::lang::String getContentEncoding() const;
    bool getInstanceFollowRedirects() const;
    void setInstanceFollowRedirects(bool) const;
    int64_t getHeaderFieldDate(const ::java::lang::String&, int64_t) const;
    void setFixedLengthStreamingMode(int32_t) const;
    void setChunkedStreamingMode(int32_t) const;

};
}
}


