#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class PolicyNode; } } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace security {
namespace cert {
class PolicyNode : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PolicyNode(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PolicyNode(const ::java::security::cert::PolicyNode& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PolicyNode(::java::security::cert::PolicyNode&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::PolicyNode& operator=(const ::java::security::cert::PolicyNode& x) {obj = x.obj; return *this;}
    ::java::security::cert::PolicyNode& operator=(::java::security::cert::PolicyNode&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Iterator getChildren() const ;
    int32_t getDepth() const ;
    ::java::util::Set getExpectedPolicies() const ;
    ::java::security::cert::PolicyNode getParent() const ;
    ::java::util::Set getPolicyQualifiers() const ;
    ::java::lang::String getValidPolicy() const ;
    bool isCritical() const ;

};
}
}
}


