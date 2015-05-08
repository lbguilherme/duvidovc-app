#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpEntity.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }

namespace org {
namespace apache {
namespace http {
namespace entity {
class HttpEntityWrapper : public virtual ::java::lang::Object,
                          public virtual ::org::apache::http::HttpEntity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpEntityWrapper(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntity(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpEntityWrapper(const ::org::apache::http::entity::HttpEntityWrapper& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0) {obj = x.obj;}
    HttpEntityWrapper(::org::apache::http::entity::HttpEntityWrapper&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::HttpEntityWrapper& operator=(const ::org::apache::http::entity::HttpEntityWrapper& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::HttpEntityWrapper& operator=(::org::apache::http::entity::HttpEntityWrapper&& x) {obj = std::move(x.obj); return *this;}
    
    HttpEntityWrapper(const ::org::apache::http::HttpEntity&);
    bool isRepeatable() const ;
    bool isChunked() const ;
    int64_t getContentLength() const ;
    ::org::apache::http::Header getContentType() const ;
    ::org::apache::http::Header getContentEncoding() const ;
    ::java::io::InputStream getContent() const ;
    void writeTo(const ::java::io::OutputStream&) const ;
    bool isStreaming() const ;
    void consumeContent() const ;

};
}
}
}
}


