#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.entity.AbstractHttpEntity.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }

namespace org {
namespace apache {
namespace http {
namespace entity {
class BasicHttpEntity : public virtual ::java::lang::Object,
                        public virtual ::org::apache::http::entity::AbstractHttpEntity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHttpEntity(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntity(_obj), ::org::apache::http::entity::AbstractHttpEntity(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHttpEntity(const ::org::apache::http::entity::BasicHttpEntity& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {obj = x.obj;}
    BasicHttpEntity(::org::apache::http::entity::BasicHttpEntity&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::BasicHttpEntity& operator=(const ::org::apache::http::entity::BasicHttpEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::BasicHttpEntity& operator=(::org::apache::http::entity::BasicHttpEntity&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHttpEntity();
    int64_t getContentLength() const;
    ::java::io::InputStream getContent() const;
    bool isRepeatable() const;
    void setContentLength(int64_t) const;
    void setContent(const ::java::io::InputStream&) const;
    void writeTo(const ::java::io::OutputStream&) const;
    bool isStreaming() const;
    void consumeContent() const;

};
}
}
}
}


