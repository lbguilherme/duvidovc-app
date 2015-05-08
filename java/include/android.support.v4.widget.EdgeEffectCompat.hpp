#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class EdgeEffectCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EdgeEffectCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EdgeEffectCompat(const ::android::support::v4::widget::EdgeEffectCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EdgeEffectCompat(::android::support::v4::widget::EdgeEffectCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::EdgeEffectCompat& operator=(const ::android::support::v4::widget::EdgeEffectCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::EdgeEffectCompat& operator=(::android::support::v4::widget::EdgeEffectCompat&& x) {obj = std::move(x.obj); return *this;}
    
    EdgeEffectCompat(const ::android::content::Context&);
    void setSize(int32_t, int32_t) const ;
    bool isFinished() const ;
    void finish() const ;
    bool onPull(float) const ;
    bool onRelease() const ;
    bool onAbsorb(int32_t) const ;
    bool draw(const ::android::graphics::Canvas&) const ;

};
}
}
}
}

#include "android.support.v4.widget.EdgeEffectCompat_BaseEdgeEffectImpl.hpp"
#include "android.support.v4.widget.EdgeEffectCompat_EdgeEffectIcsImpl.hpp"
#include "android.support.v4.widget.EdgeEffectCompat_EdgeEffectImpl.hpp"

