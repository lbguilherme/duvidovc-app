#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatHCImpl.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewGroupCompat_ViewGroupCompatIcsImpl : public virtual ::java::lang::Object,
                                               public virtual ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroupCompat_ViewGroupCompatIcsImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroupCompat_ViewGroupCompatIcsImpl(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl((jobject)0) {obj = x.obj;}
    ViewGroupCompat_ViewGroupCompatIcsImpl(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl& operator=(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl& operator=(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool onRequestSendAccessibilityEvent(const ::android::view::ViewGroup&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const ;

};
}
}
}
}


