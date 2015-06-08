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
class FacebookBroadcastReceiver : public virtual ::java::lang::Object,
                                  public virtual ::android::content::BroadcastReceiver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookBroadcastReceiver(jobject _obj) : ::java::lang::Object(_obj), ::android::content::BroadcastReceiver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookBroadcastReceiver(const ::com::facebook::FacebookBroadcastReceiver& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj;}
    FacebookBroadcastReceiver(::com::facebook::FacebookBroadcastReceiver&& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookBroadcastReceiver& operator=(const ::com::facebook::FacebookBroadcastReceiver& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookBroadcastReceiver& operator=(::com::facebook::FacebookBroadcastReceiver&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookBroadcastReceiver();
    void onReceive(const ::android::content::Context&, const ::android::content::Intent&) const;

};
}
}


