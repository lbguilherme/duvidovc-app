#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class KeyguardManager_KeyguardLock; } }
namespace android { namespace app { class KeyguardManager_OnKeyguardExitResult; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class KeyguardManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyguardManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyguardManager(const ::android::app::KeyguardManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyguardManager(::android::app::KeyguardManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::KeyguardManager& operator=(const ::android::app::KeyguardManager& x) {obj = x.obj; return *this;}
    ::android::app::KeyguardManager& operator=(::android::app::KeyguardManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::app::KeyguardManager_KeyguardLock newKeyguardLock(const ::java::lang::String&) const;
    bool inKeyguardRestrictedInputMode() const;
    void exitKeyguardSecurely(const ::android::app::KeyguardManager_OnKeyguardExitResult&) const;

};
}
}

#include "android.app.KeyguardManager_KeyguardLock.hpp"
#include "android.app.KeyguardManager_OnKeyguardExitResult.hpp"

