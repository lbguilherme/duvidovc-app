#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl.hpp"

namespace android { namespace accessibilityservice { class AccessibilityServiceInfo; } }

namespace android {
namespace support {
namespace v4 {
namespace accessibilityservice {
class AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2 : public virtual ::java::lang::Object,
                                                                            public virtual ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl(_obj), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl(_obj), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2(const ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2& x) : ::java::lang::Object((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl((jobject)0) {obj = x.obj;}
    AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2(::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2& operator=(const ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2& x) {obj = x.obj; return *this;}
    ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2& operator=(::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getCapabilities(const ::android::accessibilityservice::AccessibilityServiceInfo&) const ;

};
}
}
}
}


