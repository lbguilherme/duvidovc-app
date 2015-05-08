#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace audiofx { class AudioEffect_Descriptor; } } }
namespace android { namespace media { namespace audiofx { class AudioEffect_OnControlStatusChangeListener; } } }
namespace android { namespace media { namespace audiofx { class AudioEffect_OnEnableStatusChangeListener; } } }

namespace android {
namespace media {
namespace audiofx {
class AudioEffect : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioEffect(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioEffect(const ::android::media::audiofx::AudioEffect& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioEffect(::android::media::audiofx::AudioEffect&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::AudioEffect& operator=(const ::android::media::audiofx::AudioEffect& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::AudioEffect& operator=(::android::media::audiofx::AudioEffect&& x) {obj = std::move(x.obj); return *this;}
    
    void release() const ;
    ::android::media::audiofx::AudioEffect_Descriptor getDescriptor() const ;
    static std::vector< ::android::media::audiofx::AudioEffect_Descriptor> queryEffects();
    int32_t setEnabled(bool) const ;
    int32_t getId() const ;
    bool getEnabled() const ;
    bool hasControl() const ;
    void setEnableStatusListener(const ::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener&) const ;
    void setControlStatusListener(const ::android::media::audiofx::AudioEffect_OnControlStatusChangeListener&) const ;

};
}
}
}

#include "android.media.audiofx.AudioEffect_Descriptor.hpp"
#include "android.media.audiofx.AudioEffect_OnControlStatusChangeListener.hpp"
#include "android.media.audiofx.AudioEffect_OnEnableStatusChangeListener.hpp"

