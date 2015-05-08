#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl.hpp"

namespace android { namespace support { namespace v4 { namespace view { class ViewPropertyAnimatorCompat; } } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Runnable; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl : public virtual ::java::lang::Object,
                                                                    public virtual ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl(_obj), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl(const ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl((jobject)0) {obj = x.obj;}
    ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl(::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl((jobject)0), ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl& operator=(const ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl& operator=(::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void withStartAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, const ::java::lang::Runnable&) const ;
    void withEndAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&, const ::java::lang::Runnable&) const ;
    void withLayer(const ::android::support::v4::view::ViewPropertyAnimatorCompat&, const ::android::view::View&) const ;

};
}
}
}
}


