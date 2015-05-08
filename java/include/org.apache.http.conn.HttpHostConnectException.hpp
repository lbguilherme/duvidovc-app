#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.ConnectException.hpp"

namespace java { namespace net { class ConnectException; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class HttpHostConnectException : public virtual ::java::lang::Object,
                                 public virtual ::java::net::ConnectException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpHostConnectException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::net::ConnectException(_obj), ::java::net::SocketException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpHostConnectException(const ::org::apache::http::conn::HttpHostConnectException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::ConnectException((jobject)0), ::java::net::SocketException((jobject)0) {obj = x.obj;}
    HttpHostConnectException(::org::apache::http::conn::HttpHostConnectException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::ConnectException((jobject)0), ::java::net::SocketException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::HttpHostConnectException& operator=(const ::org::apache::http::conn::HttpHostConnectException& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::HttpHostConnectException& operator=(::org::apache::http::conn::HttpHostConnectException&& x) {obj = std::move(x.obj); return *this;}
    
    HttpHostConnectException(const ::org::apache::http::HttpHost&, const ::java::net::ConnectException&);
    ::org::apache::http::HttpHost getHost() const ;

};
}
}
}
}


