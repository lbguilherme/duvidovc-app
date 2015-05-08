#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.Header.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HeaderElement; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHeader : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Cloneable,
                    public virtual ::org::apache::http::Header {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHeader(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::Header(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHeader(const ::org::apache::http::message::BasicHeader& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::Header((jobject)0) {obj = x.obj;}
    BasicHeader(::org::apache::http::message::BasicHeader&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::Header((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHeader& operator=(const ::org::apache::http::message::BasicHeader& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHeader& operator=(::org::apache::http::message::BasicHeader&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHeader(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getName() const ;
    ::java::lang::String getValue() const ;
    ::java::lang::String toString() const ;
    std::vector< ::org::apache::http::HeaderElement> getElements() const ;
    ::java::lang::Object clone() const ;

};
}
}
}
}


