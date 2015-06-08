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
class MediaPlayer_OnSeekCompleteListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaPlayer_OnSeekCompleteListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaPlayer_OnSeekCompleteListener(const ::android::media::MediaPlayer_OnSeekCompleteListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaPlayer_OnSeekCompleteListener(::android::media::MediaPlayer_OnSeekCompleteListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaPlayer_OnSeekCompleteListener& operator=(const ::android::media::MediaPlayer_OnSeekCompleteListener& x) {obj = x.obj; return *this;}
    ::android::media::MediaPlayer_OnSeekCompleteListener& operator=(::android::media::MediaPlayer_OnSeekCompleteListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onSeekComplete(const ::android::media::MediaPlayer&) const;

};
}
}


