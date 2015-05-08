#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace security { class KeyChainAliasCallback; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { class PrivateKey; } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }

namespace android {
namespace security {
class KeyChain : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyChain(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyChain(const ::android::security::KeyChain& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyChain(::android::security::KeyChain&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::security::KeyChain& operator=(const ::android::security::KeyChain& x) {obj = x.obj; return *this;}
    ::android::security::KeyChain& operator=(::android::security::KeyChain&& x) {obj = std::move(x.obj); return *this;}
    
    KeyChain();
    static ::android::content::Intent createInstallIntent();
    static void choosePrivateKeyAlias(const ::android::app::Activity&, const ::android::security::KeyChainAliasCallback&, const std::vector< ::java::lang::String>&, const std::vector< ::java::security::Principal>&, const ::java::lang::String&, int32_t, const ::java::lang::String&);
    static ::java::security::PrivateKey getPrivateKey(const ::android::content::Context&, const ::java::lang::String&);
    static std::vector< ::java::security::cert::X509Certificate> getCertificateChain(const ::android::content::Context&, const ::java::lang::String&);

};
}
}


