#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class MediaPlayer; } }

namespace android {
namespace media {
class MediaPlayer_OnVideoSizeChangedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaPlayer_OnVideoSizeChangedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaPlayer_OnVideoSizeChangedListener(const ::android::media::MediaPlayer_OnVideoSizeChangedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaPlayer_OnVideoSizeChangedListener(::android::media::MediaPlayer_OnVideoSizeChangedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaPlayer_OnVideoSizeChangedListener& operator=(const ::android::media::MediaPlayer_OnVideoSizeChangedListener& x) {obj = x.obj; return *this;}
    ::android::media::MediaPlayer_OnVideoSizeChangedListener& operator=(::android::media::MediaPlayer_OnVideoSizeChangedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onVideoSizeChanged(const ::android::media::MediaPlayer&, int32_t, int32_t) const;

};
}
}


