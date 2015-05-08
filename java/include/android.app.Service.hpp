#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ComponentCallbacks2.hpp"
#include "android.content.ContextWrapper.hpp"

namespace android { namespace app { class Application; } }
namespace android { namespace app { class Notification; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace os { class IBinder; } }

namespace android {
namespace app {
class Service : public virtual ::java::lang::Object,
                public virtual ::android::content::ComponentCallbacks2,
                public virtual ::android::content::ContextWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Service(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Service(const ::android::app::Service& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    Service(::android::app::Service&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Service& operator=(const ::android::app::Service& x) {obj = x.obj; return *this;}
    ::android::app::Service& operator=(::android::app::Service&& x) {obj = std::move(x.obj); return *this;}
    
    Service();
    ::android::app::Application getApplication() const ;
    void onCreate() const ;
    void onStart(const ::android::content::Intent&, int32_t) const ;
    int32_t onStartCommand(const ::android::content::Intent&, int32_t, int32_t) const ;
    void onDestroy() const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;
    void onLowMemory() const ;
    void onTrimMemory(int32_t) const ;
    ::android::os::IBinder onBind(const ::android::content::Intent&) const ;
    bool onUnbind(const ::android::content::Intent&) const ;
    void onRebind(const ::android::content::Intent&) const ;
    void onTaskRemoved(const ::android::content::Intent&) const ;
    void stopSelf() const ;
    void stopSelf(int32_t) const ;
    bool stopSelfResult(int32_t) const ;
    void startForeground(int32_t, const ::android::app::Notification&) const ;
    void stopForeground(bool) const ;

};
}
}


