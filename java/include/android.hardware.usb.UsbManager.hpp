#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace hardware { namespace usb { class UsbAccessory; } } }
namespace android { namespace hardware { namespace usb { class UsbDevice; } } }
namespace android { namespace hardware { namespace usb { class UsbDeviceConnection; } } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace util { class HashMap; } }

namespace android {
namespace hardware {
namespace usb {
class UsbManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UsbManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UsbManager(const ::android::hardware::usb::UsbManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UsbManager(::android::hardware::usb::UsbManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::usb::UsbManager& operator=(const ::android::hardware::usb::UsbManager& x) {obj = x.obj; return *this;}
    ::android::hardware::usb::UsbManager& operator=(::android::hardware::usb::UsbManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::HashMap getDeviceList() const;
    ::android::hardware::usb::UsbDeviceConnection openDevice(const ::android::hardware::usb::UsbDevice&) const;
    std::vector< ::android::hardware::usb::UsbAccessory> getAccessoryList() const;
    ::android::os::ParcelFileDescriptor openAccessory(const ::android::hardware::usb::UsbAccessory&) const;
    bool hasPermission(const ::android::hardware::usb::UsbDevice&) const;
    bool hasPermission(const ::android::hardware::usb::UsbAccessory&) const;
    void requestPermission(const ::android::hardware::usb::UsbDevice&, const ::android::app::PendingIntent&) const;
    void requestPermission(const ::android::hardware::usb::UsbAccessory&, const ::android::app::PendingIntent&) const;

};
}
}
}


