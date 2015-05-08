#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewParent; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewParentCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewParentCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewParentCompat(const ::android::support::v4::view::ViewParentCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewParentCompat(::android::support::v4::view::ViewParentCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewParentCompat& operator=(const ::android::support::v4::view::ViewParentCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewParentCompat& operator=(::android::support::v4::view::ViewParentCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static bool requestSendAccessibilityEvent(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&);

};
}
}
}
}

#include "android.support.v4.view.ViewParentCompat_ViewParentCompatICSImpl.hpp"
#include "android.support.v4.view.ViewParentCompat_ViewParentCompatImpl.hpp"
#include "android.support.v4.view.ViewParentCompat_ViewParentCompatStubImpl.hpp"

