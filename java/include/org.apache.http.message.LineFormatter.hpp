#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }
namespace org { namespace apache { namespace http { class StatusLine; } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class LineFormatter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LineFormatter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LineFormatter(const ::org::apache::http::message::LineFormatter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LineFormatter(::org::apache::http::message::LineFormatter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::LineFormatter& operator=(const ::org::apache::http::message::LineFormatter& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::LineFormatter& operator=(::org::apache::http::message::LineFormatter&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::util::CharArrayBuffer appendProtocolVersion(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::ProtocolVersion&) const;
    ::org::apache::http::util::CharArrayBuffer formatRequestLine(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::RequestLine&) const;
    ::org::apache::http::util::CharArrayBuffer formatStatusLine(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::StatusLine&) const;
    ::org::apache::http::util::CharArrayBuffer formatHeader(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::Header&) const;

};
}
}
}
}


