#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.content.IntentCompat_IntentCompatImplHC.hpp"

namespace android { namespace content { class Intent; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class IntentCompat_IntentCompatImplIcsMr1 : public virtual ::java::lang::Object,
                                            public virtual ::android::support::v4::content::IntentCompat_IntentCompatImplHC {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentCompat_IntentCompatImplIcsMr1(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::content::IntentCompat_IntentCompatImpl(_obj), ::android::support::v4::content::IntentCompat_IntentCompatImplBase(_obj), ::android::support::v4::content::IntentCompat_IntentCompatImplHC(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentCompat_IntentCompatImplIcsMr1(const ::android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImpl((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImplBase((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImplHC((jobject)0) {obj = x.obj;}
    IntentCompat_IntentCompatImplIcsMr1(::android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImpl((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImplBase((jobject)0), ::android::support::v4::content::IntentCompat_IntentCompatImplHC((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1& operator=(const ::android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1& operator=(::android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::Intent makeMainSelectorActivity(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}
}


