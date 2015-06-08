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
class InputStreamEntity : public virtual ::java::lang::Object,
                          public virtual ::org::apache::http::entity::AbstractHttpEntity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputStreamEntity(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntity(_obj), ::org::apache::http::entity::AbstractHttpEntity(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputStreamEntity(const ::org::apache::http::entity::InputStreamEntity& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {obj = x.obj;}
    InputStreamEntity(::org::apache::http::entity::InputStreamEntity&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::InputStreamEntity& operator=(const ::org::apache::http::entity::InputStreamEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::InputStreamEntity& operator=(::org::apache::http::entity::InputStreamEntity&& x) {obj = std::move(x.obj); return *this;}
    
    InputStreamEntity(const ::java::io::InputStream&, int64_t);
    bool isRepeatable() const;
    int64_t getContentLength() const;
    ::java::io::InputStream getContent() const;
    void writeTo(const ::java::io::OutputStream&) const;
    bool isStreaming() const;
    void consumeContent() const;

};
}
}
}
}


