#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { namespace pm { class ResolveInfo; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace accessibilityservice {
class AccessibilityServiceInfo : public virtual ::java::lang::Object,
                                 public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityServiceInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityServiceInfo(const ::android::accessibilityservice::AccessibilityServiceInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    AccessibilityServiceInfo(::android::accessibilityservice::AccessibilityServiceInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accessibilityservice::AccessibilityServiceInfo& operator=(const ::android::accessibilityservice::AccessibilityServiceInfo& x) {obj = x.obj; return *this;}
    ::android::accessibilityservice::AccessibilityServiceInfo& operator=(::android::accessibilityservice::AccessibilityServiceInfo&& x) {obj = std::move(x.obj); return *this;}
    
    AccessibilityServiceInfo();
    ::java::lang::String getId() const;
    ::android::content::pm::ResolveInfo getResolveInfo() const;
    ::java::lang::String getSettingsActivityName() const;
    bool getCanRetrieveWindowContent() const;
    ::java::lang::String getDescription() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::java::lang::String toString() const;
    static ::java::lang::String feedbackTypeToString(int32_t);
    static ::java::lang::String flagToString(int32_t);

};
}
}


