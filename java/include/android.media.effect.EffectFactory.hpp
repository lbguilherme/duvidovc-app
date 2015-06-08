#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace effect { class Effect; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
namespace effect {
class EffectFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EffectFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EffectFactory(const ::android::media::effect::EffectFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EffectFactory(::android::media::effect::EffectFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::effect::EffectFactory& operator=(const ::android::media::effect::EffectFactory& x) {obj = x.obj; return *this;}
    ::android::media::effect::EffectFactory& operator=(::android::media::effect::EffectFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::media::effect::Effect createEffect(const ::java::lang::String&) const;
    static bool isEffectSupported(const ::java::lang::String&);

};
}
}
}


