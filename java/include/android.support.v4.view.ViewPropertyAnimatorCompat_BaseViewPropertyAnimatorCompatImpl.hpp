#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl.hpp"

namespace android { namespace support { namespace v4 { namespace view { class ViewPropertyAnimatorCompat; } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace animation { class Interpolator; } } }
namespace java { namespace lang { class Runnable; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl : public virtual ::java::lang::Object,
                                                                      public virtual ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl(const ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl((jobject)0) {obj = x.obj;}
    ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl(::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl& operator=(const ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl& operator=(::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setDuration(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, int64_t) const;
    void alpha(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void translationX(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void translationY(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void withEndAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, const ::java::lang::Runnable&) const;
    int64_t getDuration(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&) const;
    void setInterpolator(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, const ::android::view::animation::Interpolator&) const;
    ::android::view::animation::Interpolator getInterpolator(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&) const;
    void setStartDelay(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, int64_t) const;
    int64_t getStartDelay(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&) const;
    void alphaBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void rotation(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void rotationBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void rotationX(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void rotationXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void rotationY(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void rotationYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void scaleX(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void scaleXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void scaleY(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void scaleYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void cancel(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&) const;
    void x(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void xBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void y(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void yBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void translationXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void translationYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, float) const;
    void start(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&) const;
    void withLayer(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&) const;
    void withStartAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, const ::java::lang::Runnable&) const;

};
}
}
}
}

#include "android.support.v4.view.ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter.hpp"

