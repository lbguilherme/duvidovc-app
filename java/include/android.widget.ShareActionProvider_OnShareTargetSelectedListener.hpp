#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace widget { class ShareActionProvider; } }

namespace android {
namespace widget {
class ShareActionProvider_OnShareTargetSelectedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareActionProvider_OnShareTargetSelectedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareActionProvider_OnShareTargetSelectedListener(const ::android::widget::ShareActionProvider_OnShareTargetSelectedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareActionProvider_OnShareTargetSelectedListener(::android::widget::ShareActionProvider_OnShareTargetSelectedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ShareActionProvider_OnShareTargetSelectedListener& operator=(const ::android::widget::ShareActionProvider_OnShareTargetSelectedListener& x) {obj = x.obj; return *this;}
    ::android::widget::ShareActionProvider_OnShareTargetSelectedListener& operator=(::android::widget::ShareActionProvider_OnShareTargetSelectedListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onShareTargetSelected(const ::android::widget::ShareActionProvider&, const ::android::content::Intent&) const;

};
}
}


