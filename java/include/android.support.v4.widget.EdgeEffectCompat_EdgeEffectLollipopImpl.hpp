#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.EdgeEffectCompat_EdgeEffectIcsImpl.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class EdgeEffectCompat_EdgeEffectLollipopImpl : public virtual ::java::lang::Object,
                                                public virtual ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EdgeEffectCompat_EdgeEffectLollipopImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl(_obj), ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EdgeEffectCompat_EdgeEffectLollipopImpl(const ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl((jobject)0), ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl((jobject)0) {obj = x.obj;}
    EdgeEffectCompat_EdgeEffectLollipopImpl(::android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl((jobject)0), ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl& operator=(const ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl& operator=(::android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool onPull(const ::java::lang::Object&, float, float) const;

};
}
}
}
}


