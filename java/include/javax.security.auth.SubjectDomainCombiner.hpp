#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.DomainCombiner.hpp"

namespace java { namespace security { class ProtectionDomain; } }
namespace javax { namespace security { namespace auth { class Subject; } } }

namespace javax {
namespace security {
namespace auth {
class SubjectDomainCombiner : public virtual ::java::lang::Object,
                              public virtual ::java::security::DomainCombiner {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SubjectDomainCombiner(jobject _obj) : ::java::lang::Object(_obj), ::java::security::DomainCombiner(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SubjectDomainCombiner(const ::javax::security::auth::SubjectDomainCombiner& x) : ::java::lang::Object((jobject)0), ::java::security::DomainCombiner((jobject)0) {obj = x.obj;}
    SubjectDomainCombiner(::javax::security::auth::SubjectDomainCombiner&& x) : ::java::lang::Object((jobject)0), ::java::security::DomainCombiner((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::SubjectDomainCombiner& operator=(const ::javax::security::auth::SubjectDomainCombiner& x) {obj = x.obj; return *this;}
    ::javax::security::auth::SubjectDomainCombiner& operator=(::javax::security::auth::SubjectDomainCombiner&& x) {obj = std::move(x.obj); return *this;}
    
    SubjectDomainCombiner(const ::javax::security::auth::Subject&);
    ::javax::security::auth::Subject getSubject() const;
    std::vector< ::java::security::ProtectionDomain> combine(const std::vector< ::java::security::ProtectionDomain>&, const std::vector< ::java::security::ProtectionDomain>&) const;

};
}
}
}


