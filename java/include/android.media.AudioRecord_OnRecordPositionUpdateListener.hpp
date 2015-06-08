#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class AudioRecord; } }

namespace android {
namespace media {
class AudioRecord_OnRecordPositionUpdateListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioRecord_OnRecordPositionUpdateListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioRecord_OnRecordPositionUpdateListener(const ::android::media::AudioRecord_OnRecordPositionUpdateListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioRecord_OnRecordPositionUpdateListener(::android::media::AudioRecord_OnRecordPositionUpdateListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::AudioRecord_OnRecordPositionUpdateListener& operator=(const ::android::media::AudioRecord_OnRecordPositionUpdateListener& x) {obj = x.obj; return *this;}
    ::android::media::AudioRecord_OnRecordPositionUpdateListener& operator=(::android::media::AudioRecord_OnRecordPositionUpdateListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onMarkerReached(const ::android::media::AudioRecord&) const;
    void onPeriodicNotification(const ::android::media::AudioRecord&) const;

};
}
}


