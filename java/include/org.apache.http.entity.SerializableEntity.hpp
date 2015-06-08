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
namespace java { namespace io { class Serializable; } }

namespace org {
namespace apache {
namespace http {
namespace entity {
class SerializableEntity : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::entity::AbstractHttpEntity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SerializableEntity(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntity(_obj), ::org::apache::http::entity::AbstractHttpEntity(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SerializableEntity(const ::org::apache::http::entity::SerializableEntity& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {obj = x.obj;}
    SerializableEntity(::org::apache::http::entity::SerializableEntity&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::SerializableEntity& operator=(const ::org::apache::http::entity::SerializableEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::SerializableEntity& operator=(::org::apache::http::entity::SerializableEntity&& x) {obj = std::move(x.obj); return *this;}
    
    SerializableEntity(const ::java::io::Serializable&, bool);
    ::java::io::InputStream getContent() const;
    int64_t getContentLength() const;
    bool isRepeatable() const;
    bool isStreaming() const;
    void writeTo(const ::java::io::OutputStream&) const;

};
}
}
}
}


