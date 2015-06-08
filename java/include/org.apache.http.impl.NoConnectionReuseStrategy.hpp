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
class NoConnectionReuseStrategy : public virtual ::java::lang::Object,
                                  public virtual ::org::apache::http::ConnectionReuseStrategy {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NoConnectionReuseStrategy(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::ConnectionReuseStrategy(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NoConnectionReuseStrategy(const ::org::apache::http::impl::NoConnectionReuseStrategy& x) : ::java::lang::Object((jobject)0), ::org::apache::http::ConnectionReuseStrategy((jobject)0) {obj = x.obj;}
    NoConnectionReuseStrategy(::org::apache::http::impl::NoConnectionReuseStrategy&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::ConnectionReuseStrategy((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::NoConnectionReuseStrategy& operator=(const ::org::apache::http::impl::NoConnectionReuseStrategy& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::NoConnectionReuseStrategy& operator=(::org::apache::http::impl::NoConnectionReuseStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    NoConnectionReuseStrategy();
    bool keepAlive(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}


