#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.ClientConnectionOperator.hpp"

namespace java { namespace net { class InetAddress; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { class OperatedClientConnection; } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class DefaultClientConnectionOperator : public virtual ::java::lang::Object,
                                        public virtual ::org::apache::http::conn::ClientConnectionOperator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultClientConnectionOperator(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::ClientConnectionOperator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultClientConnectionOperator(const ::org::apache::http::impl::conn::DefaultClientConnectionOperator& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ClientConnectionOperator((jobject)0) {obj = x.obj;}
    DefaultClientConnectionOperator(::org::apache::http::impl::conn::DefaultClientConnectionOperator&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ClientConnectionOperator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::DefaultClientConnectionOperator& operator=(const ::org::apache::http::impl::conn::DefaultClientConnectionOperator& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::DefaultClientConnectionOperator& operator=(::org::apache::http::impl::conn::DefaultClientConnectionOperator&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultClientConnectionOperator(const ::org::apache::http::conn::scheme::SchemeRegistry&);
    ::org::apache::http::conn::OperatedClientConnection createConnection() const;
    void openConnection(const ::org::apache::http::conn::OperatedClientConnection&, const ::org::apache::http::HttpHost&, const ::java::net::InetAddress&, const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;
    void updateSecureConnection(const ::org::apache::http::conn::OperatedClientConnection&, const ::org::apache::http::HttpHost&, const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;

};
}
}
}
}
}


