#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl.hpp"

namespace android { namespace accessibilityservice { class AccessibilityServiceInfo; } }
namespace android { namespace content { namespace pm { class ResolveInfo; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace accessibilityservice {
class AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl : public virtual ::java::lang::Object,
                                                                       public virtual ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl(_obj), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl(const ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl((jobject)0) {obj = x.obj;}
    AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl(::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl((jobject)0), ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl& operator=(const ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl& operator=(::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool getCanRetrieveWindowContent(const ::android::accessibilityservice::AccessibilityServiceInfo&) const ;
    ::java::lang::String getDescription(const ::android::accessibilityservice::AccessibilityServiceInfo&) const ;
    ::java::lang::String getId(const ::android::accessibilityservice::AccessibilityServiceInfo&) const ;
    ::android::content::pm::ResolveInfo getResolveInfo(const ::android::accessibilityservice::AccessibilityServiceInfo&) const ;
    ::java::lang::String getSettingsActivityName(const ::android::accessibilityservice::AccessibilityServiceInfo&) const ;
    int32_t getCapabilities(const ::android::accessibilityservice::AccessibilityServiceInfo&) const ;

};
}
}
}
}


