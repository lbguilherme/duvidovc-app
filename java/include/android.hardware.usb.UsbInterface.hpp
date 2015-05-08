#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace hardware { namespace usb { class UsbEndpoint; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace hardware {
namespace usb {
class UsbInterface : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UsbInterface(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UsbInterface(const ::android::hardware::usb::UsbInterface& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    UsbInterface(::android::hardware::usb::UsbInterface&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::usb::UsbInterface& operator=(const ::android::hardware::usb::UsbInterface& x) {obj = x.obj; return *this;}
    ::android::hardware::usb::UsbInterface& operator=(::android::hardware::usb::UsbInterface&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getId() const ;
    int32_t getInterfaceClass() const ;
    int32_t getInterfaceSubclass() const ;
    int32_t getInterfaceProtocol() const ;
    int32_t getEndpointCount() const ;
    ::android::hardware::usb::UsbEndpoint getEndpoint(int32_t) const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}


