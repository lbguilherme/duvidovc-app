#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace telephony { class CellLocation; } }
namespace android { namespace telephony { class ServiceState; } }
namespace android { namespace telephony { class SignalStrength; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace telephony {
class PhoneStateListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PhoneStateListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PhoneStateListener(const ::android::telephony::PhoneStateListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PhoneStateListener(::android::telephony::PhoneStateListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::PhoneStateListener& operator=(const ::android::telephony::PhoneStateListener& x) {obj = x.obj; return *this;}
    ::android::telephony::PhoneStateListener& operator=(::android::telephony::PhoneStateListener&& x) {obj = std::move(x.obj); return *this;}
    
    PhoneStateListener();
    void onServiceStateChanged(const ::android::telephony::ServiceState&) const;
    void onSignalStrengthChanged(int32_t) const;
    void onMessageWaitingIndicatorChanged(bool) const;
    void onCallForwardingIndicatorChanged(bool) const;
    void onCellLocationChanged(const ::android::telephony::CellLocation&) const;
    void onCallStateChanged(int32_t, const ::java::lang::String&) const;
    void onDataConnectionStateChanged(int32_t) const;
    void onDataConnectionStateChanged(int32_t, int32_t) const;
    void onDataActivity(int32_t) const;
    void onSignalStrengthsChanged(const ::android::telephony::SignalStrength&) const;

};
}
}


