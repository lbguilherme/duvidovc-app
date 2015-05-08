#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class MediaRecorder; } }

namespace android {
namespace media {
class MediaRecorder_OnErrorListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaRecorder_OnErrorListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaRecorder_OnErrorListener(const ::android::media::MediaRecorder_OnErrorListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaRecorder_OnErrorListener(::android::media::MediaRecorder_OnErrorListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaRecorder_OnErrorListener& operator=(const ::android::media::MediaRecorder_OnErrorListener& x) {obj = x.obj; return *this;}
    ::android::media::MediaRecorder_OnErrorListener& operator=(::android::media::MediaRecorder_OnErrorListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onError(const ::android::media::MediaRecorder&, int32_t, int32_t) const ;

};
}
}


