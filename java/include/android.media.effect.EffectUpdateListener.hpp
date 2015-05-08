#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace effect { class Effect; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace media {
namespace effect {
class EffectUpdateListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EffectUpdateListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EffectUpdateListener(const ::android::media::effect::EffectUpdateListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EffectUpdateListener(::android::media::effect::EffectUpdateListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::effect::EffectUpdateListener& operator=(const ::android::media::effect::EffectUpdateListener& x) {obj = x.obj; return *this;}
    ::android::media::effect::EffectUpdateListener& operator=(::android::media::effect::EffectUpdateListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onEffectUpdated(const ::android::media::effect::Effect&, const ::java::lang::Object&) const ;

};
}
}
}


