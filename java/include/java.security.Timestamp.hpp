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
namespace java { namespace security { namespace cert { class CertPath; } } }
namespace java { namespace util { class Date; } }

namespace java {
namespace security {
class Timestamp : public virtual ::java::lang::Object,
                  public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Timestamp(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Timestamp(const ::java::security::Timestamp& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Timestamp(::java::security::Timestamp&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Timestamp& operator=(const ::java::security::Timestamp& x) {obj = x.obj; return *this;}
    ::java::security::Timestamp& operator=(::java::security::Timestamp&& x) {obj = std::move(x.obj); return *this;}
    
    Timestamp(const ::java::util::Date&, const ::java::security::cert::CertPath&);
    bool equals(const ::java::lang::Object&) const ;
    ::java::security::cert::CertPath getSignerCertPath() const ;
    ::java::util::Date getTimestamp() const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}


