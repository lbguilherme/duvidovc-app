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
namespace android { namespace widget { class RemoteViewsService_RemoteViewsFactory; } }

namespace android {
namespace widget {
class RemoteViewsService : public virtual ::java::lang::Object,
                           public virtual ::android::app::Service {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteViewsService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteViewsService(const ::android::widget::RemoteViewsService& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    RemoteViewsService(::android::widget::RemoteViewsService&& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RemoteViewsService& operator=(const ::android::widget::RemoteViewsService& x) {obj = x.obj; return *this;}
    ::android::widget::RemoteViewsService& operator=(::android::widget::RemoteViewsService&& x) {obj = std::move(x.obj); return *this;}
    
    RemoteViewsService();
    ::android::os::IBinder onBind(const ::android::content::Intent&) const;
    ::android::widget::RemoteViewsService_RemoteViewsFactory onGetViewFactory(const ::android::content::Intent&) const;

};
}
}

#include "android.widget.RemoteViewsService_RemoteViewsFactory.hpp"

