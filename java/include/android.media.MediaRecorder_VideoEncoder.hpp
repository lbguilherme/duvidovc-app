#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace media {
class MediaRecorder_VideoEncoder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaRecorder_VideoEncoder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaRecorder_VideoEncoder(const ::android::media::MediaRecorder_VideoEncoder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaRecorder_VideoEncoder(::android::media::MediaRecorder_VideoEncoder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaRecorder_VideoEncoder& operator=(const ::android::media::MediaRecorder_VideoEncoder& x) {obj = x.obj; return *this;}
    ::android::media::MediaRecorder_VideoEncoder& operator=(::android::media::MediaRecorder_VideoEncoder&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


