#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace speech { class RecognitionListener; } }
namespace android { namespace speech { class SpeechRecognizer; } }

namespace android {
namespace speech {
class SpeechRecognizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpeechRecognizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpeechRecognizer(const ::android::speech::SpeechRecognizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SpeechRecognizer(::android::speech::SpeechRecognizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::SpeechRecognizer& operator=(const ::android::speech::SpeechRecognizer& x) {obj = x.obj; return *this;}
    ::android::speech::SpeechRecognizer& operator=(::android::speech::SpeechRecognizer&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isRecognitionAvailable(const ::android::content::Context&);
    static ::android::speech::SpeechRecognizer createSpeechRecognizer(const ::android::content::Context&);
    static ::android::speech::SpeechRecognizer createSpeechRecognizer(const ::android::content::Context&, const ::android::content::ComponentName&);
    void setRecognitionListener(const ::android::speech::RecognitionListener&) const ;
    void startListening(const ::android::content::Intent&) const ;
    void stopListening() const ;
    void cancel() const ;
    void destroy() const ;

};
}
}


