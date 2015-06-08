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
class RecognitionService_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RecognitionService_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RecognitionService_Callback(const ::android::speech::RecognitionService_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RecognitionService_Callback(::android::speech::RecognitionService_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::RecognitionService_Callback& operator=(const ::android::speech::RecognitionService_Callback& x) {obj = x.obj; return *this;}
    ::android::speech::RecognitionService_Callback& operator=(::android::speech::RecognitionService_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    void beginningOfSpeech() const;
    void bufferReceived(const std::vector< int8_t>&) const;
    void endOfSpeech() const;
    void error(int32_t) const;
    void partialResults(const ::android::os::Bundle&) const;
    void readyForSpeech(const ::android::os::Bundle&) const;
    void results(const ::android::os::Bundle&) const;
    void rmsChanged(float) const;

};
}
}


