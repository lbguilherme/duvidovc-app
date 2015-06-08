#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace org { namespace apache { namespace http { class Header; } } }

namespace org {
namespace apache {
namespace http {
class HttpEntity : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpEntity(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpEntity(const ::org::apache::http::HttpEntity& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpEntity(::org::apache::http::HttpEntity&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpEntity& operator=(const ::org::apache::http::HttpEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpEntity& operator=(::org::apache::http::HttpEntity&& x) {obj = std::move(x.obj); return *this;}
    
    bool isRepeatable() const;
    bool isChunked() const;
    int64_t getContentLength() const;
    ::org::apache::http::Header getContentType() const;
    ::org::apache::http::Header getContentEncoding() const;
    ::java::io::InputStream getContent() const;
    void writeTo(const ::java::io::OutputStream&) const;
    bool isStreaming() const;
    void consumeContent() const;

};
}
}
}


