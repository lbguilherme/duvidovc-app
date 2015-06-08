#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Service.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class IntentService : public virtual ::java::lang::Object,
                      public virtual ::android::app::Service {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentService(const ::android::app::IntentService& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    IntentService(::android::app::IntentService&& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::IntentService& operator=(const ::android::app::IntentService& x) {obj = x.obj; return *this;}
    ::android::app::IntentService& operator=(::android::app::IntentService&& x) {obj = std::move(x.obj); return *this;}
    
    IntentService(const ::java::lang::String&);
    void setIntentRedelivery(bool) const;
    void onCreate() const;
    void onStart(const ::android::content::Intent&, int32_t) const;
    int32_t onStartCommand(const ::android::content::Intent&, int32_t, int32_t) const;
    void onDestroy() const;
    ::android::os::IBinder onBind(const ::android::content::Intent&) const;

};
}
}


