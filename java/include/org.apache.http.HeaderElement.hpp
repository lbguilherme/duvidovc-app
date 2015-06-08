#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class NameValuePair; } } }

namespace org {
namespace apache {
namespace http {
class HeaderElement : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HeaderElement(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HeaderElement(const ::org::apache::http::HeaderElement& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HeaderElement(::org::apache::http::HeaderElement&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HeaderElement& operator=(const ::org::apache::http::HeaderElement& x) {obj = x.obj; return *this;}
    ::org::apache::http::HeaderElement& operator=(::org::apache::http::HeaderElement&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const;
    ::java::lang::String getValue() const;
    std::vector< ::org::apache::http::NameValuePair> getParameters() const;
    ::org::apache::http::NameValuePair getParameterByName(const ::java::lang::String&) const;
    int32_t getParameterCount() const;
    ::org::apache::http::NameValuePair getParameter(int32_t) const;

};
}
}
}


