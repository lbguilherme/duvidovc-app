#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Service.hpp"

namespace android { namespace accessibilityservice { class AccessibilityServiceInfo; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace accessibilityservice {
class AccessibilityService : public virtual ::java::lang::Object,
                             public virtual ::android::app::Service {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityService(const ::android::accessibilityservice::AccessibilityService& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    AccessibilityService(::android::accessibilityservice::AccessibilityService&& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accessibilityservice::AccessibilityService& operator=(const ::android::accessibilityservice::AccessibilityService& x) {obj = x.obj; return *this;}
    ::android::accessibilityservice::AccessibilityService& operator=(::android::accessibilityservice::AccessibilityService&& x) {obj = std::move(x.obj); return *this;}
    
    AccessibilityService();
    void onAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onInterrupt() const ;
    void setServiceInfo(const ::android::accessibilityservice::AccessibilityServiceInfo&) const ;
    ::android::os::IBinder onBind(const ::android::content::Intent&) const ;

};
}
}


