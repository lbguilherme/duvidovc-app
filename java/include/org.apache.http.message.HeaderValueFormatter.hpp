#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HeaderElement; } } }
namespace org { namespace apache { namespace http { class NameValuePair; } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class HeaderValueFormatter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HeaderValueFormatter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HeaderValueFormatter(const ::org::apache::http::message::HeaderValueFormatter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HeaderValueFormatter(::org::apache::http::message::HeaderValueFormatter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::HeaderValueFormatter& operator=(const ::org::apache::http::message::HeaderValueFormatter& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::HeaderValueFormatter& operator=(::org::apache::http::message::HeaderValueFormatter&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::util::CharArrayBuffer formatElements(const ::org::apache::http::util::CharArrayBuffer&, const std::vector< ::org::apache::http::HeaderElement>&, bool) const ;
    ::org::apache::http::util::CharArrayBuffer formatHeaderElement(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::HeaderElement&, bool) const ;
    ::org::apache::http::util::CharArrayBuffer formatParameters(const ::org::apache::http::util::CharArrayBuffer&, const std::vector< ::org::apache::http::NameValuePair>&, bool) const ;
    ::org::apache::http::util::CharArrayBuffer formatNameValuePair(const ::org::apache::http::util::CharArrayBuffer&, const ::org::apache::http::NameValuePair&, bool) const ;

};
}
}
}
}


