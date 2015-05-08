#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityEventCompat_AccessibilityEventStubImpl.hpp"

namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityEventCompat_AccessibilityEventIcsImpl : public virtual ::java::lang::Object,
                                                           public virtual ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityEventCompat_AccessibilityEventIcsImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityEventCompat_AccessibilityEventIcsImpl(const ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl((jobject)0) {obj = x.obj;}
    AccessibilityEventCompat_AccessibilityEventIcsImpl(::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl& operator=(::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void appendRecord(const ::android::view::accessibility::AccessibilityEvent&, const ::java::lang::Object&) const ;
    ::java::lang::Object getRecord(const ::android::view::accessibility::AccessibilityEvent&, int32_t) const ;
    int32_t getRecordCount(const ::android::view::accessibility::AccessibilityEvent&) const ;

};
}
}
}
}
}


