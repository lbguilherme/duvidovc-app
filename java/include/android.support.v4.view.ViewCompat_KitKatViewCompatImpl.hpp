#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_JbMr1ViewCompatImpl.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_KitKatViewCompatImpl : public virtual ::java::lang::Object,
                                        public virtual ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_KitKatViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_GBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_HCViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_JBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_KitKatViewCompatImpl(const ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_KitKatViewCompatImpl(::android::support::v4::view::ViewCompat_KitKatViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_KitKatViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getAccessibilityLiveRegion(const ::android::view::View&) const ;
    void setAccessibilityLiveRegion(const ::android::view::View&, int32_t) const ;
    void setImportantForAccessibility(const ::android::view::View&, int32_t) const ;
    bool isLaidOut(const ::android::view::View&) const ;

};
}
}
}
}


