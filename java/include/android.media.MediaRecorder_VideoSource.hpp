#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace media {
class MediaRecorder_VideoSource : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaRecorder_VideoSource(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaRecorder_VideoSource(const ::android::media::MediaRecorder_VideoSource& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaRecorder_VideoSource(::android::media::MediaRecorder_VideoSource&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaRecorder_VideoSource& operator=(const ::android::media::MediaRecorder_VideoSource& x) {obj = x.obj; return *this;}
    ::android::media::MediaRecorder_VideoSource& operator=(::android::media::MediaRecorder_VideoSource&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


