#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { namespace animation { class Interpolator; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ScrollerCompat_ScrollerCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScrollerCompat_ScrollerCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScrollerCompat_ScrollerCompatImpl(const ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ScrollerCompat_ScrollerCompatImpl(::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl& operator=(const ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl& operator=(::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object createScroller(const ::android::content::Context&, const ::android::view::animation::Interpolator&) const ;
    bool isFinished(const ::java::lang::Object&) const ;
    int32_t getCurrX(const ::java::lang::Object&) const ;
    int32_t getCurrY(const ::java::lang::Object&) const ;
    float getCurrVelocity(const ::java::lang::Object&) const ;
    bool computeScrollOffset(const ::java::lang::Object&) const ;
    void startScroll(const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t) const ;
    void startScroll(const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void fling(const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void fling(const ::java::lang::Object&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void abortAnimation(const ::java::lang::Object&) const ;
    void notifyHorizontalEdgeReached(const ::java::lang::Object&, int32_t, int32_t, int32_t) const ;
    void notifyVerticalEdgeReached(const ::java::lang::Object&, int32_t, int32_t, int32_t) const ;
    bool isOverScrolled(const ::java::lang::Object&) const ;
    int32_t getFinalX(const ::java::lang::Object&) const ;
    int32_t getFinalY(const ::java::lang::Object&) const ;

};
}
}
}
}


