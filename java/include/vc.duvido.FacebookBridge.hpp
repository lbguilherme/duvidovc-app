#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace com { namespace facebook { class AccessToken; } }

namespace vc {
namespace duvido {
class FacebookBridge : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookBridge(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookBridge(const ::vc::duvido::FacebookBridge& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookBridge(::vc::duvido::FacebookBridge&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::FacebookBridge& operator=(const ::vc::duvido::FacebookBridge& x) {obj = x.obj; return *this;}
    ::vc::duvido::FacebookBridge& operator=(::vc::duvido::FacebookBridge&& x) {obj = std::move(x.obj); return *this;}
    
    static void jniInitializeNative();
    FacebookBridge();
    static void initialize();
    static void submitActivityResult(int32_t, int32_t, const ::android::content::Intent&);
    static void login();
    static void onLoginSuccess();
    static void onLoginCancel();
    static void onLoginError();
    static void onAccessTokenReceived(const ::com::facebook::AccessToken&);

};
}
}


