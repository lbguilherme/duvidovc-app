#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace app {
class KeyguardManager_KeyguardLock : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyguardManager_KeyguardLock(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyguardManager_KeyguardLock(const ::android::app::KeyguardManager_KeyguardLock& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyguardManager_KeyguardLock(::android::app::KeyguardManager_KeyguardLock&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::KeyguardManager_KeyguardLock& operator=(const ::android::app::KeyguardManager_KeyguardLock& x) {obj = x.obj; return *this;}
    ::android::app::KeyguardManager_KeyguardLock& operator=(::android::app::KeyguardManager_KeyguardLock&& x) {obj = std::move(x.obj); return *this;}
    
    void disableKeyguard() const;
    void reenableKeyguard() const;

};
}
}


