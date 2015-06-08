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
class SynthesisCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SynthesisCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SynthesisCallback(const ::android::speech::tts::SynthesisCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SynthesisCallback(::android::speech::tts::SynthesisCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::speech::tts::SynthesisCallback& operator=(const ::android::speech::tts::SynthesisCallback& x) {obj = x.obj; return *this;}
    ::android::speech::tts::SynthesisCallback& operator=(::android::speech::tts::SynthesisCallback&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getMaxBufferSize() const;
    int32_t start(int32_t, int32_t, int32_t) const;
    int32_t audioAvailable(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t done() const;
    void error() const;

};
}
}
}


