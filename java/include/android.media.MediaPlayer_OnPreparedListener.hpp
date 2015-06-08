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
class MediaPlayer_OnPreparedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaPlayer_OnPreparedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaPlayer_OnPreparedListener(const ::android::media::MediaPlayer_OnPreparedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaPlayer_OnPreparedListener(::android::media::MediaPlayer_OnPreparedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaPlayer_OnPreparedListener& operator=(const ::android::media::MediaPlayer_OnPreparedListener& x) {obj = x.obj; return *this;}
    ::android::media::MediaPlayer_OnPreparedListener& operator=(::android::media::MediaPlayer_OnPreparedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onPrepared(const ::android::media::MediaPlayer&) const;

};
}
}


