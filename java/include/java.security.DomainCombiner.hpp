#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { class ProtectionDomain; } }

namespace java {
namespace security {
class DomainCombiner : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DomainCombiner(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DomainCombiner(const ::java::security::DomainCombiner& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DomainCombiner(::java::security::DomainCombiner&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::DomainCombiner& operator=(const ::java::security::DomainCombiner& x) {obj = x.obj; return *this;}
    ::java::security::DomainCombiner& operator=(::java::security::DomainCombiner&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::security::ProtectionDomain> combine(const std::vector< ::java::security::ProtectionDomain>&, const std::vector< ::java::security::ProtectionDomain>&) const ;

};
}
}


