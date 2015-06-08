#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace media { class VolumeProviderCompat; } } } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class VolumeProviderCompat_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VolumeProviderCompat_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VolumeProviderCompat_Callback(const ::android::support::v4::media::VolumeProviderCompat_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VolumeProviderCompat_Callback(::android::support::v4::media::VolumeProviderCompat_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::VolumeProviderCompat_Callback& operator=(const ::android::support::v4::media::VolumeProviderCompat_Callback& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::VolumeProviderCompat_Callback& operator=(::android::support::v4::media::VolumeProviderCompat_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    VolumeProviderCompat_Callback();
    void onVolumeChanged(const ::android::support::v4::media::VolumeProviderCompat&) const;

};
}
}
}
}


