#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl.hpp"

namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl : public virtual ::java::lang::Object,
                                                                   public virtual ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl(_obj), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl(::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl& operator=(::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setSource(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;

};
}
}
}
}
}


