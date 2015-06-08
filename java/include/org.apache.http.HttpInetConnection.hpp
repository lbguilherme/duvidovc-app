#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpConnection.hpp"

namespace java { namespace net { class InetAddress; } }

namespace org {
namespace apache {
namespace http {
class HttpInetConnection : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::HttpConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpInetConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpInetConnection(const ::org::apache::http::HttpInetConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {obj = x.obj;}
    HttpInetConnection(::org::apache::http::HttpInetConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpInetConnection& operator=(const ::org::apache::http::HttpInetConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpInetConnection& operator=(::org::apache::http::HttpInetConnection&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::InetAddress getLocalAddress() const;
    int32_t getLocalPort() const;
    ::java::net::InetAddress getRemoteAddress() const;
    int32_t getRemotePort() const;

};
}
}
}


