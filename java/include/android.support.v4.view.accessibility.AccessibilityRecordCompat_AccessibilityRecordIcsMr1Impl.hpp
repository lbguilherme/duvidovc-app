#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityRecordCompat_AccessibilityRecordIcsImpl.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl : public virtual ::java::lang::Object,
                                                                public virtual ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl(::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl& operator=(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl& operator=(::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getMaxScrollX(const ::java::lang::Object&) const;
    int32_t getMaxScrollY(const ::java::lang::Object&) const;
    void setMaxScrollX(const ::java::lang::Object&, int32_t) const;
    void setMaxScrollY(const ::java::lang::Object&, int32_t) const;

};
}
}
}
}
}


