#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.media.audiofx.AudioEffect.hpp"

namespace android { namespace media { namespace audiofx { class Equalizer_OnParameterChangeListener; } } }
namespace android { namespace media { namespace audiofx { class Equalizer_Settings; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
namespace audiofx {
class Equalizer : public virtual ::java::lang::Object,
                  public virtual ::android::media::audiofx::AudioEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Equalizer(jobject _obj) : ::java::lang::Object(_obj), ::android::media::audiofx::AudioEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Equalizer(const ::android::media::audiofx::Equalizer& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj;}
    Equalizer(::android::media::audiofx::Equalizer&& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::Equalizer& operator=(const ::android::media::audiofx::Equalizer& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::Equalizer& operator=(::android::media::audiofx::Equalizer&& x) {obj = std::move(x.obj); return *this;}
    
    Equalizer(int32_t, int32_t);
    int16_t getNumberOfBands() const;
    std::vector< int16_t> getBandLevelRange() const;
    void setBandLevel(int16_t, int16_t) const;
    int16_t getBandLevel(int16_t) const;
    int32_t getCenterFreq(int16_t) const;
    std::vector< int32_t> getBandFreqRange(int16_t) const;
    int16_t getBand(int32_t) const;
    int16_t getCurrentPreset() const;
    void usePreset(int16_t) const;
    int16_t getNumberOfPresets() const;
    ::java::lang::String getPresetName(int16_t) const;
    void setParameterListener(const ::android::media::audiofx::Equalizer_OnParameterChangeListener&) const;
    ::android::media::audiofx::Equalizer_Settings getProperties() const;
    void setProperties(const ::android::media::audiofx::Equalizer_Settings&) const;

};
}
}
}

#include "android.media.audiofx.Equalizer_OnParameterChangeListener.hpp"
#include "android.media.audiofx.Equalizer_Settings.hpp"

