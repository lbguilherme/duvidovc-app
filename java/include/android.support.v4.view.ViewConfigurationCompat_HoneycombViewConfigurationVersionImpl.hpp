#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewConfigurationCompat_FroyoViewConfigurationVersionImpl.hpp"

namespace android { namespace view { class ViewConfiguration; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl : public virtual ::java::lang::Object,
                                                                      public virtual ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl(_obj), ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl(_obj), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl(const ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl((jobject)0) {obj = x.obj;}
    ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl(::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl& operator=(const ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl& operator=(::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasPermanentMenuKey(const ::android::view::ViewConfiguration&) const;

};
}
}
}
}


