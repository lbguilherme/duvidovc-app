#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.media.audiofx.AudioEffect.hpp"

namespace android { namespace media { namespace audiofx { class BassBoost_OnParameterChangeListener; } } }
namespace android { namespace media { namespace audiofx { class BassBoost_Settings; } } }

namespace android {
namespace media {
namespace audiofx {
class BassBoost : public virtual ::java::lang::Object,
                  public virtual ::android::media::audiofx::AudioEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BassBoost(jobject _obj) : ::java::lang::Object(_obj), ::android::media::audiofx::AudioEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BassBoost(const ::android::media::audiofx::BassBoost& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj;}
    BassBoost(::android::media::audiofx::BassBoost&& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::BassBoost& operator=(const ::android::media::audiofx::BassBoost& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::BassBoost& operator=(::android::media::audiofx::BassBoost&& x) {obj = std::move(x.obj); return *this;}
    
    BassBoost(int32_t, int32_t);
    bool getStrengthSupported() const ;
    void setStrength(int16_t) const ;
    int16_t getRoundedStrength() const ;
    void setParameterListener(const ::android::media::audiofx::BassBoost_OnParameterChangeListener&) const ;
    ::android::media::audiofx::BassBoost_Settings getProperties() const ;
    void setProperties(const ::android::media::audiofx::BassBoost_Settings&) const ;

};
}
}
}

#include "android.media.audiofx.BassBoost_OnParameterChangeListener.hpp"
#include "android.media.audiofx.BassBoost_Settings.hpp"

