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
class MtpStorageInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MtpStorageInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MtpStorageInfo(const ::android::mtp::MtpStorageInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MtpStorageInfo(::android::mtp::MtpStorageInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::mtp::MtpStorageInfo& operator=(const ::android::mtp::MtpStorageInfo& x) {obj = x.obj; return *this;}
    ::android::mtp::MtpStorageInfo& operator=(::android::mtp::MtpStorageInfo&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getStorageId() const;
    int64_t getMaxCapacity() const;
    int64_t getFreeSpace() const;
    ::java::lang::String getDescription() const;
    ::java::lang::String getVolumeIdentifier() const;

};
}
}


