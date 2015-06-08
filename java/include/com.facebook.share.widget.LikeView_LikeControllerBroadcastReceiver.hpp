#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.BroadcastReceiver.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class LikeView_LikeControllerBroadcastReceiver : public virtual ::java::lang::Object,
                                                 public virtual ::android::content::BroadcastReceiver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeView_LikeControllerBroadcastReceiver(jobject _obj) : ::java::lang::Object(_obj), ::android::content::BroadcastReceiver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeView_LikeControllerBroadcastReceiver(const ::com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj;}
    LikeView_LikeControllerBroadcastReceiver(::com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver&& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver& operator=(const ::com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver& operator=(::com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver&& x) {obj = std::move(x.obj); return *this;}
    
    void onReceive(const ::android::content::Context&, const ::android::content::Intent&) const;

};
}
}
}
}


