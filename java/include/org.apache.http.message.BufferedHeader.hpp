#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.FormattedHeader.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HeaderElement; } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BufferedHeader : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Cloneable,
                       public virtual ::org::apache::http::FormattedHeader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BufferedHeader(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::FormattedHeader(_obj), ::org::apache::http::Header(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BufferedHeader(const ::org::apache::http::message::BufferedHeader& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::FormattedHeader((jobject)0), ::org::apache::http::Header((jobject)0) {obj = x.obj;}
    BufferedHeader(::org::apache::http::message::BufferedHeader&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::FormattedHeader((jobject)0), ::org::apache::http::Header((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BufferedHeader& operator=(const ::org::apache::http::message::BufferedHeader& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BufferedHeader& operator=(::org::apache::http::message::BufferedHeader&& x) {obj = std::move(x.obj); return *this;}
    
    BufferedHeader(const ::org::apache::http::util::CharArrayBuffer&);
    ::java::lang::String getName() const ;
    ::java::lang::String getValue() const ;
    std::vector< ::org::apache::http::HeaderElement> getElements() const ;
    int32_t getValuePos() const ;
    ::org::apache::http::util::CharArrayBuffer getBuffer() const ;
    ::java::lang::String toString() const ;
    ::java::lang::Object clone() const ;

};
}
}
}
}


