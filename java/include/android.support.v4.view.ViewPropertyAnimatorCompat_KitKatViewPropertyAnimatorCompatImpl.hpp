#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl : public virtual ::java::lang::Object,
                                                                        public virtual ::android::support::v4::view::ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl(const ::android::support::v4::view::ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl((jobject)0) {obj = x.obj;}
    ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl(::android::support::v4::view::ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl& operator=(const ::android::support::v4::view::ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl& operator=(::android::support::v4::view::ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


