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
namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class LineParser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LineParser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LineParser(const ::org::apache::http::message::LineParser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LineParser(::org::apache::http::message::LineParser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::LineParser& operator=(const ::org::apache::http::message::LineParser& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::LineParser& operator=(::org::apache::http::message::LineParser&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::ProtocolVersion parseProtocolVersion(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;
    bool hasProtocolVersion(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;
    ::org::apache::http::RequestLine parseRequestLine(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;
    ::org::apache::http::StatusLine parseStatusLine(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const;
    ::org::apache::http::Header parseHeader(const ::org::apache::http::util::CharArrayBuffer&) const;

};
}
}
}
}


