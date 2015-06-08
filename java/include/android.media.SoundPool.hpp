#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace media { class SoundPool_OnLoadCompleteListener; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class SoundPool : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SoundPool(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SoundPool(const ::android::media::SoundPool& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SoundPool(::android::media::SoundPool&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::SoundPool& operator=(const ::android::media::SoundPool& x) {obj = x.obj; return *this;}
    ::android::media::SoundPool& operator=(::android::media::SoundPool&& x) {obj = std::move(x.obj); return *this;}
    
    SoundPool(int32_t, int32_t, int32_t);
    int32_t load(const ::java::lang::String&, int32_t) const;
    int32_t load(const ::android::content::Context&, int32_t, int32_t) const;
    int32_t load(const ::android::content::res::AssetFileDescriptor&, int32_t) const;
    int32_t load(const ::java::io::FileDescriptor&, int64_t, int64_t, int32_t) const;
    bool unload(int32_t) const;
    int32_t play(int32_t, float, float, int32_t, int32_t, float) const;
    void pause(int32_t) const;
    void resume(int32_t) const;
    void autoPause() const;
    void autoResume() const;
    void stop(int32_t) const;
    void setVolume(int32_t, float, float) const;
    void setPriority(int32_t, int32_t) const;
    void setLoop(int32_t, int32_t) const;
    void setRate(int32_t, float) const;
    void setOnLoadCompleteListener(const ::android::media::SoundPool_OnLoadCompleteListener&) const;
    void release() const;

};
}
}

#include "android.media.SoundPool_OnLoadCompleteListener.hpp"

