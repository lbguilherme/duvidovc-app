#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class URI; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace utils {
class URIUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URIUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URIUtils(const ::org::apache::http::client::utils::URIUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URIUtils(::org::apache::http::client::utils::URIUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::utils::URIUtils& operator=(const ::org::apache::http::client::utils::URIUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::utils::URIUtils& operator=(::org::apache::http::client::utils::URIUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::net::URI createURI(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::net::URI rewriteURI(const ::java::net::URI&, const ::org::apache::http::HttpHost&, bool);
    static ::java::net::URI rewriteURI(const ::java::net::URI&, const ::org::apache::http::HttpHost&);
    static ::java::net::URI resolve(const ::java::net::URI&, const ::java::lang::String&);
    static ::java::net::URI resolve(const ::java::net::URI&, const ::java::net::URI&);

};
}
}
}
}
}


