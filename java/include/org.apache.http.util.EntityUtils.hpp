#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }

namespace org {
namespace apache {
namespace http {
namespace util {
class EntityUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EntityUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EntityUtils(const ::org::apache::http::util::EntityUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EntityUtils(::org::apache::http::util::EntityUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::util::EntityUtils& operator=(const ::org::apache::http::util::EntityUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::util::EntityUtils& operator=(::org::apache::http::util::EntityUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< int8_t> toByteArray(const ::org::apache::http::HttpEntity&);
    static ::java::lang::String getContentCharSet(const ::org::apache::http::HttpEntity&);
    static ::java::lang::String toString(const ::org::apache::http::HttpEntity&, const ::java::lang::String&);
    static ::java::lang::String toString(const ::org::apache::http::HttpEntity&);

};
}
}
}
}


