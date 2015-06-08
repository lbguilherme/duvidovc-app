#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.protocol.HttpRequestHandlerResolver.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpRequestHandler; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpRequestHandlerRegistry : public virtual ::java::lang::Object,
                                   public virtual ::org::apache::http::protocol::HttpRequestHandlerResolver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequestHandlerRegistry(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::protocol::HttpRequestHandlerResolver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequestHandlerRegistry(const ::org::apache::http::protocol::HttpRequestHandlerRegistry& x) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpRequestHandlerResolver((jobject)0) {obj = x.obj;}
    HttpRequestHandlerRegistry(::org::apache::http::protocol::HttpRequestHandlerRegistry&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::protocol::HttpRequestHandlerResolver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpRequestHandlerRegistry& operator=(const ::org::apache::http::protocol::HttpRequestHandlerRegistry& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpRequestHandlerRegistry& operator=(::org::apache::http::protocol::HttpRequestHandlerRegistry&& x) {obj = std::move(x.obj); return *this;}
    
    HttpRequestHandlerRegistry();
    void register_(const ::java::lang::String&, const ::org::apache::http::protocol::HttpRequestHandler&) const;
    void unregister(const ::java::lang::String&) const;
    void setHandlers(const ::java::util::Map&) const;
    ::org::apache::http::protocol::HttpRequestHandler lookup(const ::java::lang::String&) const;

};
}
}
}
}


