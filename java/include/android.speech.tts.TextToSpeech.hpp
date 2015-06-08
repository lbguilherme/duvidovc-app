#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace speech { namespace tts { class TextToSpeech_OnInitListener; } } }
namespace android { namespace speech { namespace tts { class TextToSpeech_OnUtteranceCompletedListener; } } }
namespace android { namespace speech { namespace tts { class UtteranceProgressListener; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class HashMap; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace speech {
namespace tts {
class TextToSpeech : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextToSpeech(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextToSpeech(const ::android::speech::tts::TextToSpeech& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextToSpeech(::android::speech::tts::TextToSpeech&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::TextToSpeech& operator=(const ::android::speech::tts::TextToSpeech& x) {obj = x.obj; return *this;}
    ::android::speech::tts::TextToSpeech& operator=(::android::speech::tts::TextToSpeech&& x) {obj = std::move(x.obj); return *this;}
    
    TextToSpeech(const ::android::content::Context&, const ::android::speech::tts::TextToSpeech_OnInitListener&);
    TextToSpeech(const ::android::content::Context&, const ::android::speech::tts::TextToSpeech_OnInitListener&, const ::java::lang::String&);
    void shutdown() const;
    int32_t addSpeech(const ::java::lang::String&, const ::java::lang::String&, int32_t) const;
    int32_t addSpeech(const ::java::lang::String&, const ::java::lang::String&) const;
    int32_t addEarcon(const ::java::lang::String&, const ::java::lang::String&, int32_t) const;
    int32_t addEarcon(const ::java::lang::String&, const ::java::lang::String&) const;
    int32_t speak(const ::java::lang::String&, int32_t, const ::java::util::HashMap&) const;
    int32_t playEarcon(const ::java::lang::String&, int32_t, const ::java::util::HashMap&) const;
    int32_t playSilence(int64_t, int32_t, const ::java::util::HashMap&) const;
    ::java::util::Set getFeatures(const ::java::util::Locale&) const;
    bool isSpeaking() const;
    int32_t stop() const;
    int32_t setSpeechRate(float) const;
    int32_t setPitch(float) const;
    int32_t setLanguage(const ::java::util::Locale&) const;
    ::java::util::Locale getLanguage() const;
    int32_t isLanguageAvailable(const ::java::util::Locale&) const;
    int32_t synthesizeToFile(const ::java::lang::String&, const ::java::util::HashMap&, const ::java::lang::String&) const;
    int32_t setOnUtteranceCompletedListener(const ::android::speech::tts::TextToSpeech_OnUtteranceCompletedListener&) const;
    int32_t setOnUtteranceProgressListener(const ::android::speech::tts::UtteranceProgressListener&) const;
    int32_t setEngineByPackageName(const ::java::lang::String&) const;
    ::java::lang::String getDefaultEngine() const;
    bool areDefaultsEnforced() const;
    ::java::util::List getEngines() const;

};
}
}
}

#include "android.speech.tts.TextToSpeech_Engine.hpp"
#include "android.speech.tts.TextToSpeech_EngineInfo.hpp"
#include "android.speech.tts.TextToSpeech_OnInitListener.hpp"
#include "android.speech.tts.TextToSpeech_OnUtteranceCompletedListener.hpp"

