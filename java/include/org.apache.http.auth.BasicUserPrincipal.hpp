#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.Principal.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class BasicUserPrincipal : public virtual ::java::lang::Object,
                           public virtual ::java::security::Principal {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicUserPrincipal(jobject _obj) : ::java::lang::Object(_obj), ::java::security::Principal(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicUserPrincipal(const ::org::apache::http::auth::BasicUserPrincipal& x) : ::java::lang::Object((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj;}
    BasicUserPrincipal(::org::apache::http::auth::BasicUserPrincipal&& x) : ::java::lang::Object((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::BasicUserPrincipal& operator=(const ::org::apache::http::auth::BasicUserPrincipal& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::BasicUserPrincipal& operator=(::org::apache::http::auth::BasicUserPrincipal&& x) {obj = std::move(x.obj); return *this;}
    
    BasicUserPrincipal(const ::java::lang::String&);
    ::java::lang::String getName() const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


