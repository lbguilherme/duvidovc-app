#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.StatusLine.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicStatusLine : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Cloneable,
                        public virtual ::org::apache::http::StatusLine {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicStatusLine(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::StatusLine(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicStatusLine(const ::org::apache::http::message::BasicStatusLine& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::StatusLine((jobject)0) {obj = x.obj;}
    BasicStatusLine(::org::apache::http::message::BasicStatusLine&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::StatusLine((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicStatusLine& operator=(const ::org::apache::http::message::BasicStatusLine& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicStatusLine& operator=(::org::apache::http::message::BasicStatusLine&& x) {obj = std::move(x.obj); return *this;}
    
    BasicStatusLine(const ::org::apache::http::ProtocolVersion&, int32_t, const ::java::lang::String&);
    int32_t getStatusCode() const;
    ::org::apache::http::ProtocolVersion getProtocolVersion() const;
    ::java::lang::String getReasonPhrase() const;
    ::java::lang::String toString() const;
    ::java::lang::Object clone() const;

};
}
}
}
}


