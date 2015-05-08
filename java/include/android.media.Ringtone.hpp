#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class Ringtone : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Ringtone(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Ringtone(const ::android::media::Ringtone& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Ringtone(::android::media::Ringtone&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::Ringtone& operator=(const ::android::media::Ringtone& x) {obj = x.obj; return *this;}
    ::android::media::Ringtone& operator=(::android::media::Ringtone&& x) {obj = std::move(x.obj); return *this;}
    
    void setStreamType(int32_t) const ;
    int32_t getStreamType() const ;
    ::java::lang::String getTitle(const ::android::content::Context&) const ;
    void play() const ;
    void stop() const ;
    bool isPlaying() const ;

};
}
}


