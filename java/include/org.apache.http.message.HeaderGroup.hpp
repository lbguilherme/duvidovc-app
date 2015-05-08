#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class HeaderIterator; } } }
namespace org { namespace apache { namespace http { namespace message { class HeaderGroup; } } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class HeaderGroup : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HeaderGroup(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HeaderGroup(const ::org::apache::http::message::HeaderGroup& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    HeaderGroup(::org::apache::http::message::HeaderGroup&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::HeaderGroup& operator=(const ::org::apache::http::message::HeaderGroup& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::HeaderGroup& operator=(::org::apache::http::message::HeaderGroup&& x) {obj = std::move(x.obj); return *this;}
    
    HeaderGroup();
    void clear() const ;
    void addHeader(const ::org::apache::http::Header&) const ;
    void removeHeader(const ::org::apache::http::Header&) const ;
    void updateHeader(const ::org::apache::http::Header&) const ;
    void setHeaders(const std::vector< ::org::apache::http::Header>&) const ;
    ::org::apache::http::Header getCondensedHeader(const ::java::lang::String&) const ;
    std::vector< ::org::apache::http::Header> getHeaders(const ::java::lang::String&) const ;
    ::org::apache::http::Header getFirstHeader(const ::java::lang::String&) const ;
    ::org::apache::http::Header getLastHeader(const ::java::lang::String&) const ;
    std::vector< ::org::apache::http::Header> getAllHeaders() const ;
    bool containsHeader(const ::java::lang::String&) const ;
    ::org::apache::http::HeaderIterator iterator() const ;
    ::org::apache::http::HeaderIterator iterator(const ::java::lang::String&) const ;
    ::org::apache::http::message::HeaderGroup copy() const ;
    ::java::lang::Object clone() const ;

};
}
}
}
}


