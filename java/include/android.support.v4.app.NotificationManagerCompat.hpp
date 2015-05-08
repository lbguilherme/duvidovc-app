#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace content { class Context; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationManagerCompat; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat(const ::android::support::v4::app::NotificationManagerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationManagerCompat(::android::support::v4::app::NotificationManagerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat& operator=(const ::android::support::v4::app::NotificationManagerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat& operator=(::android::support::v4::app::NotificationManagerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::app::NotificationManagerCompat from(const ::android::content::Context&);
    void cancel(int32_t) const ;
    void cancel(const ::java::lang::String&, int32_t) const ;
    void cancelAll() const ;
    void notify(int32_t, const ::android::app::Notification&) const ;
    void notify(const ::java::lang::String&, int32_t, const ::android::app::Notification&) const ;
    static ::java::util::Set getEnabledListenerPackages(const ::android::content::Context&);

};
}
}
}
}

#include "android.support.v4.app.NotificationManagerCompat_CancelTask.hpp"
#include "android.support.v4.app.NotificationManagerCompat_Impl.hpp"
#include "android.support.v4.app.NotificationManagerCompat_ImplBase.hpp"
#include "android.support.v4.app.NotificationManagerCompat_ImplEclair.hpp"
#include "android.support.v4.app.NotificationManagerCompat_ImplIceCreamSandwich.hpp"
#include "android.support.v4.app.NotificationManagerCompat_NotifyTask.hpp"
#include "android.support.v4.app.NotificationManagerCompat_ServiceConnectedEvent.hpp"
#include "android.support.v4.app.NotificationManagerCompat_SideChannelManager.hpp"
#include "android.support.v4.app.NotificationManagerCompat_Task.hpp"
#include "android.support.v4.app.NotificationManagerCompat_SideChannelManager_ListenerRecord.hpp"

