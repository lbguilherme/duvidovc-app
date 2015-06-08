#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace audiofx { class AudioEffect; } } }

namespace android {
namespace media {
namespace audiofx {
class AudioEffect_OnEnableStatusChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioEffect_OnEnableStatusChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioEffect_OnEnableStatusChangeListener(const ::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioEffect_OnEnableStatusChangeListener(::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener& operator=(const ::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener& operator=(::android::media::audiofx::AudioEffect_OnEnableStatusChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onEnableStatusChange(const ::android::media::audiofx::AudioEffect&, bool) const;

};
}
}
}


