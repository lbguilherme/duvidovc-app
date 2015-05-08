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
class IntentCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentCompat(const ::android::support::v4::content::IntentCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IntentCompat(::android::support::v4::content::IntentCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::IntentCompat& operator=(const ::android::support::v4::content::IntentCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::IntentCompat& operator=(::android::support::v4::content::IntentCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::content::Intent makeMainActivity(const ::android::content::ComponentName&);
    static ::android::content::Intent makeMainSelectorActivity(const ::java::lang::String&, const ::java::lang::String&);
    static ::android::content::Intent makeRestartActivityTask(const ::android::content::ComponentName&);

};
}
}
}
}

#include "android.support.v4.content.IntentCompat_IntentCompatImpl.hpp"
#include "android.support.v4.content.IntentCompat_IntentCompatImplBase.hpp"
#include "android.support.v4.content.IntentCompat_IntentCompatImplHC.hpp"
#include "android.support.v4.content.IntentCompat_IntentCompatImplIcsMr1.hpp"

