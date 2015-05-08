#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.message.HeaderValueFormatter.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HeaderElement; } } }
namespace org { namespace apache { namespace http { class NameValuePair; } } }
namespace org { namespace apache { namespace http { namespace message { class HeaderValueFormatter; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHeaderValueFormatter : public virtual ::java::lang::Object,
                                  public virtual ::org::apache::http::message::HeaderValueFormatter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHeaderValueFormatter(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::message::HeaderValueFormatter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHeaderValueFormatter(const ::org::apache::http::message::BasicHeaderValueFormatter& x) : ::java::lang::Object((jobject)0), ::org::apache::http::message::HeaderValueFormatter((jobject)0) {obj = x.obj;}
    BasicHeaderValueFormatter(::org::apache::http::message::BasicHeaderValueFormatter&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::message::HeaderValueFormatter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHeaderValueFormatter& operator=(const ::org::apache::http::message::BasicHeaderValueFormatter& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHeaderValueFormatter& operator=(::org::apache::http::message::BasicHeaderValueFormatter&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHeaderValueFormatter();
    static ::java::lang::String formatElements(const std::vector< ::org::apache::http::HeaderElement>&, bool, const ::org::apache::http::message::HeaderValueFormatter&);
    ::org::apache::http::util::CharArrayBuffer formatElements(const ::org::apache::http::util::CharArrayBuffer&, const std::vector< ::org::apache::http::HeaderElement>&, bool) const ;
    static ::java::lang::String formatHeaderElement(const ::org::apache::http::HeaderElement&, bool, const ::org::apache::http::message::HeaderValueFormatter&);
    ::org::apache::http::util::CharArrayBuffer formatHeaderElement(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::HeaderElement&, bool) const ;
    static ::java::lang::String formatParameters(const std::vector< ::org::apache::http::NameValuePair>&, bool, const ::org::apache::http::message::HeaderValueFormatter&);
    ::org::apache::http::util::CharArrayBuffer formatParameters(const ::org::apache::http::util::CharArrayBuffer&, const std::vector< ::org::apache::http::NameValuePair>&, bool) const ;
    static ::java::lang::String formatNameValuePair(const ::org::apache::http::NameValuePair&, bool, const ::org::apache::http::message::HeaderValueFormatter&);
    ::org::apache::http::util::CharArrayBuffer formatNameValuePair(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::NameValuePair&, bool) const ;

};
}
}
}
}


