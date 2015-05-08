#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class JetPlayer; } }

namespace android {
namespace media {
class JetPlayer_OnJetEventListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JetPlayer_OnJetEventListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JetPlayer_OnJetEventListener(const ::android::media::JetPlayer_OnJetEventListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JetPlayer_OnJetEventListener(::android::media::JetPlayer_OnJetEventListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::JetPlayer_OnJetEventListener& operator=(const ::android::media::JetPlayer_OnJetEventListener& x) {obj = x.obj; return *this;}
    ::android::media::JetPlayer_OnJetEventListener& operator=(::android::media::JetPlayer_OnJetEventListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onJetEvent(const ::android::media::JetPlayer&, int16_t, int8_t, int8_t, int8_t, int8_t) const ;
    void onJetUserIdUpdate(const ::android::media::JetPlayer&, int32_t, int32_t) const ;
    void onJetNumQueuedSegmentUpdate(const ::android::media::JetPlayer&, int32_t) const ;
    void onJetPauseUpdate(const ::android::media::JetPlayer&, int32_t) const ;

};
}
}


