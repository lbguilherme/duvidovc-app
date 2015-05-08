#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace hardware {
namespace usb {
class UsbEndpoint : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UsbEndpoint(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UsbEndpoint(const ::android::hardware::usb::UsbEndpoint& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    UsbEndpoint(::android::hardware::usb::UsbEndpoint&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::usb::UsbEndpoint& operator=(const ::android::hardware::usb::UsbEndpoint& x) {obj = x.obj; return *this;}
    ::android::hardware::usb::UsbEndpoint& operator=(::android::hardware::usb::UsbEndpoint&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getAddress() const ;
    int32_t getEndpointNumber() const ;
    int32_t getDirection() const ;
    int32_t getAttributes() const ;
    int32_t getType() const ;
    int32_t getMaxPacketSize() const ;
    int32_t getInterval() const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}


