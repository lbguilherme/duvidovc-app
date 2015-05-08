#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class MediaController_MediaPlayerControl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaController_MediaPlayerControl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaController_MediaPlayerControl(const ::android::widget::MediaController_MediaPlayerControl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaController_MediaPlayerControl(::android::widget::MediaController_MediaPlayerControl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::MediaController_MediaPlayerControl& operator=(const ::android::widget::MediaController_MediaPlayerControl& x) {obj = x.obj; return *this;}
    ::android::widget::MediaController_MediaPlayerControl& operator=(::android::widget::MediaController_MediaPlayerControl&& x) {obj = std::move(x.obj); return *this;}
    
    void start() const ;
    void pause() const ;
    int32_t getDuration() const ;
    int32_t getCurrentPosition() const ;
    void seekTo(int32_t) const ;
    bool isPlaying() const ;
    int32_t getBufferPercentage() const ;
    bool canPause() const ;
    bool canSeekBackward() const ;
    bool canSeekForward() const ;

};
}
}


