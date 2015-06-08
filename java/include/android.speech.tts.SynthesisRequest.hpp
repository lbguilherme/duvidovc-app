#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace speech {
namespace tts {
class SynthesisRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SynthesisRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SynthesisRequest(const ::android::speech::tts::SynthesisRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SynthesisRequest(::android::speech::tts::SynthesisRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::SynthesisRequest& operator=(const ::android::speech::tts::SynthesisRequest& x) {obj = x.obj; return *this;}
    ::android::speech::tts::SynthesisRequest& operator=(::android::speech::tts::SynthesisRequest&& x) {obj = std::move(x.obj); return *this;}
    
    SynthesisRequest(const ::java::lang::String&, const ::android::os::Bundle&);
    ::java::lang::String getText() const;
    ::java::lang::String getLanguage() const;
    ::java::lang::String getCountry() const;
    ::java::lang::String getVariant() const;
    int32_t getSpeechRate() const;
    int32_t getPitch() const;
    ::android::os::Bundle getParams() const;

};
}
}
}


