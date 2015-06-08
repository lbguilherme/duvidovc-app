#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.message.LineFormatter.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }
namespace org { namespace apache { namespace http { class StatusLine; } } }
namespace org { namespace apache { namespace http { namespace message { class LineFormatter; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicLineFormatter : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::message::LineFormatter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicLineFormatter(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::message::LineFormatter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicLineFormatter(const ::org::apache::http::message::BasicLineFormatter& x) : ::java::lang::Object((jobject)0), ::org::apache::http::message::LineFormatter((jobject)0) {obj = x.obj;}
    BasicLineFormatter(::org::apache::http::message::BasicLineFormatter&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::message::LineFormatter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicLineFormatter& operator=(const ::org::apache::http::message::BasicLineFormatter& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicLineFormatter& operator=(::org::apache::http::message::BasicLineFormatter&& x) {obj = std::move(x.obj); return *this;}
    
    BasicLineFormatter();
    static ::java::lang::String formatProtocolVersion(const ::org::apache::http::ProtocolVersion&, const ::org::apache::http::message::LineFormatter&);
    ::org::apache::http::util::CharArrayBuffer appendProtocolVersion(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::ProtocolVersion&) const;
    static ::java::lang::String formatRequestLine(const ::org::apache::http::RequestLine&, const ::org::apache::http::message::LineFormatter&);
    ::org::apache::http::util::CharArrayBuffer formatRequestLine(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::RequestLine&) const;
    static ::java::lang::String formatStatusLine(const ::org::apache::http::StatusLine&, const ::org::apache::http::message::LineFormatter&);
    ::org::apache::http::util::CharArrayBuffer formatStatusLine(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::StatusLine&) const;
    static ::java::lang::String formatHeader(const ::org::apache::http::Header&, const ::org::apache::http::message::LineFormatter&);
    ::org::apache::http::util::CharArrayBuffer formatHeader(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::Header&) const;

};
}
}
}
}


