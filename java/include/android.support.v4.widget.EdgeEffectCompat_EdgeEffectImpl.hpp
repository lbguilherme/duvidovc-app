#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class EdgeEffectCompat_EdgeEffectImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EdgeEffectCompat_EdgeEffectImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EdgeEffectCompat_EdgeEffectImpl(const ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EdgeEffectCompat_EdgeEffectImpl(::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl& operator=(const ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl& operator=(::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object newEdgeEffect(const ::android::content::Context&) const ;
    void setSize(const ::java::lang::Object&, int32_t, int32_t) const ;
    bool isFinished(const ::java::lang::Object&) const ;
    void finish(const ::java::lang::Object&) const ;
    bool onPull(const ::java::lang::Object&, float) const ;
    bool onRelease(const ::java::lang::Object&) const ;
    bool onAbsorb(const ::java::lang::Object&, int32_t) const ;
    bool draw(const ::java::lang::Object&, const ::android::graphics::Canvas&) const ;

};
}
}
}
}


