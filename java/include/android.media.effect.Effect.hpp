#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace effect { class EffectUpdateListener; } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
namespace effect {
class Effect : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Effect(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Effect(const ::android::media::effect::Effect& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Effect(::android::media::effect::Effect&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::effect::Effect& operator=(const ::android::media::effect::Effect& x) {obj = x.obj; return *this;}
    ::android::media::effect::Effect& operator=(::android::media::effect::Effect&& x) {obj = std::move(x.obj); return *this;}
    
    Effect();
    ::java::lang::String getName() const ;
    void apply(int32_t, int32_t, int32_t, int32_t) const ;
    void setParameter(const ::java::lang::String&, const ::java::lang::Object&) const ;
    void setUpdateListener(const ::android::media::effect::EffectUpdateListener&) const ;
    void release() const ;

};
}
}
}


