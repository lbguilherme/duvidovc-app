#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatStubImpl.hpp"

namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewGroupCompat_ViewGroupCompatHCImpl : public virtual ::java::lang::Object,
                                              public virtual ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroupCompat_ViewGroupCompatHCImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroupCompat_ViewGroupCompatHCImpl(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl((jobject)0) {obj = x.obj;}
    ViewGroupCompat_ViewGroupCompatHCImpl(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl& operator=(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl& operator=(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setMotionEventSplittingEnabled(const ::android::view::ViewGroup&, bool) const;

};
}
}
}
}


