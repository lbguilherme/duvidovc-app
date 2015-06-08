#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewConfigurationCompat_ViewConfigurationVersionImpl.hpp"

namespace android { namespace view { class ViewConfiguration; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewConfigurationCompat_BaseViewConfigurationVersionImpl : public virtual ::java::lang::Object,
                                                                 public virtual ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewConfigurationCompat_BaseViewConfigurationVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewConfigurationCompat_BaseViewConfigurationVersionImpl(const ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl((jobject)0) {obj = x.obj;}
    ViewConfigurationCompat_BaseViewConfigurationVersionImpl(::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl& operator=(const ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl& operator=(::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getScaledPagingTouchSlop(const ::android::view::ViewConfiguration&) const;
    bool hasPermanentMenuKey(const ::android::view::ViewConfiguration&) const;

};
}
}
}
}


