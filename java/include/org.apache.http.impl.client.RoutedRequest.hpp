#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace client { class RequestWrapper; } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class RoutedRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RoutedRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RoutedRequest(const ::org::apache::http::impl::client::RoutedRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RoutedRequest(::org::apache::http::impl::client::RoutedRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::RoutedRequest& operator=(const ::org::apache::http::impl::client::RoutedRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::RoutedRequest& operator=(::org::apache::http::impl::client::RoutedRequest&& x) {obj = std::move(x.obj); return *this;}
    
    RoutedRequest(const ::org::apache::http::impl::client::RequestWrapper&, const ::org::apache::http::conn::routing::HttpRoute&);
    ::org::apache::http::impl::client::RequestWrapper getRequest() const ;
    ::org::apache::http::conn::routing::HttpRoute getRoute() const ;

};
}
}
}
}
}


