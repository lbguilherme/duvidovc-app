#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class ViewConfiguration; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewConfigurationCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewConfigurationCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewConfigurationCompat(const ::android::support::v4::view::ViewConfigurationCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewConfigurationCompat(::android::support::v4::view::ViewConfigurationCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewConfigurationCompat& operator=(const ::android::support::v4::view::ViewConfigurationCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewConfigurationCompat& operator=(::android::support::v4::view::ViewConfigurationCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ViewConfigurationCompat();
    static int32_t getScaledPagingTouchSlop(const ::android::view::ViewConfiguration&);
    static bool hasPermanentMenuKey(const ::android::view::ViewConfiguration&);

};
}
}
}
}

#include "android.support.v4.view.ViewConfigurationCompat_BaseViewConfigurationVersionImpl.hpp"
#include "android.support.v4.view.ViewConfigurationCompat_FroyoViewConfigurationVersionImpl.hpp"
#include "android.support.v4.view.ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl.hpp"
#include "android.support.v4.view.ViewConfigurationCompat_IcsViewConfigurationVersionImpl.hpp"
#include "android.support.v4.view.ViewConfigurationCompat_ViewConfigurationVersionImpl.hpp"

