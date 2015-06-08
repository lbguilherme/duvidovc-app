#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace media { class AudioManager_OnAudioFocusChangeListener; } }
namespace android { namespace media { class RemoteControlClient; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class AudioManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioManager(const ::android::media::AudioManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioManager(::android::media::AudioManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::AudioManager& operator=(const ::android::media::AudioManager& x) {obj = x.obj; return *this;}
    ::android::media::AudioManager& operator=(::android::media::AudioManager&& x) {obj = std::move(x.obj); return *this;}
    
    void adjustStreamVolume(int32_t, int32_t, int32_t) const;
    void adjustVolume(int32_t, int32_t) const;
    void adjustSuggestedStreamVolume(int32_t, int32_t, int32_t) const;
    int32_t getRingerMode() const;
    int32_t getStreamMaxVolume(int32_t) const;
    int32_t getStreamVolume(int32_t) const;
    void setRingerMode(int32_t) const;
    void setStreamVolume(int32_t, int32_t, int32_t) const;
    void setStreamSolo(int32_t, bool) const;
    void setStreamMute(int32_t, bool) const;
    bool shouldVibrate(int32_t) const;
    int32_t getVibrateSetting(int32_t) const;
    void setVibrateSetting(int32_t, int32_t) const;
    void setSpeakerphoneOn(bool) const;
    bool isSpeakerphoneOn() const;
    bool isBluetoothScoAvailableOffCall() const;
    void startBluetoothSco() const;
    void stopBluetoothSco() const;
    void setBluetoothScoOn(bool) const;
    bool isBluetoothScoOn() const;
    void setBluetoothA2dpOn(bool) const;
    bool isBluetoothA2dpOn() const;
    void setWiredHeadsetOn(bool) const;
    bool isWiredHeadsetOn() const;
    void setMicrophoneMute(bool) const;
    bool isMicrophoneMute() const;
    void setMode(int32_t) const;
    int32_t getMode() const;
    void setRouting(int32_t, int32_t, int32_t) const;
    int32_t getRouting(int32_t) const;
    bool isMusicActive() const;
    void setParameters(const ::java::lang::String&) const;
    ::java::lang::String getParameters(const ::java::lang::String&) const;
    void playSoundEffect(int32_t) const;
    void playSoundEffect(int32_t, float) const;
    void loadSoundEffects() const;
    void unloadSoundEffects() const;
    int32_t requestAudioFocus(const ::android::media::AudioManager_OnAudioFocusChangeListener&, int32_t, int32_t) const;
    int32_t abandonAudioFocus(const ::android::media::AudioManager_OnAudioFocusChangeListener&) const;
    void registerMediaButtonEventReceiver(const ::android::content::ComponentName&) const;
    void unregisterMediaButtonEventReceiver(const ::android::content::ComponentName&) const;
    void registerRemoteControlClient(const ::android::media::RemoteControlClient&) const;
    void unregisterRemoteControlClient(const ::android::media::RemoteControlClient&) const;

};
}
}

#include "android.media.AudioManager_OnAudioFocusChangeListener.hpp"

