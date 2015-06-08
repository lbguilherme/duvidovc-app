#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.media.audiofx.AudioEffect.hpp"

namespace android { namespace media { namespace audiofx { class Virtualizer_OnParameterChangeListener; } } }
namespace android { namespace media { namespace audiofx { class Virtualizer_Settings; } } }

namespace android {
namespace media {
namespace audiofx {
class Virtualizer : public virtual ::java::lang::Object,
                    public virtual ::android::media::audiofx::AudioEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Virtualizer(jobject _obj) : ::java::lang::Object(_obj), ::android::media::audiofx::AudioEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Virtualizer(const ::android::media::audiofx::Virtualizer& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj;}
    Virtualizer(::android::media::audiofx::Virtualizer&& x) : ::java::lang::Object((jobject)0), ::android::media::audiofx::AudioEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::Virtualizer& operator=(const ::android::media::audiofx::Virtualizer& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::Virtualizer& operator=(::android::media::audiofx::Virtualizer&& x) {obj = std::move(x.obj); return *this;}
    
    Virtualizer(int32_t, int32_t);
    bool getStrengthSupported() const;
    void setStrength(int16_t) const;
    int16_t getRoundedStrength() const;
    void setParameterListener(const ::android::media::audiofx::Virtualizer_OnParameterChangeListener&) const;
    ::android::media::audiofx::Virtualizer_Settings getProperties() const;
    void setProperties(const ::android::media::audiofx::Virtualizer_Settings&) const;

};
}
}
}

#include "android.media.audiofx.Virtualizer_OnParameterChangeListener.hpp"
#include "android.media.audiofx.Virtualizer_Settings.hpp"

