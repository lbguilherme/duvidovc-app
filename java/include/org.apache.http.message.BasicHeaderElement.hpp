#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.HeaderElement.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class NameValuePair; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHeaderElement : public virtual ::java::lang::Object,
                           public virtual ::java::lang::Cloneable,
                           public virtual ::org::apache::http::HeaderElement {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHeaderElement(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::HeaderElement(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHeaderElement(const ::org::apache::http::message::BasicHeaderElement& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HeaderElement((jobject)0) {obj = x.obj;}
    BasicHeaderElement(::org::apache::http::message::BasicHeaderElement&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HeaderElement((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHeaderElement& operator=(const ::org::apache::http::message::BasicHeaderElement& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHeaderElement& operator=(::org::apache::http::message::BasicHeaderElement&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHeaderElement(const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::org::apache::http::NameValuePair>&);
    BasicHeaderElement(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getName() const;
    ::java::lang::String getValue() const;
    std::vector< ::org::apache::http::NameValuePair> getParameters() const;
    int32_t getParameterCount() const;
    ::org::apache::http::NameValuePair getParameter(int32_t) const;
    ::org::apache::http::NameValuePair getParameterByName(const ::java::lang::String&) const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    ::java::lang::Object clone() const;

};
}
}
}
}


