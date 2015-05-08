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
class AudioEffect_OnControlStatusChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioEffect_OnControlStatusChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioEffect_OnControlStatusChangeListener(const ::android::media::audiofx::AudioEffect_OnControlStatusChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioEffect_OnControlStatusChangeListener(::android::media::audiofx::AudioEffect_OnControlStatusChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::AudioEffect_OnControlStatusChangeListener& operator=(const ::android::media::audiofx::AudioEffect_OnControlStatusChangeListener& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::AudioEffect_OnControlStatusChangeListener& operator=(::android::media::audiofx::AudioEffect_OnControlStatusChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onControlStatusChange(const ::android::media::audiofx::AudioEffect&, bool) const ;

};
}
}
}


