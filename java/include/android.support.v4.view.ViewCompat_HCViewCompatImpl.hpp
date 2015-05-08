#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_GBViewCompatImpl.hpp"

namespace android { namespace graphics { class Paint; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_HCViewCompatImpl : public virtual ::java::lang::Object,
                                    public virtual ::android::support::v4::view::ViewCompat_GBViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_HCViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_GBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_HCViewCompatImpl(const ::android::support::v4::view::ViewCompat_HCViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_HCViewCompatImpl(::android::support::v4::view::ViewCompat_HCViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_HCViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_HCViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_HCViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_HCViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    float getAlpha(const ::android::view::View&) const ;
    void setLayerType(const ::android::view::View&, int32_t, const ::android::graphics::Paint&) const ;
    int32_t getLayerType(const ::android::view::View&) const ;
    void setLayerPaint(const ::android::view::View&, const ::android::graphics::Paint&) const ;
    int32_t resolveSizeAndState(int32_t, int32_t, int32_t) const ;
    int32_t getMeasuredWidthAndState(const ::android::view::View&) const ;
    int32_t getMeasuredHeightAndState(const ::android::view::View&) const ;
    int32_t getMeasuredState(const ::android::view::View&) const ;
    float getTranslationX(const ::android::view::View&) const ;
    float getTranslationY(const ::android::view::View&) const ;
    void setTranslationX(const ::android::view::View&, float) const ;
    void setTranslationY(const ::android::view::View&, float) const ;
    void setAlpha(const ::android::view::View&, float) const ;
    void setX(const ::android::view::View&, float) const ;
    void setY(const ::android::view::View&, float) const ;
    void setRotation(const ::android::view::View&, float) const ;
    void setRotationX(const ::android::view::View&, float) const ;
    void setRotationY(const ::android::view::View&, float) const ;
    void setScaleX(const ::android::view::View&, float) const ;
    void setScaleY(const ::android::view::View&, float) const ;
    void setPivotX(const ::android::view::View&, float) const ;
    void setPivotY(const ::android::view::View&, float) const ;
    float getX(const ::android::view::View&) const ;
    float getY(const ::android::view::View&) const ;
    float getRotation(const ::android::view::View&) const ;
    float getRotationX(const ::android::view::View&) const ;
    float getRotationY(const ::android::view::View&) const ;
    float getScaleX(const ::android::view::View&) const ;
    float getScaleY(const ::android::view::View&) const ;
    float getPivotX(const ::android::view::View&) const ;
    float getPivotY(const ::android::view::View&) const ;
    void jumpDrawablesToCurrentState(const ::android::view::View&) const ;
    void setSaveFromParentEnabled(const ::android::view::View&, bool) const ;
    void setActivated(const ::android::view::View&, bool) const ;

};
}
}
}
}


