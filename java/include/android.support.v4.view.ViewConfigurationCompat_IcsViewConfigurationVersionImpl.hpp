#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl.hpp"

namespace android { namespace view { class ViewConfiguration; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewConfigurationCompat_IcsViewConfigurationVersionImpl : public virtual ::java::lang::Object,
                                                                public virtual ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewConfigurationCompat_IcsViewConfigurationVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl(_obj), ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl(_obj), ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl(_obj), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewConfigurationCompat_IcsViewConfigurationVersionImpl(const ::android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl((jobject)0) {obj = x.obj;}
    ViewConfigurationCompat_IcsViewConfigurationVersionImpl(::android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl((jobject)0), ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl& operator=(const ::android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl& operator=(::android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasPermanentMenuKey(const ::android::view::ViewConfiguration&) const ;

};
}
}
}
}


