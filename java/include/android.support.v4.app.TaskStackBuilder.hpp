#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Iterable.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class TaskStackBuilder; } } } }
namespace java { namespace lang { class Class; } }
namespace java { namespace util { class Iterator; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class TaskStackBuilder : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Iterable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TaskStackBuilder(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TaskStackBuilder(const ::android::support::v4::app::TaskStackBuilder& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0) {obj = x.obj;}
    TaskStackBuilder(::android::support::v4::app::TaskStackBuilder&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::TaskStackBuilder& operator=(const ::android::support::v4::app::TaskStackBuilder& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::TaskStackBuilder& operator=(::android::support::v4::app::TaskStackBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::app::TaskStackBuilder create(const ::android::content::Context&);
    static ::android::support::v4::app::TaskStackBuilder from(const ::android::content::Context&);
    ::android::support::v4::app::TaskStackBuilder addNextIntent(const ::android::content::Intent&) const ;
    ::android::support::v4::app::TaskStackBuilder addNextIntentWithParentStack(const ::android::content::Intent&) const ;
    ::android::support::v4::app::TaskStackBuilder addParentStack(const ::android::app::Activity&) const ;
    ::android::support::v4::app::TaskStackBuilder addParentStack(const ::java::lang::Class&) const ;
    ::android::support::v4::app::TaskStackBuilder addParentStack(const ::android::content::ComponentName&) const ;
    int32_t getIntentCount() const ;
    ::android::content::Intent getIntent(int32_t) const ;
    ::android::content::Intent editIntentAt(int32_t) const ;
    ::java::util::Iterator iterator() const ;
    void startActivities() const ;
    void startActivities(const ::android::os::Bundle&) const ;
    ::android::app::PendingIntent getPendingIntent(int32_t, int32_t) const ;
    ::android::app::PendingIntent getPendingIntent(int32_t, int32_t, const ::android::os::Bundle&) const ;
    std::vector< ::android::content::Intent> getIntents() const ;

};
}
}
}
}

#include "android.support.v4.app.TaskStackBuilder_SupportParentable.hpp"
#include "android.support.v4.app.TaskStackBuilder_TaskStackBuilderImpl.hpp"
#include "android.support.v4.app.TaskStackBuilder_TaskStackBuilderImplBase.hpp"
#include "android.support.v4.app.TaskStackBuilder_TaskStackBuilderImplHoneycomb.hpp"
#include "android.support.v4.app.TaskStackBuilder_TaskStackBuilderImplJellybean.hpp"

