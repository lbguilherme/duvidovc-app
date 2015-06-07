#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_JBViewCompatImpl.hpp"

namespace android { namespace graphics { class Paint; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_JbMr1ViewCompatImpl : public virtual ::java::lang::Object,
                                       public virtual ::android::support::v4::view::ViewCompat_JBViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_JbMr1ViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_GBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_HCViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_JBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_JbMr1ViewCompatImpl(const ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_JbMr1ViewCompatImpl(::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getLabelFor(const ::android::view::View&) const ;
    void setLabelFor(const ::android::view::View&, int32_t) const ;
    void setLayerPaint(const ::android::view::View&, const ::android::graphics::Paint&) const ;
    int32_t getLayoutDirection(const ::android::view::View&) const ;
    void setLayoutDirection(const ::android::view::View&, int32_t) const ;
    int32_t getPaddingStart(const ::android::view::View&) const ;
    int32_t getPaddingEnd(const ::android::view::View&) const ;
    void setPaddingRelative(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const ;
    int32_t getWindowSystemUiVisibility(const ::android::view::View&) const ;
    bool isPaddingRelative(const ::android::view::View&) const ;

};
}
}
}
}


