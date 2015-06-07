#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewParentCompat_ViewParentCompatICSImpl.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewParent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewParentCompat_ViewParentCompatKitKatImpl : public virtual ::java::lang::Object,
                                                    public virtual ::android::support::v4::view::ViewParentCompat_ViewParentCompatICSImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewParentCompat_ViewParentCompatKitKatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewParentCompat_ViewParentCompatICSImpl(_obj), ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl(_obj), ::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewParentCompat_ViewParentCompatKitKatImpl(const ::android::support::v4::view::ViewParentCompat_ViewParentCompatKitKatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewParentCompat_ViewParentCompatICSImpl((jobject)0), ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl((jobject)0), ::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl((jobject)0) {obj = x.obj;}
    ViewParentCompat_ViewParentCompatKitKatImpl(::android::support::v4::view::ViewParentCompat_ViewParentCompatKitKatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewParentCompat_ViewParentCompatICSImpl((jobject)0), ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl((jobject)0), ::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewParentCompat_ViewParentCompatKitKatImpl& operator=(const ::android::support::v4::view::ViewParentCompat_ViewParentCompatKitKatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewParentCompat_ViewParentCompatKitKatImpl& operator=(::android::support::v4::view::ViewParentCompat_ViewParentCompatKitKatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void notifySubtreeAccessibilityStateChanged(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::View&, int32_t) const ;

};
}
}
}
}


