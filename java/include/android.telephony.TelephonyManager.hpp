#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace telephony { class CellLocation; } }
namespace android { namespace telephony { class PhoneStateListener; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace telephony {
class TelephonyManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TelephonyManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TelephonyManager(const ::android::telephony::TelephonyManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TelephonyManager(::android::telephony::TelephonyManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::TelephonyManager& operator=(const ::android::telephony::TelephonyManager& x) {obj = x.obj; return *this;}
    ::android::telephony::TelephonyManager& operator=(::android::telephony::TelephonyManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getDeviceSoftwareVersion() const ;
    ::java::lang::String getDeviceId() const ;
    ::android::telephony::CellLocation getCellLocation() const ;
    ::java::util::List getNeighboringCellInfo() const ;
    int32_t getPhoneType() const ;
    ::java::lang::String getNetworkOperatorName() const ;
    ::java::lang::String getNetworkOperator() const ;
    bool isNetworkRoaming() const ;
    ::java::lang::String getNetworkCountryIso() const ;
    int32_t getNetworkType() const ;
    bool hasIccCard() const ;
    int32_t getSimState() const ;
    ::java::lang::String getSimOperator() const ;
    ::java::lang::String getSimOperatorName() const ;
    ::java::lang::String getSimCountryIso() const ;
    ::java::lang::String getSimSerialNumber() const ;
    ::java::lang::String getSubscriberId() const ;
    ::java::lang::String getLine1Number() const ;
    ::java::lang::String getVoiceMailNumber() const ;
    ::java::lang::String getVoiceMailAlphaTag() const ;
    int32_t getCallState() const ;
    int32_t getDataActivity() const ;
    int32_t getDataState() const ;
    void listen(const ::android::telephony::PhoneStateListener&, int32_t) const ;

};
}
}


