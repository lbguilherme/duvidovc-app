#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class SoundPool; } }

namespace android {
namespace media {
class SoundPool_OnLoadCompleteListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SoundPool_OnLoadCompleteListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SoundPool_OnLoadCompleteListener(const ::android::media::SoundPool_OnLoadCompleteListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SoundPool_OnLoadCompleteListener(::android::media::SoundPool_OnLoadCompleteListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::SoundPool_OnLoadCompleteListener& operator=(const ::android::media::SoundPool_OnLoadCompleteListener& x) {obj = x.obj; return *this;}
    ::android::media::SoundPool_OnLoadCompleteListener& operator=(::android::media::SoundPool_OnLoadCompleteListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onLoadComplete(const ::android::media::SoundPool&, int32_t, int32_t) const;

};
}
}


