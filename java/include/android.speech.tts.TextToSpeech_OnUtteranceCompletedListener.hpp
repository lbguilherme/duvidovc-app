#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace speech {
namespace tts {
class TextToSpeech_OnUtteranceCompletedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextToSpeech_OnUtteranceCompletedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextToSpeech_OnUtteranceCompletedListener(const ::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextToSpeech_OnUtteranceCompletedListener(::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener& operator=(const ::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener& x) {obj = x.obj; return *this;}
    ::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener& operator=(::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onUtteranceCompleted(const ::java::lang::String&) const;

};
}
}
}


