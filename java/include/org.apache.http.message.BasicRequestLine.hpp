#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.RequestLine.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicRequestLine : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Cloneable,
                         public virtual ::org::apache::http::RequestLine {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicRequestLine(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::RequestLine(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicRequestLine(const ::org::apache::http::message::BasicRequestLine& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::RequestLine((jobject)0) {obj = x.obj;}
    BasicRequestLine(::org::apache::http::message::BasicRequestLine&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::RequestLine((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicRequestLine& operator=(const ::org::apache::http::message::BasicRequestLine& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicRequestLine& operator=(::org::apache::http::message::BasicRequestLine&& x) {obj = std::move(x.obj); return *this;}
    
    BasicRequestLine(const ::java::lang::String&, const ::java::lang::String&, const ::org::apache::http::ProtocolVersion&);
    ::java::lang::String getMethod() const;
    ::org::apache::http::ProtocolVersion getProtocolVersion() const;
    ::java::lang::String getUri() const;
    ::java::lang::String toString() const;
    ::java::lang::Object clone() const;

};
}
}
}
}


