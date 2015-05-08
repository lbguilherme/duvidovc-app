#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ComponentCallbacks2.hpp"
#include "android.content.ContextWrapper.hpp"

namespace android { namespace app { class Application_ActivityLifecycleCallbacks; } }
namespace android { namespace content { class ComponentCallbacks; } }
namespace android { namespace content { namespace res { class Configuration; } } }

namespace android {
namespace app {
class Application : public virtual ::java::lang::Object,
                    public virtual ::android::content::ComponentCallbacks2,
                    public virtual ::android::content::ContextWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Application(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Application(const ::android::app::Application& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    Application(::android::app::Application&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Application& operator=(const ::android::app::Application& x) {obj = x.obj; return *this;}
    ::android::app::Application& operator=(::android::app::Application&& x) {obj = std::move(x.obj); return *this;}
    
    Application();
    void onCreate() const ;
    void onTerminate() const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;
    void onLowMemory() const ;
    void onTrimMemory(int32_t) const ;
    void registerComponentCallbacks(const ::android::content::ComponentCallbacks&) const ;
    void unregisterComponentCallbacks(const ::android::content::ComponentCallbacks&) const ;
    void registerActivityLifecycleCallbacks(const ::android::app::Application_ActivityLifecycleCallbacks&) const ;
    void unregisterActivityLifecycleCallbacks(const ::android::app::Application_ActivityLifecycleCallbacks&) const ;

};
}
}

#include "android.app.Application_ActivityLifecycleCallbacks.hpp"

