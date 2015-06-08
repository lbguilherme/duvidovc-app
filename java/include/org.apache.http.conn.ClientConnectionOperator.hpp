#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class InetAddress; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { class OperatedClientConnection; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class ClientConnectionOperator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientConnectionOperator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientConnectionOperator(const ::org::apache::http::conn::ClientConnectionOperator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClientConnectionOperator(::org::apache::http::conn::ClientConnectionOperator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ClientConnectionOperator& operator=(const ::org::apache::http::conn::ClientConnectionOperator& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ClientConnectionOperator& operator=(::org::apache::http::conn::ClientConnectionOperator&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::conn::OperatedClientConnection createConnection() const;
    void openConnection(const ::org::apache::http::conn::OperatedClientConnection&, const ::org::apache::http::HttpHost&, const ::java::net::InetAddress&, const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;
    void updateSecureConnection(const ::org::apache::http::conn::OperatedClientConnection&, const ::org::apache::http::HttpHost&, const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;

};
}
}
}
}


