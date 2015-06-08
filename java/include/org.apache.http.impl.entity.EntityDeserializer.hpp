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
namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace entity {
class EntityDeserializer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EntityDeserializer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EntityDeserializer(const ::org::apache::http::impl::entity::EntityDeserializer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EntityDeserializer(::org::apache::http::impl::entity::EntityDeserializer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::entity::EntityDeserializer& operator=(const ::org::apache::http::impl::entity::EntityDeserializer& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::entity::EntityDeserializer& operator=(::org::apache::http::impl::entity::EntityDeserializer&& x) {obj = std::move(x.obj); return *this;}
    
    EntityDeserializer(const ::org::apache::http::entity::ContentLengthStrategy&);
    ::org::apache::http::HttpEntity deserialize(const ::org::apache::http::io::SessionInputBuffer&, const ::org::apache::http::HttpMessage&) const;

};
}
}
}
}
}


