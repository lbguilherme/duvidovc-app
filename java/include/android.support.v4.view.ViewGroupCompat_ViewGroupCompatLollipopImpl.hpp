#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl.hpp"

namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewGroupCompat_ViewGroupCompatLollipopImpl : public virtual ::java::lang::Object,
                                                    public virtual ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroupCompat_ViewGroupCompatLollipopImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroupCompat_ViewGroupCompatLollipopImpl(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatLollipopImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl((jobject)0) {obj = x.obj;}
    ViewGroupCompat_ViewGroupCompatLollipopImpl(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatLollipopImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatLollipopImpl& operator=(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatLollipopImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatLollipopImpl& operator=(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatLollipopImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setTransitionGroup(const ::android::view::ViewGroup&, bool) const ;
    bool isTransitionGroup(const ::android::view::ViewGroup&) const ;
    int32_t getNestedScrollAxes(const ::android::view::ViewGroup&) const ;

};
}
}
}
}

