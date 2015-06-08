#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeProviderCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeProviderCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeProviderCompat(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityNodeProviderCompat(::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat& operator=(::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat&& x) {obj = std::move(x.obj); return *this;}
    
    AccessibilityNodeProviderCompat();
    AccessibilityNodeProviderCompat(const ::java::lang::Object&);
    ::java::lang::Object getProvider() const;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat createAccessibilityNodeInfo(int32_t) const;
    bool performAction(int32_t, int32_t, const ::android::os::Bundle&) const;
    ::java::util::List findAccessibilityNodeInfosByText(const ::java::lang::String&, int32_t) const;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat findFocus(int32_t) const;

};
}
}
}
}
}

#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat_AccessibilityNodeProviderKitKatImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl.hpp"

