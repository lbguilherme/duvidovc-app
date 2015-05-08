#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_KitKatViewCompatImpl.hpp"

namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_Api21ViewCompatImpl : public virtual ::java::lang::Object,
                                       public virtual ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_Api21ViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_GBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_HCViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_JBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_Api21ViewCompatImpl(const ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_Api21ViewCompatImpl(::android::support::v4::view::ViewCompat_Api21ViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_Api21ViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setTransitionName(const ::android::view::View&, const ::java::lang::String&) const ;
    ::java::lang::String getTransitionName(const ::android::view::View&) const ;
    void requestApplyInsets(const ::android::view::View&) const ;
    void setElevation(const ::android::view::View&, float) const ;
    float getElevation(const ::android::view::View&) const ;
    void setTranslationZ(const ::android::view::View&, float) const ;
    float getTranslationZ(const ::android::view::View&) const ;
    bool isImportantForAccessibility(const ::android::view::View&) const ;

};
}
}
}
}


