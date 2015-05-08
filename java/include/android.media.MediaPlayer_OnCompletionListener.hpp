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
class MediaPlayer_OnCompletionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaPlayer_OnCompletionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaPlayer_OnCompletionListener(const ::android::media::MediaPlayer_OnCompletionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaPlayer_OnCompletionListener(::android::media::MediaPlayer_OnCompletionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaPlayer_OnCompletionListener& operator=(const ::android::media::MediaPlayer_OnCompletionListener& x) {obj = x.obj; return *this;}
    ::android::media::MediaPlayer_OnCompletionListener& operator=(::android::media::MediaPlayer_OnCompletionListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onCompletion(const ::android::media::MediaPlayer&) const ;

};
}
}


