#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace mtp {
class MtpDeviceInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MtpDeviceInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MtpDeviceInfo(const ::android::mtp::MtpDeviceInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MtpDeviceInfo(::android::mtp::MtpDeviceInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::mtp::MtpDeviceInfo& operator=(const ::android::mtp::MtpDeviceInfo& x) {obj = x.obj; return *this;}
    ::android::mtp::MtpDeviceInfo& operator=(::android::mtp::MtpDeviceInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getManufacturer() const ;
    ::java::lang::String getModel() const ;
    ::java::lang::String getVersion() const ;
    ::java::lang::String getSerialNumber() const ;

};
}
}


