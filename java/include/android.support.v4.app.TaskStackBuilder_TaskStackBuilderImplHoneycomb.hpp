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
class TaskStackBuilder_TaskStackBuilderImplHoneycomb : public virtual ::java::lang::Object,
                                                       public virtual ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TaskStackBuilder_TaskStackBuilderImplHoneycomb(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TaskStackBuilder_TaskStackBuilderImplHoneycomb(const ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl((jobject)0) {obj = x.obj;}
    TaskStackBuilder_TaskStackBuilderImplHoneycomb(::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb& operator=(const ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb& operator=(::android::support::v4::app::TaskStackBuilder_TaskStackBuilderImplHoneycomb&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::app::PendingIntent getPendingIntent(const ::android::content::Context&, const std::vector< ::android::content::Intent>&, int32_t, int32_t, const ::android::os::Bundle&) const;

};
}
}
}
}


