#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class Credentials : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Credentials(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Credentials(const ::org::apache::http::auth::Credentials& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Credentials(::org::apache::http::auth::Credentials&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::Credentials& operator=(const ::org::apache::http::auth::Credentials& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::Credentials& operator=(::org::apache::http::auth::Credentials&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::security::Principal getUserPrincipal() const ;
    ::java::lang::String getPassword() const ;

};
}
}
}
}


