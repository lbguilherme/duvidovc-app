#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace speech {
namespace tts {
class TextToSpeech_OnInitListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextToSpeech_OnInitListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextToSpeech_OnInitListener(const ::android::speech::tts::TextToSpeech_OnInitListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextToSpeech_OnInitListener(::android::speech::tts::TextToSpeech_OnInitListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::TextToSpeech_OnInitListener& operator=(const ::android::speech::tts::TextToSpeech_OnInitListener& x) {obj = x.obj; return *this;}
    ::android::speech::tts::TextToSpeech_OnInitListener& operator=(::android::speech::tts::TextToSpeech_OnInitListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onInit(int32_t) const ;

};
}
}
}


