#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class BroadcastReceiver_PendingResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BroadcastReceiver_PendingResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BroadcastReceiver_PendingResult(const ::android::content::BroadcastReceiver_PendingResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BroadcastReceiver_PendingResult(::android::content::BroadcastReceiver_PendingResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::BroadcastReceiver_PendingResult& operator=(const ::android::content::BroadcastReceiver_PendingResult& x) {obj = x.obj; return *this;}
    ::android::content::BroadcastReceiver_PendingResult& operator=(::android::content::BroadcastReceiver_PendingResult&& x) {obj = std::move(x.obj); return *this;}
    
    void setResultCode(int32_t) const;
    int32_t getResultCode() const;
    void setResultData(const ::java::lang::String&) const;
    ::java::lang::String getResultData() const;
    void setResultExtras(const ::android::os::Bundle&) const;
    ::android::os::Bundle getResultExtras(bool) const;
    void setResult(int32_t, const ::java::lang::String&, const ::android::os::Bundle&) const;
    bool getAbortBroadcast() const;
    void abortBroadcast() const;
    void clearAbortBroadcast() const;
    void finish() const;

};
}
}


