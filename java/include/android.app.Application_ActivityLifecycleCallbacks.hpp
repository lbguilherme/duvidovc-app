#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace os { class Bundle; } }

namespace android {
namespace app {
class Application_ActivityLifecycleCallbacks : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Application_ActivityLifecycleCallbacks(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Application_ActivityLifecycleCallbacks(const ::android::app::Application_ActivityLifecycleCallbacks& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Application_ActivityLifecycleCallbacks(::android::app::Application_ActivityLifecycleCallbacks&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Application_ActivityLifecycleCallbacks& operator=(const ::android::app::Application_ActivityLifecycleCallbacks& x) {obj = x.obj; return *this;}
    ::android::app::Application_ActivityLifecycleCallbacks& operator=(::android::app::Application_ActivityLifecycleCallbacks&& x) {obj = std::move(x.obj); return *this;}
    
    void onActivityCreated(const ::android::app::Activity&, const ::android::os::Bundle&) const;
    void onActivityStarted(const ::android::app::Activity&) const;
    void onActivityResumed(const ::android::app::Activity&) const;
    void onActivityPaused(const ::android::app::Activity&) const;
    void onActivityStopped(const ::android::app::Activity&) const;
    void onActivitySaveInstanceState(const ::android::app::Activity&, const ::android::os::Bundle&) const;
    void onActivityDestroyed(const ::android::app::Activity&) const;

};
}
}


