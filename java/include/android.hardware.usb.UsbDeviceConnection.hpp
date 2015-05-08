#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { namespace usb { class UsbEndpoint; } } }
namespace android { namespace hardware { namespace usb { class UsbInterface; } } }
namespace android { namespace hardware { namespace usb { class UsbRequest; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace hardware {
namespace usb {
class UsbDeviceConnection : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UsbDeviceConnection(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UsbDeviceConnection(const ::android::hardware::usb::UsbDeviceConnection& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UsbDeviceConnection(::android::hardware::usb::UsbDeviceConnection&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::usb::UsbDeviceConnection& operator=(const ::android::hardware::usb::UsbDeviceConnection& x) {obj = x.obj; return *this;}
    ::android::hardware::usb::UsbDeviceConnection& operator=(::android::hardware::usb::UsbDeviceConnection&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;
    int32_t getFileDescriptor() const ;
    std::vector< int8_t> getRawDescriptors() const ;
    bool claimInterface(const ::android::hardware::usb::UsbInterface&, bool) const ;
    bool releaseInterface(const ::android::hardware::usb::UsbInterface&) const ;
    int32_t controlTransfer(int32_t, int32_t, int32_t, int32_t, const std::vector< int8_t>&, int32_t, int32_t) const ;
    int32_t bulkTransfer(const ::android::hardware::usb::UsbEndpoint&, const std::vector< int8_t>&, int32_t, int32_t) const ;
    ::android::hardware::usb::UsbRequest requestWait() const ;
    ::java::lang::String getSerial() const ;

};
}
}
}


