#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpEntity.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }

namespace org {
namespace apache {
namespace http {
namespace entity {
class AbstractHttpEntity : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::HttpEntity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractHttpEntity(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntity(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractHttpEntity(const ::org::apache::http::entity::AbstractHttpEntity& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0) {obj = x.obj;}
    AbstractHttpEntity(::org::apache::http::entity::AbstractHttpEntity&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::AbstractHttpEntity& operator=(const ::org::apache::http::entity::AbstractHttpEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::AbstractHttpEntity& operator=(::org::apache::http::entity::AbstractHttpEntity&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::Header getContentType() const ;
    ::org::apache::http::Header getContentEncoding() const ;
    bool isChunked() const ;
    void setContentType(const ::org::apache::http::Header&) const ;
    void setContentType(const ::java::lang::String&) const ;
    void setContentEncoding(const ::org::apache::http::Header&) const ;
    void setContentEncoding(const ::java::lang::String&) const ;
    void setChunked(bool) const ;
    void consumeContent() const ;

};
}
}
}
}


