#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class AbstractPoolEntry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractPoolEntry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractPoolEntry(const ::org::apache::http::impl::conn::AbstractPoolEntry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AbstractPoolEntry(::org::apache::http::impl::conn::AbstractPoolEntry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::AbstractPoolEntry& operator=(const ::org::apache::http::impl::conn::AbstractPoolEntry& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::AbstractPoolEntry& operator=(::org::apache::http::impl::conn::AbstractPoolEntry&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object getState() const;
    void setState(const ::java::lang::Object&) const;
    void open(const ::org::apache::http::conn::routing::HttpRoute&, const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;
    void tunnelTarget(bool, const ::org::apache::http::params::HttpParams&) const;
    void tunnelProxy(const ::org::apache::http::HttpHost&, bool, const ::org::apache::http::params::HttpParams&) const;
    void layerProtocol(const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;

};
}
}
}
}
}


