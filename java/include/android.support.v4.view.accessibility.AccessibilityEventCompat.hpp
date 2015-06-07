#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityRecordCompat; } } } } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityEventCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityEventCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityEventCompat(const ::android::support::v4::view::accessibility::AccessibilityEventCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityEventCompat(::android::support::v4::view::accessibility::AccessibilityEventCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityEventCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityEventCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityEventCompat& operator=(::android::support::v4::view::accessibility::AccessibilityEventCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t getRecordCount(const ::android::view::accessibility::AccessibilityEvent&);
    static void appendRecord(const ::android::view::accessibility::AccessibilityEvent&, const ::android::support::v4::view::accessibility::AccessibilityRecordCompat&);
    static ::android::support::v4::view::accessibility::AccessibilityRecordCompat getRecord(const ::android::view::accessibility::AccessibilityEvent&, int32_t);
    static ::android::support::v4::view::accessibility::AccessibilityRecordCompat asRecord(const ::android::view::accessibility::AccessibilityEvent&);
    static void setContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent&, int32_t);
    static int32_t getContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent&);

};
}
}
}
}
}

#include "android.support.v4.view.accessibility.AccessibilityEventCompat_AccessibilityEventIcsImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityEventCompat_AccessibilityEventKitKatImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityEventCompat_AccessibilityEventStubImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityEventCompat_AccessibilityEventVersionImpl.hpp"

