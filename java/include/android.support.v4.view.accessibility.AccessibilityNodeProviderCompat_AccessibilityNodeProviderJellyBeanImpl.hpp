#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeProviderCompat; } } } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl : public virtual ::java::lang::Object,
                                                                               public virtual ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl(::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object newAccessibilityNodeProviderBridge(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat&) const;

};
}
}
}
}
}


