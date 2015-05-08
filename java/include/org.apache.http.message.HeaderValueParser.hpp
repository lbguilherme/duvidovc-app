#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HeaderElement; } } }
namespace org { namespace apache { namespace http { class NameValuePair; } } }
namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class HeaderValueParser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HeaderValueParser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HeaderValueParser(const ::org::apache::http::message::HeaderValueParser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HeaderValueParser(::org::apache::http::message::HeaderValueParser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::HeaderValueParser& operator=(const ::org::apache::http::message::HeaderValueParser& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::HeaderValueParser& operator=(::org::apache::http::message::HeaderValueParser&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::org::apache::http::HeaderElement> parseElements(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const ;
    ::org::apache::http::HeaderElement parseHeaderElement(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const ;
    std::vector< ::org::apache::http::NameValuePair> parseParameters(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const ;
    ::org::apache::http::NameValuePair parseNameValuePair(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::message::ParserCursor&) const ;

};
}
}
}
}


