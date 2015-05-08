#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpClientConnection.hpp"
#include "org.apache.http.HttpInetConnection.hpp"

namespace java { namespace net { class Socket; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class OperatedClientConnection : public virtual ::java::lang::Object,
                                 public virtual ::org::apache::http::HttpClientConnection,
                                 public virtual ::org::apache::http::HttpInetConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OperatedClientConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OperatedClientConnection(const ::org::apache::http::conn::OperatedClientConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0) {obj = x.obj;}
    OperatedClientConnection(::org::apache::http::conn::OperatedClientConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::OperatedClientConnection& operator=(const ::org::apache::http::conn::OperatedClientConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::OperatedClientConnection& operator=(::org::apache::http::conn::OperatedClientConnection&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::HttpHost getTargetHost() const ;
    bool isSecure() const ;
    ::java::net::Socket getSocket() const ;
    void opening(const ::java::net::Socket&, const ::org::apache::http::HttpHost&) const ;
    void openCompleted(bool, const ::org::apache::http::params::HttpParams&) const ;
    void update(const ::java::net::Socket&, const ::org::apache::http::HttpHost&, bool, const ::org::apache::http::params::HttpParams&) const ;

};
}
}
}
}


