#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { class Principal; } }

namespace java {
namespace security {
namespace acl {
class Owner : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Owner(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Owner(const ::java::security::acl::Owner& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Owner(::java::security::acl::Owner&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::acl::Owner& operator=(const ::java::security::acl::Owner& x) {obj = x.obj; return *this;}
    ::java::security::acl::Owner& operator=(::java::security::acl::Owner&& x) {obj = std::move(x.obj); return *this;}
    
    bool addOwner(const ::java::security::Principal&, const ::java::security::Principal&) const ;
    bool deleteOwner(const ::java::security::Principal&, const ::java::security::Principal&) const ;
    bool isOwner(const ::java::security::Principal&) const ;

};
}
}
}


