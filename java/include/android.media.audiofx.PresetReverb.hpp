#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.media.audiofx.AudioEffect.hpp"

namespace android { namespace media { namespace audiofx { class PresetReverb_OnParameterChangeListener; } } }
namespace android { namespace media { namespace audiofx { class PresetReverb_Settings; } } }

namespace android {
namespace media {
namespace audiofx {
class PresetReverb : public virtual ::java::lang::Object,
                     public virtual ::android::media::audiofx::AudioEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PresetReverb(jobject _obj) : ::java::lang::Object(_obj), ::android::media::audiofx::AudioEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PresetReverb(const ::android::media::audiofx::PresetReverb& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj;}
    PresetReverb(::android::media::audiofx::PresetReverb&& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::PresetReverb& operator=(const ::android::media::audiofx::PresetReverb& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::PresetReverb& operator=(::android::media::audiofx::PresetReverb&& x) {obj = std::move(x.obj); return *this;}
    
    PresetReverb(int32_t, int32_t);
    void setPreset(int16_t) const;
    int16_t getPreset() const;
    void setParameterListener(const ::android::media::audiofx::PresetReverb_OnParameterChangeListener&) const;
    ::android::media::audiofx::PresetReverb_Settings getProperties() const;
    void setProperties(const ::android::media::audiofx::PresetReverb_Settings&) const;

};
}
}
}

#include "android.media.audiofx.PresetReverb_OnParameterChangeListener.hpp"
#include "android.media.audiofx.PresetReverb_Settings.hpp"

