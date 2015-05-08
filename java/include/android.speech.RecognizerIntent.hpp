#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }

namespace android {
namespace speech {
class RecognizerIntent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RecognizerIntent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RecognizerIntent(const ::android::speech::RecognizerIntent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RecognizerIntent(::android::speech::RecognizerIntent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::RecognizerIntent& operator=(const ::android::speech::RecognizerIntent& x) {obj = x.obj; return *this;}
    ::android::speech::RecognizerIntent& operator=(::android::speech::RecognizerIntent&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::content::Intent getVoiceDetailsIntent(const ::android::content::Context&);

};
}
}


