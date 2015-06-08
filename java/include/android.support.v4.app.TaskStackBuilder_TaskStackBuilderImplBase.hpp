#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.TaskStackBuilder_TaskStackBuilderImpl.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class TaskStackBuilder_TaskStackBuilderImplBase : public virtual ::java::lang::Object,
                                                  public virtual ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TaskStackBuilder_TaskStackBuilderImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TaskStackBuilder_TaskStackBuilderImplBase(const ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl((jobject)0) {obj = x.obj;}
    TaskStackBuilder_TaskStackBuilderImplBase(::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase& operator=(const ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase& operator=(::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::app::PendingIntent getPendingIntent(const ::android::content::Context&, const std::vector< ::android::content::Intent>&, int32_t, int32_t, const ::android::os::Bundle&) const;

};
}
}
}
}


