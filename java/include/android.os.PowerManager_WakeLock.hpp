#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class WorkSource; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class PowerManager_WakeLock : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PowerManager_WakeLock(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PowerManager_WakeLock(const ::android::os::PowerManager_WakeLock& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PowerManager_WakeLock(::android::os::PowerManager_WakeLock&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::PowerManager_WakeLock& operator=(const ::android::os::PowerManager_WakeLock& x) {obj = x.obj; return *this;}
    ::android::os::PowerManager_WakeLock& operator=(::android::os::PowerManager_WakeLock&& x) {obj = std::move(x.obj); return *this;}
    
    void setReferenceCounted(bool) const;
    void acquire() const;
    void acquire(int64_t) const;
    void release() const;
    bool isHeld() const;
    void setWorkSource(const ::android::os::WorkSource&) const;
    ::java::lang::String toString() const;

};
}
}


