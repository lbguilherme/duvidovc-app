#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace media { class VolumeProviderCompat_Callback; } } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class VolumeProviderCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VolumeProviderCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VolumeProviderCompat(const ::android::support::v4::media::VolumeProviderCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VolumeProviderCompat(::android::support::v4::media::VolumeProviderCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::VolumeProviderCompat& operator=(const ::android::support::v4::media::VolumeProviderCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::VolumeProviderCompat& operator=(::android::support::v4::media::VolumeProviderCompat&& x) {obj = std::move(x.obj); return *this;}
    
    VolumeProviderCompat(int32_t, int32_t, int32_t);
    int32_t getCurrentVolume() const;
    int32_t getVolumeControl() const;
    int32_t getMaxVolume() const;
    void setCurrentVolume(int32_t) const;
    void onSetVolumeTo(int32_t) const;
    void onAdjustVolume(int32_t) const;
    void setCallback(const ::android::support::v4::media::VolumeProviderCompat_Callback&) const;
    ::java::lang::Object getVolumeProvider() const;

};
}
}
}
}

#include "android.support.v4.media.VolumeProviderCompat_Callback.hpp"

