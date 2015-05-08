#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { class AccessibilityDelegateCompat; } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeProviderCompat; } } } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl : public virtual ::java::lang::Object,
                                                                       public virtual ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl(_obj), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl(_obj), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl(const ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl(::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl& operator=(const ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl& operator=(::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object newAccessiblityDelegateBridge(const ::android::support::v4::view::AccessibilityDelegateCompat&) const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat getAccessibilityNodeProvider(const ::java::lang::Object&, const ::android::view::View&) const ;
    bool performAccessibilityAction(const ::java::lang::Object&, const ::android::view::View&, int32_t, const ::android::os::Bundle&) const ;

};
}
}
}
}


