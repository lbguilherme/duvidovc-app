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
namespace hardware {
namespace usb {
class UsbAccessory : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UsbAccessory(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UsbAccessory(const ::android::hardware::usb::UsbAccessory& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    UsbAccessory(::android::hardware::usb::UsbAccessory&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::usb::UsbAccessory& operator=(const ::android::hardware::usb::UsbAccessory& x) {obj = x.obj; return *this;}
    ::android::hardware::usb::UsbAccessory& operator=(::android::hardware::usb::UsbAccessory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getManufacturer() const ;
    ::java::lang::String getModel() const ;
    ::java::lang::String getDescription() const ;
    ::java::lang::String getVersion() const ;
    ::java::lang::String getUri() const ;
    ::java::lang::String getSerial() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}


