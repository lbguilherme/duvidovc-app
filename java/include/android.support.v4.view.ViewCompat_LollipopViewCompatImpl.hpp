#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_KitKatViewCompatImpl.hpp"

namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_LollipopViewCompatImpl : public virtual ::java::lang::Object,
                                          public virtual ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_LollipopViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_GBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_HCViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_JBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_LollipopViewCompatImpl(const ::android::support::v4::view::ViewCompat_LollipopViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_LollipopViewCompatImpl(::android::support::v4::view::ViewCompat_LollipopViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_LollipopViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_LollipopViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_LollipopViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_LollipopViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setTransitionName(const ::android::view::View&, const ::java::lang::String&) const ;
    ::java::lang::String getTransitionName(const ::android::view::View&) const ;
    void requestApplyInsets(const ::android::view::View&) const ;
    void setElevation(const ::android::view::View&, float) const ;
    float getElevation(const ::android::view::View&) const ;
    void setTranslationZ(const ::android::view::View&, float) const ;
    float getTranslationZ(const ::android::view::View&) const ;
    void setNestedScrollingEnabled(const ::android::view::View&, bool) const ;
    bool isNestedScrollingEnabled(const ::android::view::View&) const ;
    bool startNestedScroll(const ::android::view::View&, int32_t) const ;
    void stopNestedScroll(const ::android::view::View&) const ;
    bool hasNestedScrollingParent(const ::android::view::View&) const ;
    bool dispatchNestedScroll(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t, const std::vector< int32_t>&) const ;
    bool dispatchNestedPreScroll(const ::android::view::View&, int32_t, int32_t, const std::vector< int32_t>&, const std::vector< int32_t>&) const ;
    bool dispatchNestedFling(const ::android::view::View&, float, float, bool) const ;
    bool dispatchNestedPreFling(const ::android::view::View&, float, float) const ;
    bool isImportantForAccessibility(const ::android::view::View&) const ;
    ::android::content::res::ColorStateList getBackgroundTintList(const ::android::view::View&) const ;
    void setBackgroundTintList(const ::android::view::View&, const ::android::content::res::ColorStateList&) const ;
    void setBackgroundTintMode(const ::android::view::View&, const ::android::graphics::PorterDuff_Mode&) const ;
    ::android::graphics::PorterDuff_Mode getBackgroundTintMode(const ::android::view::View&) const ;
    float getZ(const ::android::view::View&) const ;

};
}
}
}
}


