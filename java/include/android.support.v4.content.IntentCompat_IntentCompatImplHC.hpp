#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.content.IntentCompat_IntentCompatImplBase.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Intent; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class IntentCompat_IntentCompatImplHC : public virtual ::java::lang::Object,
                                        public virtual ::android::support::v4::content::IntentCompat_IntentCompatImplBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentCompat_IntentCompatImplHC(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::content::IntentCompat_IntentCompatImpl(_obj), ::android::support::v4::content::IntentCompat_IntentCompatImplBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentCompat_IntentCompatImplHC(const ::android::support::v4::content::IntentCompat_IntentCompatImplHC& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImpl((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImplBase((jobject)0) {obj = x.obj;}
    IntentCompat_IntentCompatImplHC(::android::support::v4::content::IntentCompat_IntentCompatImplHC&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImpl((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImplBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::IntentCompat_IntentCompatImplHC& operator=(const ::android::support::v4::content::IntentCompat_IntentCompatImplHC& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::IntentCompat_IntentCompatImplHC& operator=(::android::support::v4::content::IntentCompat_IntentCompatImplHC&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::Intent makeMainActivity(const ::android::content::ComponentName&) const ;
    ::android::content::Intent makeRestartActivityTask(const ::android::content::ComponentName&) const ;

};
}
}
}
}


