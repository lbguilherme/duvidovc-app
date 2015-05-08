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
class ViewConfigurationCompat_ViewConfigurationVersionImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewConfigurationCompat_ViewConfigurationVersionImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewConfigurationCompat_ViewConfigurationVersionImpl(const ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewConfigurationCompat_ViewConfigurationVersionImpl(::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl& operator=(const ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl& operator=(::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getScaledPagingTouchSlop(const ::android::view::ViewConfiguration&) const ;
    bool hasPermanentMenuKey(const ::android::view::ViewConfiguration&) const ;

};
}
}
}
}


