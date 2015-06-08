#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.message.LineParser.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }
namespace org { namespace apache { namespace http { class StatusLine; } } }
namespace org { namespace apache { namespace http { namespace message { class LineParser; } } } }
namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicLineParser : public virtual ::java::lang::Object,
                        public virtual ::org::apache::http::message::LineParser {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicLineParser(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::message::LineParser(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicLineParser(const ::org::apache::http::message::BasicLineParser& x) : ::java::lang::Object((jobject)0), ::org::apache::http::message::LineParser((jobject)0) {obj = x.obj;}
    BasicLineParser(::org::apache::http::message::BasicLineParser&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::message::LineParser((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicLineParser& operator=(const ::org::apache::http::message::BasicLineParser& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicLineParser& operator=(::org::apache::http::message::BasicLineParser&& x) {obj = std::move(x.obj); return *this;}
    
    BasicLineParser(const ::org::apache::http::ProtocolVersion&);
    BasicLineParser();
    static ::org::apache::http::ProtocolVersion parseProtocolVersion(const ::java::lang::String&, const ::org::apache::http::message::LineParser&);
    ::org::apache::http::ProtocolVersion parseProtocolVersion(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;
    bool hasProtocolVersion(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;
    static ::org::apache::http::RequestLine parseRequestLine(const ::java::lang::String&, const ::org::apache::http::message::LineParser&);
    ::org::apache::http::RequestLine parseRequestLine(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;
    static ::org::apache::http::StatusLine parseStatusLine(const ::java::lang::String&, const ::org::apache::http::message::LineParser&);
    ::org::apache::http::StatusLine parseStatusLine(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;
    static ::org::apache::http::Header parseHeader(const ::java::lang::String&, const ::org::apache::http::message::LineParser&);
    ::org::apache::http::Header parseHeader(const ::org::apache::http::util::CharArrayBuffer&) const;

};
}
}
}
}


