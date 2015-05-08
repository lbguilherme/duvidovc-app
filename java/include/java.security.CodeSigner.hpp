#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Timestamp; } }
namespace java { namespace security { namespace cert { class CertPath; } } }

namespace java {
namespace security {
class CodeSigner : public virtual ::java::lang::Object,
                   public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CodeSigner(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CodeSigner(const ::java::security::CodeSigner& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    CodeSigner(::java::security::CodeSigner&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::CodeSigner& operator=(const ::java::security::CodeSigner& x) {obj = x.obj; return *this;}
    ::java::security::CodeSigner& operator=(::java::security::CodeSigner&& x) {obj = std::move(x.obj); return *this;}
    
    CodeSigner(const ::java::security::cert::CertPath&, const ::java::security::Timestamp&);
    bool equals(const ::java::lang::Object&) const ;
    ::java::security::cert::CertPath getSignerCertPath() const ;
    ::java::security::Timestamp getTimestamp() const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}


