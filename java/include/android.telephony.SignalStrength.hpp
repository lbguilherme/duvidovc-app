#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace telephony {
class SignalStrength : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SignalStrength(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SignalStrength(const ::android::telephony::SignalStrength& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    SignalStrength(::android::telephony::SignalStrength&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::SignalStrength& operator=(const ::android::telephony::SignalStrength& x) {obj = x.obj; return *this;}
    ::android::telephony::SignalStrength& operator=(::android::telephony::SignalStrength&& x) {obj = std::move(x.obj); return *this;}
    
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;
    int32_t getGsmSignalStrength() const ;
    int32_t getGsmBitErrorRate() const ;
    int32_t getCdmaDbm() const ;
    int32_t getCdmaEcio() const ;
    int32_t getEvdoDbm() const ;
    int32_t getEvdoEcio() const ;
    int32_t getEvdoSnr() const ;
    bool isGsm() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;

};
}
}


