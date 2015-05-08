#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.media.audiofx.AudioEffect.hpp"

namespace android { namespace media { namespace audiofx { class EnvironmentalReverb_OnParameterChangeListener; } } }
namespace android { namespace media { namespace audiofx { class EnvironmentalReverb_Settings; } } }

namespace android {
namespace media {
namespace audiofx {
class EnvironmentalReverb : public virtual ::java::lang::Object,
                            public virtual ::android::media::audiofx::AudioEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EnvironmentalReverb(jobject _obj) : ::java::lang::Object(_obj), ::android::media::audiofx::AudioEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EnvironmentalReverb(const ::android::media::audiofx::EnvironmentalReverb& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj;}
    EnvironmentalReverb(::android::media::audiofx::EnvironmentalReverb&& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::EnvironmentalReverb& operator=(const ::android::media::audiofx::EnvironmentalReverb& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::EnvironmentalReverb& operator=(::android::media::audiofx::EnvironmentalReverb&& x) {obj = std::move(x.obj); return *this;}
    
    EnvironmentalReverb(int32_t, int32_t);
    void setRoomLevel(int16_t) const ;
    int16_t getRoomLevel() const ;
    void setRoomHFLevel(int16_t) const ;
    int16_t getRoomHFLevel() const ;
    void setDecayTime(int32_t) const ;
    int32_t getDecayTime() const ;
    void setDecayHFRatio(int16_t) const ;
    int16_t getDecayHFRatio() const ;
    void setReflectionsLevel(int16_t) const ;
    int16_t getReflectionsLevel() const ;
    void setReflectionsDelay(int32_t) const ;
    int32_t getReflectionsDelay() const ;
    void setReverbLevel(int16_t) const ;
    int16_t getReverbLevel() const ;
    void setReverbDelay(int32_t) const ;
    int32_t getReverbDelay() const ;
    void setDiffusion(int16_t) const ;
    int16_t getDiffusion() const ;
    void setDensity(int16_t) const ;
    int16_t getDensity() const ;
    void setParameterListener(const ::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener&) const ;
    ::android::media::audiofx::EnvironmentalReverb_Settings getProperties() const ;
    void setProperties(const ::android::media::audiofx::EnvironmentalReverb_Settings&) const ;

};
}
}
}

#include "android.media.audiofx.EnvironmentalReverb_OnParameterChangeListener.hpp"
#include "android.media.audiofx.EnvironmentalReverb_Settings.hpp"

