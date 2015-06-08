#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace effect { class EffectContext; } } }
namespace android { namespace media { namespace effect { class EffectFactory; } } }

namespace android {
namespace media {
namespace effect {
class EffectContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EffectContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EffectContext(const ::android::media::effect::EffectContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EffectContext(::android::media::effect::EffectContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::effect::EffectContext& operator=(const ::android::media::effect::EffectContext& x) {obj = x.obj; return *this;}
    ::android::media::effect::EffectContext& operator=(::android::media::effect::EffectContext&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::media::effect::EffectContext createWithCurrentGlContext();
    ::android::media::effect::EffectFactory getFactory() const;
    void release() const;

};
}
}
}


