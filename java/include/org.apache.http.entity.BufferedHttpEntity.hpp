#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.entity.HttpEntityWrapper.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }

namespace org {
namespace apache {
namespace http {
namespace entity {
class BufferedHttpEntity : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::entity::HttpEntityWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BufferedHttpEntity(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntity(_obj), ::org::apache::http::entity::HttpEntityWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BufferedHttpEntity(const ::org::apache::http::entity::BufferedHttpEntity& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::HttpEntityWrapper((jobject)0) {obj = x.obj;}
    BufferedHttpEntity(::org::apache::http::entity::BufferedHttpEntity&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::HttpEntityWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::BufferedHttpEntity& operator=(const ::org::apache::http::entity::BufferedHttpEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::BufferedHttpEntity& operator=(::org::apache::http::entity::BufferedHttpEntity&& x) {obj = std::move(x.obj); return *this;}
    
    BufferedHttpEntity(const ::org::apache::http::HttpEntity&);
    int64_t getContentLength() const;
    ::java::io::InputStream getContent() const;
    bool isChunked() const;
    bool isRepeatable() const;
    void writeTo(const ::java::io::OutputStream&) const;
    bool isStreaming() const;

};
}
}
}
}


