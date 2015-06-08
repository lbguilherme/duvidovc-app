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
class UtteranceProgressListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UtteranceProgressListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UtteranceProgressListener(const ::android::speech::tts::UtteranceProgressListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UtteranceProgressListener(::android::speech::tts::UtteranceProgressListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::UtteranceProgressListener& operator=(const ::android::speech::tts::UtteranceProgressListener& x) {obj = x.obj; return *this;}
    ::android::speech::tts::UtteranceProgressListener& operator=(::android::speech::tts::UtteranceProgressListener&& x) {obj = std::move(x.obj); return *this;}
    
    UtteranceProgressListener();
    void onStart(const ::java::lang::String&) const;
    void onDone(const ::java::lang::String&) const;
    void onError(const ::java::lang::String&) const;

};
}
}
}


