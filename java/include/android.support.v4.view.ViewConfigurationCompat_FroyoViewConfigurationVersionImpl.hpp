#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewConfigurationCompat_BaseViewConfigurationVersionImpl.hpp"

namespace android { namespace view { class ViewConfiguration; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewConfigurationCompat_FroyoViewConfigurationVersionImpl : public virtual ::java::lang::Object,
                                                                  public virtual ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewConfigurationCompat_FroyoViewConfigurationVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl(_obj), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewConfigurationCompat_FroyoViewConfigurationVersionImpl(const ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl((jobject)0) {obj = x.obj;}
    ViewConfigurationCompat_FroyoViewConfigurationVersionImpl(::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl& operator=(const ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl& operator=(::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getScaledPagingTouchSlop(const ::android::view::ViewConfiguration&) const ;

};
}
}
}
}


