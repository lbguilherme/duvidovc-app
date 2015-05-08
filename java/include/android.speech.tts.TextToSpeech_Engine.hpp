#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace speech { namespace tts { class TextToSpeech; } } }

namespace android {
namespace speech {
namespace tts {
class TextToSpeech_Engine : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextToSpeech_Engine(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextToSpeech_Engine(const ::android::speech::tts::TextToSpeech_Engine& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextToSpeech_Engine(::android::speech::tts::TextToSpeech_Engine&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::TextToSpeech_Engine& operator=(const ::android::speech::tts::TextToSpeech_Engine& x) {obj = x.obj; return *this;}
    ::android::speech::tts::TextToSpeech_Engine& operator=(::android::speech::tts::TextToSpeech_Engine&& x) {obj = std::move(x.obj); return *this;}
    
    TextToSpeech_Engine(const ::android::speech::tts::TextToSpeech&);

};
}
}
}


