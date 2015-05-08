#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl : public virtual ::java::lang::Object,
                                                                       public virtual ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object obtain(const ::android::view::View&, int32_t) const ;
    ::java::lang::Object findFocus(const ::java::lang::Object&, int32_t) const ;
    ::java::lang::Object focusSearch(const ::java::lang::Object&, int32_t) const ;
    void addChild(const ::java::lang::Object&, const ::android::view::View&, int32_t) const ;
    void setSource(const ::java::lang::Object&, const ::android::view::View&, int32_t) const ;
    bool isVisibleToUser(const ::java::lang::Object&) const ;
    void setVisibleToUser(const ::java::lang::Object&, bool) const ;
    bool isAccessibilityFocused(const ::java::lang::Object&) const ;
    void setAccessibilityFocused(const ::java::lang::Object&, bool) const ;
    bool performAction(const ::java::lang::Object&, int32_t, const ::android::os::Bundle&) const ;
    void setMovementGranularities(const ::java::lang::Object&, int32_t) const ;
    int32_t getMovementGranularities(const ::java::lang::Object&) const ;
    void setParent(const ::java::lang::Object&, const ::android::view::View&, int32_t) const ;

};
}
}
}
}
}


