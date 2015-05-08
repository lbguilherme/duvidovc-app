#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_EclairMr1ViewCompatImpl.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_GBViewCompatImpl : public virtual ::java::lang::Object,
                                    public virtual ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_GBViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_GBViewCompatImpl(const ::android::support::v4::view::ViewCompat_GBViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_GBViewCompatImpl(::android::support::v4::view::ViewCompat_GBViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_GBViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_GBViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_GBViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_GBViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getOverScrollMode(const ::android::view::View&) const ;
    void setOverScrollMode(const ::android::view::View&, int32_t) const ;

};
}
}
}
}


