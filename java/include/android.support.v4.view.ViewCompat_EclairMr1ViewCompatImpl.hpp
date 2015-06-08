#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_BaseViewCompatImpl.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_EclairMr1ViewCompatImpl : public virtual ::java::lang::Object,
                                           public virtual ::android::support::v4::view::ViewCompat_BaseViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_EclairMr1ViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_EclairMr1ViewCompatImpl(const ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_EclairMr1ViewCompatImpl(::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool isOpaque(const ::android::view::View&) const;
    void setChildrenDrawingOrderEnabled(const ::android::view::ViewGroup&, bool) const;

};
}
}
}
}


