#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Service.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class IBinder; } }

namespace android {
namespace speech {
namespace tts {
class TextToSpeechService : public virtual ::java::lang::Object,
                            public virtual ::android::app::Service {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextToSpeechService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextToSpeechService(const ::android::speech::tts::TextToSpeechService& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    TextToSpeechService(::android::speech::tts::TextToSpeechService&& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::TextToSpeechService& operator=(const ::android::speech::tts::TextToSpeechService& x) {obj = x.obj; return *this;}
    ::android::speech::tts::TextToSpeechService& operator=(::android::speech::tts::TextToSpeechService&& x) {obj = std::move(x.obj); return *this;}
    
    TextToSpeechService();
    void onCreate() const;
    void onDestroy() const;
    ::android::os::IBinder onBind(const ::android::content::Intent&) const;

};
}
}
}


