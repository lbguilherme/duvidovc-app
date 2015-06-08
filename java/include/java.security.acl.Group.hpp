#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.Principal.hpp"

namespace java { namespace security { class Principal; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace security {
namespace acl {
class Group : public virtual ::java::lang::Object,
              public virtual ::java::security::Principal {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Group(jobject _obj) : ::java::lang::Object(_obj), ::java::security::Principal(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Group(const ::java::security::acl::Group& x) : ::java::lang::Object((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj;}
    Group(::java::security::acl::Group&& x) : ::java::lang::Object((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::acl::Group& operator=(const ::java::security::acl::Group& x) {obj = x.obj; return *this;}
    ::java::security::acl::Group& operator=(::java::security::acl::Group&& x) {obj = std::move(x.obj); return *this;}
    
    bool addMember(const ::java::security::Principal&) const;
    bool removeMember(const ::java::security::Principal&) const;
    bool isMember(const ::java::security::Principal&) const;
    ::java::util::Enumeration members() const;

};
}
}
}


