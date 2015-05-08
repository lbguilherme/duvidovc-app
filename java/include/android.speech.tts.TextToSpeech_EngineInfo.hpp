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
class TextToSpeech_EngineInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextToSpeech_EngineInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextToSpeech_EngineInfo(const ::android::speech::tts::TextToSpeech_EngineInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextToSpeech_EngineInfo(::android::speech::tts::TextToSpeech_EngineInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::TextToSpeech_EngineInfo& operator=(const ::android::speech::tts::TextToSpeech_EngineInfo& x) {obj = x.obj; return *this;}
    ::android::speech::tts::TextToSpeech_EngineInfo& operator=(::android::speech::tts::TextToSpeech_EngineInfo&& x) {obj = std::move(x.obj); return *this;}
    
    TextToSpeech_EngineInfo();
    ::java::lang::String toString() const ;

};
}
}
}


