#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }

namespace android {
namespace speech {
class RecognitionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RecognitionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RecognitionListener(const ::android::speech::RecognitionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RecognitionListener(::android::speech::RecognitionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::RecognitionListener& operator=(const ::android::speech::RecognitionListener& x) {obj = x.obj; return *this;}
    ::android::speech::RecognitionListener& operator=(::android::speech::RecognitionListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onReadyForSpeech(const ::android::os::Bundle&) const;
    void onBeginningOfSpeech() const;
    void onRmsChanged(float) const;
    void onBufferReceived(const std::vector< int8_t>&) const;
    void onEndOfSpeech() const;
    void onError(int32_t) const;
    void onResults(const ::android::os::Bundle&) const;
    void onPartialResults(const ::android::os::Bundle&) const;
    void onEvent(int32_t, const ::android::os::Bundle&) const;

};
}
}


