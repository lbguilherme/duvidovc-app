#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace net { class URL; } }
namespace java { namespace security { class CodeSigner; } }
namespace java { namespace security { class CodeSource; } }
namespace java { namespace security { namespace cert { class Certificate; } } }

namespace java {
namespace security {
class CodeSource : public virtual ::java::lang::Object,
                   public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CodeSource(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CodeSource(const ::java::security::CodeSource& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    CodeSource(::java::security::CodeSource&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::CodeSource& operator=(const ::java::security::CodeSource& x) {obj = x.obj; return *this;}
    ::java::security::CodeSource& operator=(::java::security::CodeSource&& x) {obj = std::move(x.obj); return *this;}
    
    CodeSource(const ::java::net::URL&, const std::vector< ::java::security::cert::Certificate>&);
    CodeSource(const ::java::net::URL&, const std::vector< ::java::security::CodeSigner>&);
    std::vector< ::java::security::cert::Certificate> getCertificates() const ;
    std::vector< ::java::security::CodeSigner> getCodeSigners() const ;
    ::java::net::URL getLocation() const ;
    bool implies(const ::java::security::CodeSource&) const ;

};
}
}


