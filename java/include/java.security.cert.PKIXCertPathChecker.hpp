#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace security {
namespace cert {
class PKIXCertPathChecker : public virtual ::java::lang::Object,
                            public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PKIXCertPathChecker(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PKIXCertPathChecker(const ::java::security::cert::PKIXCertPathChecker& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    PKIXCertPathChecker(::java::security::cert::PKIXCertPathChecker&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::PKIXCertPathChecker& operator=(const ::java::security::cert::PKIXCertPathChecker& x) {obj = x.obj; return *this;}
    ::java::security::cert::PKIXCertPathChecker& operator=(::java::security::cert::PKIXCertPathChecker&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const;
    void init(bool) const;
    bool isForwardCheckingSupported() const;
    ::java::util::Set getSupportedExtensions() const;
    void check(const ::java::security::cert::Certificate&, const ::java::util::Collection&) const;

};
}
}
}


