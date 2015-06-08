#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.routing.HttpRoutePlanner.hpp"

namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class DefaultHttpRoutePlanner : public virtual ::java::lang::Object,
                                public virtual ::org::apache::http::conn::routing::HttpRoutePlanner {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHttpRoutePlanner(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::routing::HttpRoutePlanner(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHttpRoutePlanner(const ::org::apache::http::impl::conn::DefaultHttpRoutePlanner& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRoutePlanner((jobject)0) {obj = x.obj;}
    DefaultHttpRoutePlanner(::org::apache::http::impl::conn::DefaultHttpRoutePlanner&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRoutePlanner((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::DefaultHttpRoutePlanner& operator=(const ::org::apache::http::impl::conn::DefaultHttpRoutePlanner& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::DefaultHttpRoutePlanner& operator=(::org::apache::http::impl::conn::DefaultHttpRoutePlanner&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHttpRoutePlanner(const ::org::apache::http::conn::scheme::SchemeRegistry&);
    ::org::apache::http::conn::routing::HttpRoute determineRoute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}
}


