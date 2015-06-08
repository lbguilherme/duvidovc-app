#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class ActionProvider_SubUiVisibilityListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionProvider_SubUiVisibilityListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionProvider_SubUiVisibilityListener(const ::android::support::v4::view::ActionProvider_SubUiVisibilityListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionProvider_SubUiVisibilityListener(::android::support::v4::view::ActionProvider_SubUiVisibilityListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ActionProvider_SubUiVisibilityListener& operator=(const ::android::support::v4::view::ActionProvider_SubUiVisibilityListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ActionProvider_SubUiVisibilityListener& operator=(::android::support::v4::view::ActionProvider_SubUiVisibilityListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onSubUiVisibilityChanged(bool) const;

};
}
}
}
}


