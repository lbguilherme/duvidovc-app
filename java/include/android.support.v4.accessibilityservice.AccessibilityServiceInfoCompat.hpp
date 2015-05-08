#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace accessibilityservice { class AccessibilityServiceInfo; } }
namespace android { namespace content { namespace pm { class ResolveInfo; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace accessibilityservice {
class AccessibilityServiceInfoCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityServiceInfoCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityServiceInfoCompat(const ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityServiceInfoCompat(::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat& operator=(const ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat& operator=(::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getId(const ::android::accessibilityservice::AccessibilityServiceInfo&);
    static ::android::content::pm::ResolveInfo getResolveInfo(const ::android::accessibilityservice::AccessibilityServiceInfo&);
    static ::java::lang::String getSettingsActivityName(const ::android::accessibilityservice::AccessibilityServiceInfo&);
    static bool getCanRetrieveWindowContent(const ::android::accessibilityservice::AccessibilityServiceInfo&);
    static ::java::lang::String getDescription(const ::android::accessibilityservice::AccessibilityServiceInfo&);
    static ::java::lang::String feedbackTypeToString(int32_t);
    static ::java::lang::String flagToString(int32_t);
    static int32_t getCapabilities(const ::android::accessibilityservice::AccessibilityServiceInfo&);
    static ::java::lang::String capabilityToString(int32_t);

};
}
}
}
}

#include "android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl.hpp"
#include "android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2.hpp"
#include "android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl.hpp"
#include "android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl.hpp"

