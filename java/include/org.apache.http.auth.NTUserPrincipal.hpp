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
class NTUserPrincipal : public virtual ::java::lang::Object,
                        public virtual ::java::security::Principal {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NTUserPrincipal(jobject _obj) : ::java::lang::Object(_obj), ::java::security::Principal(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NTUserPrincipal(const ::org::apache::http::auth::NTUserPrincipal& x) : ::java::lang::Object((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj;}
    NTUserPrincipal(::org::apache::http::auth::NTUserPrincipal&& x) : ::java::lang::Object((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::NTUserPrincipal& operator=(const ::org::apache::http::auth::NTUserPrincipal& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::NTUserPrincipal& operator=(::org::apache::http::auth::NTUserPrincipal&& x) {obj = std::move(x.obj); return *this;}
    
    NTUserPrincipal(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getName() const ;
    ::java::lang::String getDomain() const ;
    ::java::lang::String getUsername() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;

};
}
}
}
}


