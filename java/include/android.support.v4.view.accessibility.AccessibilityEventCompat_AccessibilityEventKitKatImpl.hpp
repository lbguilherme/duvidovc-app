#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityEventCompat_AccessibilityEventIcsImpl.hpp"

namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityEventCompat_AccessibilityEventKitKatImpl : public virtual ::java::lang::Object,
                                                              public virtual ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityEventCompat_AccessibilityEventKitKatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityEventCompat_AccessibilityEventKitKatImpl(const ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl((jobject)0) {obj = x.obj;}
    AccessibilityEventCompat_AccessibilityEventKitKatImpl(::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl& operator=(::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent&, int32_t) const;
    int32_t getContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent&) const;

};
}
}
}
}
}


