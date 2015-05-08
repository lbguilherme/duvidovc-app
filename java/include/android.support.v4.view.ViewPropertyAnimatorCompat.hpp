#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace view { class ViewPropertyAnimatorCompat; } } } }
namespace android { namespace view { namespace animation { class Interpolator; } } }
namespace java { namespace lang { class Runnable; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPropertyAnimatorCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPropertyAnimatorCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPropertyAnimatorCompat(const ::android::support::v4::view::ViewPropertyAnimatorCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewPropertyAnimatorCompat(::android::support::v4::view::ViewPropertyAnimatorCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPropertyAnimatorCompat& operator=(const ::android::support::v4::view::ViewPropertyAnimatorCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPropertyAnimatorCompat& operator=(::android::support::v4::view::ViewPropertyAnimatorCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::support::v4::view::ViewPropertyAnimatorCompat setDuration(int64_t) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat alpha(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat alphaBy(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat translationX(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat translationY(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat withEndAction(const ::java::lang::Runnable&) const ;
    int64_t getDuration() const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat setInterpolator(const ::android::view::animation::Interpolator&) const ;
    ::android::view::animation::Interpolator getInterpolator() const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat setStartDelay(int64_t) const ;
    int64_t getStartDelay() const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat rotation(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat rotationBy(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat rotationX(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat rotationXBy(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat rotationY(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat rotationYBy(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat scaleX(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat scaleXBy(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat scaleY(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat scaleYBy(float) const ;
    void cancel() const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat x(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat xBy(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat y(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat yBy(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat translationXBy(float) const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat translationYBy(float) const ;
    void start() const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat withLayer() const ;
    ::android::support::v4::view::ViewPropertyAnimatorCompat withStartAction(const ::java::lang::Runnable&) const ;

};
}
}
}
}

#include "android.support.v4.view.ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener.hpp"

