#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpEntity; } } }
namespace org { namespace apache { namespace http { class HttpMessage; } } }
namespace org { namespace apache { namespace http { namespace entity { class ContentLengthStrategy; } } } }
namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace entity {
class EntitySerializer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EntitySerializer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EntitySerializer(const ::org::apache::http::impl::entity::EntitySerializer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EntitySerializer(::org::apache::http::impl::entity::EntitySerializer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::entity::EntitySerializer& operator=(const ::org::apache::http::impl::entity::EntitySerializer& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::entity::EntitySerializer& operator=(::org::apache::http::impl::entity::EntitySerializer&& x) {obj = std::move(x.obj); return *this;}
    
    EntitySerializer(const ::org::apache::http::entity::ContentLengthStrategy&);
    void serialize(const ::org::apache::http::io::SessionOutputBuffer&, const ::org::apache::http::HttpMessage&, const ::org::apache::http::HttpEntity&) const;

};
}
}
}
}
}


