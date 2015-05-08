#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Intent; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class IntentCompat_IntentCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentCompat_IntentCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentCompat_IntentCompatImpl(const ::android::support::v4::content::IntentCompat_IntentCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IntentCompat_IntentCompatImpl(::android::support::v4::content::IntentCompat_IntentCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::IntentCompat_IntentCompatImpl& operator=(const ::android::support::v4::content::IntentCompat_IntentCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::IntentCompat_IntentCompatImpl& operator=(::android::support::v4::content::IntentCompat_IntentCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::Intent makeMainActivity(const ::android::content::ComponentName&) const ;
    ::android::content::Intent makeMainSelectorActivity(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::content::Intent makeRestartActivityTask(const ::android::content::ComponentName&) const ;

};
}
}
}
}


