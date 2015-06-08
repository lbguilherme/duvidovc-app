#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace auth { class AuthScope; } } } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class AuthScope : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthScope(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthScope(const ::org::apache::http::auth::AuthScope& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthScope(::org::apache::http::auth::AuthScope&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::AuthScope& operator=(const ::org::apache::http::auth::AuthScope& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::AuthScope& operator=(::org::apache::http::auth::AuthScope&& x) {obj = std::move(x.obj); return *this;}
    
    AuthScope(const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::java::lang::String&);
    AuthScope(const ::java::lang::String&, int32_t, const ::java::lang::String&);
    AuthScope(const ::java::lang::String&, int32_t);
    ::java::lang::String getHost() const;
    int32_t getPort() const;
    ::java::lang::String getRealm() const;
    ::java::lang::String getScheme() const;
    int32_t match(const ::org::apache::http::auth::AuthScope&) const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String toString() const;
    int32_t hashCode() const;

};
}
}
}
}


