#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace security {
namespace cert {
class PolicyQualifierInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PolicyQualifierInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PolicyQualifierInfo(const ::java::security::cert::PolicyQualifierInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PolicyQualifierInfo(::java::security::cert::PolicyQualifierInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::PolicyQualifierInfo& operator=(const ::java::security::cert::PolicyQualifierInfo& x) {obj = x.obj; return *this;}
    ::java::security::cert::PolicyQualifierInfo& operator=(::java::security::cert::PolicyQualifierInfo&& x) {obj = std::move(x.obj); return *this;}
    
    PolicyQualifierInfo(const std::vector< int8_t>&);
    std::vector< int8_t> getEncoded() const;
    ::java::lang::String getPolicyQualifierId() const;
    std::vector< int8_t> getPolicyQualifier() const;
    ::java::lang::String toString() const;

};
}
}
}


