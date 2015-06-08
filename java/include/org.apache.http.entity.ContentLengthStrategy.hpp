#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpMessage; } } }

namespace org {
namespace apache {
namespace http {
namespace entity {
class ContentLengthStrategy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentLengthStrategy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentLengthStrategy(const ::org::apache::http::entity::ContentLengthStrategy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentLengthStrategy(::org::apache::http::entity::ContentLengthStrategy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::entity::ContentLengthStrategy& operator=(const ::org::apache::http::entity::ContentLengthStrategy& x) {obj = x.obj; return *this;}
    ::org::apache::http::entity::ContentLengthStrategy& operator=(::org::apache::http::entity::ContentLengthStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t determineLength(const ::org::apache::http::HttpMessage&) const;

};
}
}
}
}


