#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.io.AbstractMessageParser.hpp"

namespace org { namespace apache { namespace http { class HttpResponseFactory; } } }
namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } }
namespace org { namespace apache { namespace http { namespace message { class LineParser; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class HttpResponseParser : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::impl::io::AbstractMessageParser {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpResponseParser(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::impl::io::AbstractMessageParser(_obj), ::org::apache::http::io::HttpMessageParser(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpResponseParser(const ::org::apache::http::impl::io::HttpResponseParser& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageParser((jobject)0), ::org::apache::http::io::HttpMessageParser((jobject)0) {obj = x.obj;}
    HttpResponseParser(::org::apache::http::impl::io::HttpResponseParser&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageParser((jobject)0), ::org::apache::http::io::HttpMessageParser((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::HttpResponseParser& operator=(const ::org::apache::http::impl::io::HttpResponseParser& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::HttpResponseParser& operator=(::org::apache::http::impl::io::HttpResponseParser&& x) {obj = std::move(x.obj); return *this;}
    
    HttpResponseParser(const ::org::apache::http::io::SessionInputBuffer&, const ::org::apache::http::message::LineParser&, const ::org::apache::http::HttpResponseFactory&, const ::org::apache::http::params::HttpParams&);

};
}
}
}
}
}


