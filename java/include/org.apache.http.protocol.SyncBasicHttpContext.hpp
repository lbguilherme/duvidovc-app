#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.protocol.BasicHttpContext.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class SyncBasicHttpContext : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::protocol::BasicHttpContext {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncBasicHttpContext(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::protocol::BasicHttpContext(_obj), ::org::apache::http::protocol::HttpContext(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncBasicHttpContext(const ::org::apache::http::protocol::SyncBasicHttpContext& x) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::BasicHttpContext((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {obj = x.obj;}
    SyncBasicHttpContext(::org::apache::http::protocol::SyncBasicHttpContext&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::BasicHttpContext((jobject)0), ::org::apache::http::protocol::HttpContext((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::SyncBasicHttpContext& operator=(const ::org::apache::http::protocol::SyncBasicHttpContext& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::SyncBasicHttpContext& operator=(::org::apache::http::protocol::SyncBasicHttpContext&& x) {obj = std::move(x.obj); return *this;}
    
    SyncBasicHttpContext(const ::org::apache::http::protocol::HttpContext&);
    ::java::lang::Object getAttribute(const ::java::lang::String&) const ;
    void setAttribute(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::java::lang::Object removeAttribute(const ::java::lang::String&) const ;

};
}
}
}
}


