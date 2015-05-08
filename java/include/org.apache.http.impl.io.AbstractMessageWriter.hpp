#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.io.HttpMessageWriter.hpp"

namespace org { namespace apache { namespace http { class HttpMessage; } } }
namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } }
namespace org { namespace apache { namespace http { namespace message { class LineFormatter; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class AbstractMessageWriter : public virtual ::java::lang::Object,
                              public virtual ::org::apache::http::io::HttpMessageWriter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractMessageWriter(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::io::HttpMessageWriter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractMessageWriter(const ::org::apache::http::impl::io::AbstractMessageWriter& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpMessageWriter((jobject)0) {obj = x.obj;}
    AbstractMessageWriter(::org::apache::http::impl::io::AbstractMessageWriter&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpMessageWriter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::AbstractMessageWriter& operator=(const ::org::apache::http::impl::io::AbstractMessageWriter& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::AbstractMessageWriter& operator=(::org::apache::http::impl::io::AbstractMessageWriter&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractMessageWriter(const ::org::apache::http::io::SessionOutputBuffer&, const ::org::apache::http::message::LineFormatter&, const ::org::apache::http::params::HttpParams&);
    void write(const ::org::apache::http::HttpMessage&) const ;

};
}
}
}
}
}


