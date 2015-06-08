#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace wifi {
class WifiManager_MulticastLock : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiManager_MulticastLock(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiManager_MulticastLock(const ::android::net::wifi::WifiManager_MulticastLock& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiManager_MulticastLock(::android::net::wifi::WifiManager_MulticastLock&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiManager_MulticastLock& operator=(const ::android::net::wifi::WifiManager_MulticastLock& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiManager_MulticastLock& operator=(::android::net::wifi::WifiManager_MulticastLock&& x) {obj = std::move(x.obj); return *this;}
    
    void acquire() const;
    void release() const;
    void setReferenceCounted(bool) const;
    bool isHeld() const;
    ::java::lang::String toString() const;

};
}
}
}


