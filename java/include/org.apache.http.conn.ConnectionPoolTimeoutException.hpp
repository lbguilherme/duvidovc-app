#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.ConnectTimeoutException.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class ConnectionPoolTimeoutException : public virtual ::java::lang::Object,
                                       public virtual ::org::apache::http::conn::ConnectTimeoutException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectionPoolTimeoutException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::InterruptedIOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::apache::http::conn::ConnectTimeoutException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectionPoolTimeoutException(const ::org::apache::http::conn::ConnectionPoolTimeoutException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::conn::ConnectTimeoutException((jobject)0) {obj = x.obj;}
    ConnectionPoolTimeoutException(::org::apache::http::conn::ConnectionPoolTimeoutException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::conn::ConnectTimeoutException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ConnectionPoolTimeoutException& operator=(const ::org::apache::http::conn::ConnectionPoolTimeoutException& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ConnectionPoolTimeoutException& operator=(::org::apache::http::conn::ConnectionPoolTimeoutException&& x) {obj = std::move(x.obj); return *this;}
    
    ConnectionPoolTimeoutException();
    ConnectionPoolTimeoutException(const ::java::lang::String&);

};
}
}
}
}


