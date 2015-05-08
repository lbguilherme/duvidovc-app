#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.entity.ContentLengthStrategy.hpp"

namespace org { namespace apache { namespace http { class HttpMessage; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace entity {
class LaxContentLengthStrategy : public virtual ::java::lang::Object,
                                 public virtual ::org::apache::http::entity::ContentLengthStrategy {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LaxContentLengthStrategy(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::entity::ContentLengthStrategy(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LaxContentLengthStrategy(const ::org::apache::http::impl::entity::LaxContentLengthStrategy& x) : ::java::lang::Object((jobject)0), ::org::apache::http::entity::ContentLengthStrategy((jobject)0) {obj = x.obj;}
    LaxContentLengthStrategy(::org::apache::http::impl::entity::LaxContentLengthStrategy&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::entity::ContentLengthStrategy((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::entity::LaxContentLengthStrategy& operator=(const ::org::apache::http::impl::entity::LaxContentLengthStrategy& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::entity::LaxContentLengthStrategy& operator=(::org::apache::http::impl::entity::LaxContentLengthStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    LaxContentLengthStrategy();
    int64_t determineLength(const ::org::apache::http::HttpMessage&) const ;

};
}
}
}
}
}


