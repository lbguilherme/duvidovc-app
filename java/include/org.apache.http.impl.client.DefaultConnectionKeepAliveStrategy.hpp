#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.ConnectionKeepAliveStrategy.hpp"

namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class DefaultConnectionKeepAliveStrategy : public virtual ::java::lang::Object,
                                           public virtual ::org::apache::http::conn::ConnectionKeepAliveStrategy {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultConnectionKeepAliveStrategy(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::ConnectionKeepAliveStrategy(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultConnectionKeepAliveStrategy(const ::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ConnectionKeepAliveStrategy((jobject)0) {obj = x.obj;}
    DefaultConnectionKeepAliveStrategy(::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ConnectionKeepAliveStrategy((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy& operator=(const ::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy& operator=(::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultConnectionKeepAliveStrategy();
    int64_t getKeepAliveDuration(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}
}


