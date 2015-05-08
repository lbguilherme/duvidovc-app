#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.entity.StringEntity.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace entity {
class UrlEncodedFormEntity : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::entity::StringEntity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UrlEncodedFormEntity(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::HttpEntity(_obj), ::org::apache::http::entity::AbstractHttpEntity(_obj), ::org::apache::http::entity::StringEntity(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UrlEncodedFormEntity(const ::org::apache::http::client::entity::UrlEncodedFormEntity& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0), ::org::apache::http::entity::StringEntity((jobject)0) {obj = x.obj;}
    UrlEncodedFormEntity(::org::apache::http::client::entity::UrlEncodedFormEntity&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0), ::org::apache::http::entity::StringEntity((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::entity::UrlEncodedFormEntity& operator=(const ::org::apache::http::client::entity::UrlEncodedFormEntity& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::entity::UrlEncodedFormEntity& operator=(::org::apache::http::client::entity::UrlEncodedFormEntity&& x) {obj = std::move(x.obj); return *this;}
    
    UrlEncodedFormEntity(const ::java::util::List&, const ::java::lang::String&);
    UrlEncodedFormEntity(const ::java::util::List&);

};
}
}
}
}
}


