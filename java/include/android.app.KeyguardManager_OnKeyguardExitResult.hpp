#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace app {
class KeyguardManager_OnKeyguardExitResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyguardManager_OnKeyguardExitResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyguardManager_OnKeyguardExitResult(const ::android::app::KeyguardManager_OnKeyguardExitResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyguardManager_OnKeyguardExitResult(::android::app::KeyguardManager_OnKeyguardExitResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::KeyguardManager_OnKeyguardExitResult& operator=(const ::android::app::KeyguardManager_OnKeyguardExitResult& x) {obj = x.obj; return *this;}
    ::android::app::KeyguardManager_OnKeyguardExitResult& operator=(::android::app::KeyguardManager_OnKeyguardExitResult&& x) {obj = std::move(x.obj); return *this;}
    
    void onKeyguardExitResult(bool) const;

};
}
}


