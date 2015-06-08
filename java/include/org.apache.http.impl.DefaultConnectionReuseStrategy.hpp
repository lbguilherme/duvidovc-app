#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.ConnectionReuseStrategy.hpp"

namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class DefaultConnectionReuseStrategy : public virtual ::java::lang::Object,
                                       public virtual ::org::apache::http::ConnectionReuseStrategy {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultConnectionReuseStrategy(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::ConnectionReuseStrategy(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultConnectionReuseStrategy(const ::org::apache::http::impl::DefaultConnectionReuseStrategy& x) : ::java::lang::Object((jobject)0), ::org::apache::http::ConnectionReuseStrategy((jobject)0) {obj = x.obj;}
    DefaultConnectionReuseStrategy(::org::apache::http::impl::DefaultConnectionReuseStrategy&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::ConnectionReuseStrategy((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::DefaultConnectionReuseStrategy& operator=(const ::org::apache::http::impl::DefaultConnectionReuseStrategy& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::DefaultConnectionReuseStrategy& operator=(::org::apache::http::impl::DefaultConnectionReuseStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultConnectionReuseStrategy();
    bool keepAlive(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}


