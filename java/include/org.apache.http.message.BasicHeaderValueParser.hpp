#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.message.HeaderValueParser.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HeaderElement; } } }
namespace org { namespace apache { namespace http { class NameValuePair; } } }
namespace org { namespace apache { namespace http { namespace message { class HeaderValueParser; } } } }
namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHeaderValueParser : public virtual ::java::lang::Object,
                               public virtual ::org::apache::http::message::HeaderValueParser {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHeaderValueParser(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::message::HeaderValueParser(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHeaderValueParser(const ::org::apache::http::message::BasicHeaderValueParser& x) : ::java::lang::Object((jobject)0), ::org::apache::http::message::HeaderValueParser((jobject)0) {obj = x.obj;}
    BasicHeaderValueParser(::org::apache::http::message::BasicHeaderValueParser&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::message::HeaderValueParser((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHeaderValueParser& operator=(const ::org::apache::http::message::BasicHeaderValueParser& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHeaderValueParser& operator=(::org::apache::http::message::BasicHeaderValueParser&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHeaderValueParser();
    static std::vector< ::org::apache::http::HeaderElement> parseElements(const ::java::lang::String&, const ::org::apache::http::message::HeaderValueParser&);
    std::vector< ::org::apache::http::HeaderElement> parseElements(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const ;
    static ::org::apache::http::HeaderElement parseHeaderElement(const ::java::lang::String&, const ::org::apache::http::message::HeaderValueParser&);
    ::org::apache::http::HeaderElement parseHeaderElement(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const ;
    static std::vector< ::org::apache::http::NameValuePair> parseParameters(const ::java::lang::String&, const ::org::apache::http::message::HeaderValueParser&);
    std::vector< ::org::apache::http::NameValuePair> parseParameters(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const ;
    static ::org::apache::http::NameValuePair parseNameValuePair(const ::java::lang::String&, const ::org::apache::http::message::HeaderValueParser&);
    ::org::apache::http::NameValuePair parseNameValuePair(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const ;
    ::org::apache::http::NameValuePair parseNameValuePair(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&, const std::vector< uint16_t>&) const ;

};
}
}
}
}


