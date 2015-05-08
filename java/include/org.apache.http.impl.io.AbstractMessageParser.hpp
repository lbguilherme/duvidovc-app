#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.io.HttpMessageParser.hpp"

namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class HttpMessage; } } }
namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } }
namespace org { namespace apache { namespace http { namespace message { class LineParser; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class AbstractMessageParser : public virtual ::java::lang::Object,
                              public virtual ::org::apache::http::io::HttpMessageParser {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractMessageParser(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::io::HttpMessageParser(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractMessageParser(const ::org::apache::http::impl::io::AbstractMessageParser& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpMessageParser((jobject)0) {obj = x.obj;}
    AbstractMessageParser(::org::apache::http::impl::io::AbstractMessageParser&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpMessageParser((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::AbstractMessageParser& operator=(const ::org::apache::http::impl::io::AbstractMessageParser& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::AbstractMessageParser& operator=(::org::apache::http::impl::io::AbstractMessageParser&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractMessageParser(const ::org::apache::http::io::SessionInputBuffer&, const ::org::apache::http::message::LineParser&, const ::org::apache::http::params::HttpParams&);
    static std::vector< ::org::apache::http::Header> parseHeaders(const ::org::apache::http::io::SessionInputBuffer&, int32_t, int32_t, const ::org::apache::http::message::LineParser&);
    ::org::apache::http::HttpMessage parse() const ;

};
}
}
}
}
}


