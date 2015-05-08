#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class BroadcastReceiver_PendingResult; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class BroadcastReceiver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BroadcastReceiver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BroadcastReceiver(const ::android::content::BroadcastReceiver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BroadcastReceiver(::android::content::BroadcastReceiver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::BroadcastReceiver& operator=(const ::android::content::BroadcastReceiver& x) {obj = x.obj; return *this;}
    ::android::content::BroadcastReceiver& operator=(::android::content::BroadcastReceiver&& x) {obj = std::move(x.obj); return *this;}
    
    BroadcastReceiver();
    void onReceive(const ::android::content::Context&, const ::android::content::Intent&) const ;
    ::android::content::BroadcastReceiver_PendingResult goAsync() const ;
    ::android::os::IBinder peekService(const ::android::content::Context&, const ::android::content::Intent&) const ;
    void setResultCode(int32_t) const ;
    int32_t getResultCode() const ;
    void setResultData(const ::java::lang::String&) const ;
    ::java::lang::String getResultData() const ;
    void setResultExtras(const ::android::os::Bundle&) const ;
    ::android::os::Bundle getResultExtras(bool) const ;
    void setResult(int32_t, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    bool getAbortBroadcast() const ;
    void abortBroadcast() const ;
    void clearAbortBroadcast() const ;
    bool isOrderedBroadcast() const ;
    bool isInitialStickyBroadcast() const ;
    void setOrderedHint(bool) const ;
    void setDebugUnregister(bool) const ;
    bool getDebugUnregister() const ;

};
}
}

#include "android.content.BroadcastReceiver_PendingResult.hpp"

