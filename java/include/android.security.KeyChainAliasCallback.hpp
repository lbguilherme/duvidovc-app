#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace security {
class KeyChainAliasCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyChainAliasCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyChainAliasCallback(const ::android::security::KeyChainAliasCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyChainAliasCallback(::android::security::KeyChainAliasCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::security::KeyChainAliasCallback& operator=(const ::android::security::KeyChainAliasCallback& x) {obj = x.obj; return *this;}
    ::android::security::KeyChainAliasCallback& operator=(::android::security::KeyChainAliasCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void alias(const ::java::lang::String&) const;

};
}
}


