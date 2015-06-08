#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace media {
class AudioManager_OnAudioFocusChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioManager_OnAudioFocusChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioManager_OnAudioFocusChangeListener(const ::android::media::AudioManager_OnAudioFocusChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioManager_OnAudioFocusChangeListener(::android::media::AudioManager_OnAudioFocusChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::AudioManager_OnAudioFocusChangeListener& operator=(const ::android::media::AudioManager_OnAudioFocusChangeListener& x) {obj = x.obj; return *this;}
    ::android::media::AudioManager_OnAudioFocusChangeListener& operator=(::android::media::AudioManager_OnAudioFocusChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onAudioFocusChange(int32_t) const;

};
}
}


