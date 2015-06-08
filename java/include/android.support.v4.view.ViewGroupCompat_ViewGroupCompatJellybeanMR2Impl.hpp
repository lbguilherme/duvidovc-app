#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatIcsImpl.hpp"

namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl : public virtual ::java::lang::Object,
                                                        public virtual ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl((jobject)0) {obj = x.obj;}
    ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl& operator=(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl& operator=(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getLayoutMode(const ::android::view::ViewGroup&) const;
    void setLayoutMode(const ::android::view::ViewGroup&, int32_t) const;

};
}
}
}
}


