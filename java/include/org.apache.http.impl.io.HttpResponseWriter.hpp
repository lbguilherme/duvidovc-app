#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.io.AbstractMessageWriter.hpp"

namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } }
namespace org { namespace apache { namespace http { namespace message { class LineFormatter; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class HttpResponseWriter : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::impl::io::AbstractMessageWriter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpResponseWriter(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::impl::io::AbstractMessageWriter(_obj), ::org::apache::http::io::HttpMessageWriter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpResponseWriter(const ::org::apache::http::impl::io::HttpResponseWriter& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageWriter((jobject)0), ::org::apache::http::io::HttpMessageWriter((jobject)0) {obj = x.obj;}
    HttpResponseWriter(::org::apache::http::impl::io::HttpResponseWriter&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageWriter((jobject)0), ::org::apache::http::io::HttpMessageWriter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::HttpResponseWriter& operator=(const ::org::apache::http::impl::io::HttpResponseWriter& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::HttpResponseWriter& operator=(::org::apache::http::impl::io::HttpResponseWriter&& x) {obj = std::move(x.obj); return *this;}
    
    HttpResponseWriter(const ::org::apache::http::io::SessionOutputBuffer&, const ::org::apache::http::message::LineFormatter&, const ::org::apache::http::params::HttpParams&);

};
}
}
}
}
}


