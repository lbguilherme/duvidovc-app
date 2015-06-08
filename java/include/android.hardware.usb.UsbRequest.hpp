#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { namespace usb { class UsbDeviceConnection; } } }
namespace android { namespace hardware { namespace usb { class UsbEndpoint; } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace nio { class ByteBuffer; } }

namespace android {
namespace hardware {
namespace usb {
class UsbRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UsbRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UsbRequest(const ::android::hardware::usb::UsbRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UsbRequest(::android::hardware::usb::UsbRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::usb::UsbRequest& operator=(const ::android::hardware::usb::UsbRequest& x) {obj = x.obj; return *this;}
    ::android::hardware::usb::UsbRequest& operator=(::android::hardware::usb::UsbRequest&& x) {obj = std::move(x.obj); return *this;}
    
    UsbRequest();
    bool initialize(const ::android::hardware::usb::UsbDeviceConnection&, const ::android::hardware::usb::UsbEndpoint&) const;
    void close() const;
    ::android::hardware::usb::UsbEndpoint getEndpoint() const;
    ::java::lang::Object getClientData() const;
    void setClientData(const ::java::lang::Object&) const;
    bool queue(const ::java::nio::ByteBuffer&, int32_t) const;
    bool cancel() const;

};
}
}
}


