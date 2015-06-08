#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace os { class IBinder; } }

namespace android {
namespace content {
class ServiceConnection : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServiceConnection(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServiceConnection(const ::android::content::ServiceConnection& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ServiceConnection(::android::content::ServiceConnection&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ServiceConnection& operator=(const ::android::content::ServiceConnection& x) {obj = x.obj; return *this;}
    ::android::content::ServiceConnection& operator=(::android::content::ServiceConnection&& x) {obj = std::move(x.obj); return *this;}
    
    void onServiceConnected(const ::android::content::ComponentName&, const ::android::os::IBinder&) const;
    void onServiceDisconnected(const ::android::content::ComponentName&) const;

};
}
}


