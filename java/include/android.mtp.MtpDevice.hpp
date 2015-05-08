#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { namespace usb { class UsbDevice; } } }
namespace android { namespace hardware { namespace usb { class UsbDeviceConnection; } } }
namespace android { namespace mtp { class MtpDeviceInfo; } }
namespace android { namespace mtp { class MtpObjectInfo; } }
namespace android { namespace mtp { class MtpStorageInfo; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace mtp {
class MtpDevice : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MtpDevice(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MtpDevice(const ::android::mtp::MtpDevice& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MtpDevice(::android::mtp::MtpDevice&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::mtp::MtpDevice& operator=(const ::android::mtp::MtpDevice& x) {obj = x.obj; return *this;}
    ::android::mtp::MtpDevice& operator=(::android::mtp::MtpDevice&& x) {obj = std::move(x.obj); return *this;}
    
    MtpDevice(const ::android::hardware::usb::UsbDevice&);
    bool open(const ::android::hardware::usb::UsbDeviceConnection&) const ;
    void close() const ;
    ::java::lang::String getDeviceName() const ;
    int32_t getDeviceId() const ;
    ::java::lang::String toString() const ;
    ::android::mtp::MtpDeviceInfo getDeviceInfo() const ;
    std::vector< int32_t> getStorageIds() const ;
    std::vector< int32_t> getObjectHandles(int32_t, int32_t, int32_t) const ;
    std::vector< int8_t> getObject(int32_t, int32_t) const ;
    std::vector< int8_t> getThumbnail(int32_t) const ;
    ::android::mtp::MtpStorageInfo getStorageInfo(int32_t) const ;
    ::android::mtp::MtpObjectInfo getObjectInfo(int32_t) const ;
    bool deleteObject(int32_t) const ;
    int64_t getParent(int32_t) const ;
    int64_t getStorageId(int32_t) const ;
    bool importFile(int32_t, const ::java::lang::String&) const ;

};
}
}


