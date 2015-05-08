#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.entity.AbstractHttpEntity.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace entity {
class StringEntity : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Cloneable,
                     public virtual ::org::apache::http::entity::AbstractHttpEntity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringEntity(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::HttpEntity(_obj), ::org::apache::http::entity::AbstractHttpEntity(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringEntity(const ::org::apache::http::entity::StringEntity& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {obj = x.obj;}
    StringEntity(::org::apache::http::entity::StringEntity&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::StringEntity& operator=(const ::org::apache::http::entity::StringEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::StringEntity& operator=(::org::apache::http::entity::StringEntity&& x) {obj = std::move(x.obj); return *this;}
    
    StringEntity(const ::java::lang::String&, const ::java::lang::String&);
    StringEntity(const ::java::lang::String&);
    bool isRepeatable() const ;
    int64_t getContentLength() const ;
    ::java::io::InputStream getContent() const ;
    void writeTo(const ::java::io::OutputStream&) const ;
    bool isStreaming() const ;
    ::java::lang::Object clone() const ;

};
}
}
}
}


